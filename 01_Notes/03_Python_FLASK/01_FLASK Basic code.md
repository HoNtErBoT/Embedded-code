# A Sample Flask Web Application

'
from flask import Flask
app = Flask(__name__)

@app.route("/")
def home():
    return "Hellow World"


if __name__ == '__main__':
    app.run(debug=True)
'
