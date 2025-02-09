// Include the necessary headers
#include "AIAgentRequestComponent.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Misc/Paths.h"
#include "JsonUtilities.h"

// Sets default values for this component's properties
UAIAgentRequestComponent::UAIAgentRequestComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UAIAgentRequestComponent::BeginPlay()
{
    Super::BeginPlay();

    // Send a request to the Flask server
    SendRequestToFlaskServer();
}

// Called every frame
void UAIAgentRequestComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Function to send an HTTP request just for testing 
void UAIAgentRequestComponent::SendRequestToFlaskServer()
{
    // Get the HTTP module
    FHttpModule* Http = &FHttpModule::Get();

    if (!Http) return;

    // Create an HTTP request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    // Set the URL of the Flask server (replace "127.0.0.1:5000/endpoint" with your Flask server's URL and endpoint)
    FString Url = TEXT("http://127.0.0.1:5000/call-function-param");

    Request->SetURL(Url);
    Request->SetVerb("GET"); // Use "POST" if you're sending data
    //Request->SetVerb("POST");
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    /*
    // Create a JSON object with the message
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField("message", "Hello From Unreal");  // Add the message string to JSON object

    // Serialize JSON object to string
    FString ContentJson;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&ContentJson);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    // Set the content of the request with the serialized JSON
    Request->SetContentAsString(ContentJson);
    */
    // Bind the response callback
    Request->OnProcessRequestComplete().BindUObject(this, &UAIAgentRequestComponent::OnResponseReceived);

    // Send the request
    Request->ProcessRequest();
}


// Function to send an HTTP request just for testing 
void UAIAgentRequestComponent::StartAIAgent()
{
    // Get the HTTP module
    FHttpModule* Http = &FHttpModule::Get();

    if (!Http) return;

    // Create an HTTP request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    // Set the URL of the Flask server (replace "127.0.0.1:5000/endpoint" with your Flask server's URL and endpoint)
    FString Url = TEXT("http://127.0.0.1:5000/call-start-ai-agent");

    Request->SetURL(Url);
    Request->SetVerb("GET"); // Use "POST" if you're sending data
    //Request->SetVerb("POST");
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    // Bind the response callback
    Request->OnProcessRequestComplete().BindUObject(this, &UAIAgentRequestComponent::OnResponseReceived);

    // Send the request
    Request->ProcessRequest();
}


// Function to send an HTTP request just for testing 
void UAIAgentRequestComponent::Speak()
{
    // Get the HTTP module
    FHttpModule* Http = &FHttpModule::Get();

    if (!Http) return;

    // Create an HTTP request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    // Set the URL of the Flask server (replace "127.0.0.1:5000/endpoint" with your Flask server's URL and endpoint)
    FString Url = TEXT("http://127.0.0.1:5000/call-speak");

    Request->SetURL(Url);
    Request->SetVerb("GET"); // Use "POST" if you're sending data
    //Request->SetVerb("POST");
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    // Bind the response callback
    Request->OnProcessRequestComplete().BindUObject(this, &UAIAgentRequestComponent::OnResponseReceived);

    // Send the request
    Request->ProcessRequest();
}




// Function to send an HTTP request just for testing 
void UAIAgentRequestComponent::CheckAIAgentStatus()
{
    // Get the HTTP module
    FHttpModule* Http = &FHttpModule::Get();

    if (!Http) return;

    // Create an HTTP request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    // Set the URL of the Flask server (replace "127.0.0.1:5000/endpoint" with your Flask server's URL and endpoint)
    FString Url = TEXT("http://127.0.0.1:5000/call-check-status");

    Request->SetURL(Url);
    Request->SetVerb("GET"); // Use "POST" if you're sending data
    //Request->SetVerb("POST");
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    // Bind the response callback
    Request->OnProcessRequestComplete().BindUObject(this, &UAIAgentRequestComponent::OnResponseReceived);

    // Send the request
    Request->ProcessRequest();
}




// Response callback
void UAIAgentRequestComponent::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful && Response.IsValid())
    {
        FString ResponseContent = Response->GetContentAsString();
        UE_LOG(LogTemp, Log, TEXT("Response from Flask: %s"), *ResponseContent);

        // Parse JSON if needed
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);
        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            FString Message = JsonObject->GetStringField("message");
            UE_LOG(LogTemp, Log, TEXT("Message from Flask: %s"), *Message);
            RequestStatus = Message;
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Request failed or response was invalid."));
    }
}
