import whisper
import wave
import pyaudio
import os

import torch
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

if __name__ == "__main__":
    try:
        # Record audio
        audio_file = record_audio(duration=10)  # Record for 10 seconds
        # Transcribe audio
        transcription = transcribe_audio(audio_file)
        print("\nTranscription:")
        print(transcription)
    finally:
        # Clean up the temporary audio file
        if os.path.exists(audio_file):
            os.remove(audio_file)
