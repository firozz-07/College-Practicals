import json

student = [
    {"name": "firoz", "id": 102},
    {"name": "irfan", "id": 101}
]

with open("a.json", "w") as file:
    json.dump(student, file)

print("done")

with open("a.json", "r") as file:
    data = json.load(file)

for item in data:
    print(item)