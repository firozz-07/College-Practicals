import csv

with open("student.csv","r")as file:
    reader=csv.DictReader(file)
    student={
        row["name"]:{
            "age":row["age"],
            "city":row["city"]
        }
        for row in reader
    }
print(student)