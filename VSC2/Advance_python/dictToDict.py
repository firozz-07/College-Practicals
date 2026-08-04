import csv
data=[
    {"name":"uzaifa","age":22,"city":"vijapur"},
    {"name":"adnan","age":24,"city":"delhi"},
    {"name":"lala","age":80,"city":"hyderabad"}
]
with open("student.csv","w",newline="") as file:
    writer=csv.DictWriter(file,fieldnames=["name","age","city"])
    writer.writeheader()
    writer.writerows(data)
print("done")