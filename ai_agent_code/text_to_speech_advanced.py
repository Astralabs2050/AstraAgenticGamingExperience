import pygame
import tempfile
from elevenlabs import ElevenLabs
import creds



started_speaking = False


def speak(text):

    global started_speaking

    # Initialize ElevenLabs client
    client = ElevenLabs(api_key=creds.api_key_elevenlabs)

    # Convert text to speech and get the audio bytes
    audio_data_generator = client.text_to_speech.convert(
        voice_id="9BWtsMINqrJLrRacOk9x",
        text=text
    )

    # Consume the generator to get the audio bytes
    audio_data = b"".join(audio_data_generator)

    # Save the audio to a temporary file
    with tempfile.NamedTemporaryFile(delete=False, suffix=".mp3") as temp_audio_file:
        temp_audio_file.write(audio_data)
        temp_audio_path = temp_audio_file.name

    # Initialize Pygame mixer
    pygame.mixer.init()

    # Load the audio file
    pygame.mixer.music.load(temp_audio_path)
    started_speaking = True

    # Play the audio
    pygame.mixer.music.play()
    

    # Keep the program running until the audio finishes
    while pygame.mixer.music.get_busy():
        pygame.time.Clock().tick(10)


# Clean up
def cleanup():
    global started_speaking
    
    pygame.mixer.music.stop()
    pygame.mixer.quit()  # Release the mixer
    started_speaking = False


# Example usage
#speak("Hello, how are you today?")
#speak("This is your second message.")
