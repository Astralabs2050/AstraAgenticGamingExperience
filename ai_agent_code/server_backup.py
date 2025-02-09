from flask import Flask, request, jsonify

app = Flask(__name__)


def greeting(message):
    return {"message": f"Received message: {message}"}



@app.route('/call-function', methods=['GET'])
def call_function():
    result = greeting()
    return jsonify(result)


@app.route('/call-function-param', methods=['POST'])
def call_function_param():
    data = request.get_json()
    message = data.get("message", "")

    result = greeting(message)

    return jsonify(result)


if __name__ == "__main__":
    app.run(host='0.0.0.0', port=5000, debug=True)  # Make server accessible locally
