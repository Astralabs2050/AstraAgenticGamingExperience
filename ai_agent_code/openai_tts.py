from openai import OpenAI
import creds  # Assuming creds contains your API key
import pygame


started_speaking = False

def speak(text):
    global started_speaking
# Initialize OpenAI client
    client = OpenAI(api_key=creds.api_key)

    # Generate speech and save to file
    response = client.audio.speech.create(
        model="tts-1",
        voice="shimmer",
        input=text,
    )
    audio_file = "output.mp3"
    response.stream_to_file(audio_file)

    # Initialize pygame mixer for audio playback
    pygame.mixer.init()

    # Load and play the audio file
    pygame.mixer.music.load(audio_file)
    started_speaking = True
    pygame.mixer.music.play()

    # Wait until the audio finishes playing
    print("Playing audio...")
    while pygame.mixer.music.get_busy():
        pygame.time.Clock().tick(10)

    print("Playback complete!")



# Clean up
def cleanup():
    global started_speaking
    
    pygame.mixer.music.stop()
    pygame.mixer.quit()  # Release the mixer
    started_speaking = False