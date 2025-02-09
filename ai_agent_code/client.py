import requests

url = "http://127.0.0.1:5000/recognize"
data = {"speech": "Test message"}  # Data to send
response = requests.post(url, json=data)  # Send POST request
print("Server response:", response.json())  # Print server response
