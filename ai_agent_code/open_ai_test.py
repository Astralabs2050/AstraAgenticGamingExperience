import os
from openai import OpenAI
import creds

def chat_with_gpt(prompt, model="gpt-3.5-turbo", max_tokens=150):
    """
    Send a message to ChatGPT and get a response.
    
    Args:
        prompt (str): The message to send to ChatGPT
        model (str): The GPT model to use (default: gpt-3.5-turbo)
        max_tokens (int): Maximum number of tokens in the response
        
    Returns:
        str: ChatGPT's response
    """
    try:
        client = OpenAI(api_key=creds.api_key)
        
        response = client.chat.completions.create(
            model=model,
            messages=[
                {"role": "user", "content": prompt}
            ],
            max_tokens=max_tokens
        )
        
        return response.choices[0].message.content.strip()
    
    except Exception as e:
        return f"Error: {str(e)}"

def interactive_chat():
    """
    Start an interactive chat session with ChatGPT.
    Type 'quit' to exit the session.
    """
    print("Starting chat with GPT (Type 'quit' to exit)")
    print("-" * 50)
    
    while True:
        user_input = input("\nYou: ").strip()
        
        if user_input.lower() == 'quit':
            print("\nEnding chat session...")
            break
        
        response = chat_with_gpt(user_input)
        print(f"\nGPT: {response}")

"""
if __name__ == "__main__":
    # Example usage
    # Single message
    response = chat_with_gpt("What is the capital of France?")
    print(f"Response: {response}")
    
    # Or start interactive chat
    # interactive_chat()
"""