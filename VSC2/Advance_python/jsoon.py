import json
def read_json(filename):
    try:
        with open(filename,"r")as file:
            data=json.load(file)
            return data
    except FileNotFoundError:
        print("not found")
student=read_json("student.json")
if student:
    print("dictionary data")
    print(student)
    print("\nTYpe: ",type(student))
    print("\n accessing value")
    print("Name",student["name"])
    print("Course",student["Course"])
    print("marks",student["marks"])