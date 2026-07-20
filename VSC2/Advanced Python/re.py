import re 
abt="""My name is firoz i am 19 year old i was born on 24-06-2007 to contact me this is my contact no. 7776808049 firozz0007@gmail.com"""

print("Search Example : ",re.search("firoz",abt))
print(" findall Example : ",re.findall("firoz",abt))
print(" match Example : ",re.match("My",abt))
print(" Split Example : ",re.split("\s",abt))
print(" sub Example : ",re.sub("firoz","irfan",abt))
print(" extracting phone Example : ",re.findall(r"\d{10}",abt))
print(" extracting email Example : ",re.findall(r"\w+@\w+\.\w+",abt))
print(" extracting date Example : ",re.findall(r"(\d{2})-(\d{2})-(\d{4})",abt))