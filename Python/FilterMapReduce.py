from functools import reduce 

number=[12,31,90,67]
odd=list(filter(lambda x:x%2==1,number))
print(" filter's Example : ",odd)

double=list(map(lambda x:x*2,number))
print("Map example : ", double)

total=reduce(lambda x,y:x+y,number)
print("Reduce Example :",total)
