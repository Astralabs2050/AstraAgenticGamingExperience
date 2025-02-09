// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HttpModule.h" // Include for HTTP functionality
#include "Interfaces/IHttpRequest.h" // Include for FHttpRequestPtr
#include "Interfaces/IHttpResponse.h" // Include for FHttpResponsePtr
#include "AIAgentRequestComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTRAAIAGENT_API UAIAgentRequestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAIAgentRequestComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Handle request
	UFUNCTION(BlueprintCallable, Category = "AI Agent")
	void SendRequestToFlaskServer();

	// Handle ai agent introduction
	UFUNCTION(BlueprintCallable, Category = "AI Agent")
	void StartAIAgent();


	// Handle user speaking with the ai agent 
	UFUNCTION(BlueprintCallable, Category = "AI Agent")
	void Speak();


	// Check on ai agent current status. Mainly for checking if it has started speaking or not
	UFUNCTION(BlueprintCallable, Category = "AI Agent")
	void CheckAIAgentStatus();

	
	// Handle request responses
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	// Current status
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Agent")
	FString RequestStatus;


		
};
