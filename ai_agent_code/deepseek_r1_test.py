from atoma_sdk import AtomaSDK, models
import atoma_creds as ac


def chat_with_deepseek_r1(text):

    with AtomaSDK(
        bearer_auth=ac.api_key,
    ) as atoma_sdk:
        res = None
        try:
            # Call the model and get the response
            res = atoma_sdk.chat.create(messages=[
                {
                    "content": text,
                    "role": "user",
                },
            ], model="deepseek-ai/DeepSeek-R1", frequency_penalty=0, max_tokens=2048, n=1, presence_penalty=0, seed=123, stop=[
                "json([\"stop\", \"halt\"])",
            ], temperature=0.7, top_p=1, user="user-1234")

            # Extract AI response from 'choices' list
            if hasattr(res, 'choices') and len(res.choices) > 0:
                ai_response = res.choices[0].message.content
                
                # Remove the <think> part if it exists
                if ai_response.startswith('<think>'):
                    ai_response = ai_response.split('</think>', 1)[-1].strip()  # Keep only the final response

                print(f"AI Response: {ai_response}")
                return ai_response
            else:
                print("No valid response from AI")

        except models.APIError as e:
            # Handle exception
            print(f"API Error: {e}")


