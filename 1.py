import requests

url = "https://chat.openai.com/sandbox/mnt/data/Complete_Professional_ML_DL_Syllabus.pdf"
response = requests.get(url)

with open("Complete_Professional_ML_DL_Syllabus.pdf", "wb") as f:
    f.write(response.content)
