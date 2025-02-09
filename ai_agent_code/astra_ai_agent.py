import whisper
import wave
import pyaudio
import os
import torch
import context
import deepseek_r1_test as oai
import openai_tts as tts
import tkinter as tk
from tkinter import messagebox

# Check if CUDA is available
print(torch.cuda.is_available())

def record_audio(filename="temp_audio.wav", duration=10, rate=16000, chunk=1024):
    """Records audio from the default microphone and saves it to a file."""
    p = pyaudio.PyAudio()
    stream = p.open(format=pyaudio.paInt16,
                    channels=1,
                    rate=rate,
                    input=True,
                    frames_per_buffer=chunk)

    print(f"Recording for {duration} seconds...")
    frames = []

    for _ in range(0, int(rate / chunk * duration)):
        data = stream.read(chunk)
        frames.append(data)

    print("Recording complete. Saving audio...")
    stream.stop_stream()
    stream.close()
    p.terminate()

    with wave.open(filename, 'wb') as wf:
        wf.setnchannels(1)
        wf.setsampwidth(p.get_sample_size(pyaudio.paInt16))
        wf.setframerate(rate)
        wf.writeframes(b''.join(frames))

    return filename

def transcribe_audio(filename):
    """Transcribes audio from a file using Whisper."""
    print("Loading Whisper model...")
    model = whisper.load_model("tiny", device="cuda")  # Change "base" to "small", "medium", or "large" if needed
    print("Transcribing audio...")
    result = model.transcribe(filename)
    return result['text']

def on_listen_button_click():
    pass
    """Handles the 'Start Listening' button click event."""
    """
    try:
        # Record audio for 10 seconds
        audio_file = record_audio(duration=10)
        # Transcribe audio
        transcription = transcribe_audio(audio_file)
        reply = oai.chat_with_gpt(context.dat_user + transcription)
        # Display transcription in a message box
        #messagebox.showinfo("Transcription", transcription)
        tts.cleanup()
        tts.speak(reply)
        #messagebox.showinfo("Agent Response", reply)
        """

    
def speak():
    """Handles the 'Start Listening' button click event."""
    try:
        # Record audio for 10 seconds
        audio_file = record_audio(duration=10)
        # Transcribe audio
        transcription = transcribe_audio(audio_file)
        reply = oai.chat_with_deepseek_r1(context.dat_user + transcription)
        # Display transcription in a message box
        #messagebox.showinfo("Transcription", transcription)
        tts.cleanup()
        tts.speak(reply)
        
        #messagebox.showinfo("Agent Response", reply)
        tts.started_speaking = False
        return "end"
        
        
    except Exception as e:
        messagebox.showerror("Error", str(e))
    finally:
        # Clean up the temporary audio file
        if os.path.exists(audio_file):
            os.remove(audio_file)



def start_ai_agent():
    reply = oai.chat_with_deepseek_r1(context.dat_intro)
    tts.speak(reply)
    tts.started_speaking = False
    return "end"


def check_ai_agent_status():
    if tts.started_speaking:
        return "start"
    else:
        return "end"







# Create the Tkinter root window
#root = tk.Tk()
#reply = oai.chat_with_gpt(context.dat_intro)
#tts.speak(reply)
#messagebox.showinfo("Agent Response", reply)
#root.title("Astra AI Agent")

# Add a 'Start Listening' button
#listen_button = tk.Button(root, text="Start Listening", command=on_listen_button_click)
#listen_button.pack(pady=20)

# Run the Tkinter event loop
#root.mainloop()
