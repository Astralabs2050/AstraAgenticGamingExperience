import astra_ai_agent
from flask import Flask, request, jsonify


app = Flask(__name__)


def start_ai_agent():
    return {"message":astra_ai_agent.start_ai_agent()}


def speak():
    return {"message":astra_ai_agent.speak()}



def check_ai_agent_status():
    return {"message":astra_ai_agent.check_ai_agent_status()}


def greeting():
    return {"message":"Starting some function!"}



@app.route('/call-start-ai-agent', methods=['GET'])
def call_start_ai_agent():
    result = start_ai_agent()
    return jsonify(result)


@app.route('/call-speak', methods=['GET'])
def call_speak():
    result = speak()
    return jsonify(result)


@app.route('/call-check-status', methods=['GET'])
def call_check_status():
    result = check_ai_agent_status()
    return jsonify(result)


if __name__ == "__main__":
    app.run(host='0.0.0.0', port=5000, debug=True)  # Make server accessible locally
