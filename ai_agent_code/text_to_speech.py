from gtts import gTTS
import pygame
import os


started_speaking = False


def speak(text):
    global started_speaking
    # Stop any previous audio playback
    if pygame.mixer.get_init() and pygame.mixer.music.get_busy():
        pygame.mixer.music.stop()
        pygame.mixer.quit()  # Release the mixer
        

    # Convert text to speech and save as an audio file
    tts = gTTS(text=text, lang='en')
    tts.save("output.mp3")
    # Initialize pygame mixer
    pygame.mixer.init()
    
    # Load and play the saved audio file
    pygame.mixer.music.load("output.mp3")
    started_speaking = True
    print("hello mixer")
    pygame.mixer.music.play()
    
    # Wait for the audio to finish playing
    while pygame.mixer.music.get_busy():
        pygame.time.Clock().tick(10)
        
        




def cleanup():
    global started_speaking
    started_speaking = False
    pygame.mixer.music.stop()
    pygame.mixer.quit()  # Release the mixer


# Example usage
#speak("Hello, how are you today?")
#speak("This is your second message.")
