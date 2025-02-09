import whisper
import pyaudio
import numpy as np

# Load the Whisper model
model = whisper.load_model("small")

# Audio stream settings
FORMAT = pyaudio.paInt16  # 16-bit audio format
CHANNELS = 1             # Mono audio
RATE = 16000             # 16 kHz sample rate
CHUNK = 1024             # Number of frames per buffer

# Initialize PyAudio
audio = pyaudio.PyAudio()

# Open the audio stream
stream = audio.open(
    format=FORMAT,
    channels=CHANNELS,
    rate=RATE,
    input=True,
    frames_per_buffer=CHUNK
)

print("Listening... (Press Ctrl+C to stop)")

try:
    buffer = b""  # Buffer to store audio data
    while True:
        # Read audio data from the stream
        data = stream.read(CHUNK)
        buffer += data

        # Process audio in chunks of ~1 second
        if len(buffer) >= RATE * 10:  # Process every 2 seconds (adjustable)
            # Convert audio data to numpy array
            audio_data = np.frombuffer(buffer, dtype=np.int16).astype(np.float32) / 32768.0
            
            # Transcribe audio data
            print("Transcribing...")
            result = model.transcribe(audio_data, fp16=False)
            
            # Print transcription
            print("You said:", result["text"])
            
            # Clear buffer for next batch
            buffer = b""

except KeyboardInterrupt:
    print("\nStopping transcription...")

finally:
    # Clean up
    stream.stop_stream()
    stream.close()
    audio.terminate()
