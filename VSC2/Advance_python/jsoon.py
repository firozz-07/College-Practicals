import json
def read_json(filename):
    try:
        with open(filename,"r")as file:
            data=json.load(file)
            return data
    except FileNotFoundError:
        print("not found")
student=read_json("me.json")
if student:
    print("dictionary data")
    # print(student)
    print("\nType: ",type(student))
    print("\n accessing value")
    print("Name",student["name"])
    print("roll_no",student["roll_no"])
    print("class",student["class"])
    print("interest",student["interest"])