import openai
import creds

# Set up your API key
openai.api_key = creds.api_key

# Function to interact with ChatGPT
def chat_with_gpt(prompt):
    response = openai.ChatCompletion.create(
        model="gpt-3.5-turbo",  # Use "gpt-4" or another available model
        messages=[
            {"role": "system", "content": "You are a helpful assistant."},  # Optional system message
            {"role": "user", "content": prompt}  # User's prompt
        ]
    )
    return response['choices'][0]['message']['content']

# Example usage
user_input = input("Ask me anything: ")
reply = chat_with_gpt(user_input)
print("ChatGPT:", reply)
