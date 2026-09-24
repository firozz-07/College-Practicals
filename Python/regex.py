import re
text="i  old am 18 year old boy,good boy"
data=re.findall(r"\d+",text)
if(data):
  print("found")

split=re.split(r",",text)
print(split)

subs=re.sub("old","new",text)
print(subs)
subs2=re.subn("old","new",text)
print(subs2)

find=re.search(r"\d+",text)
print(find)