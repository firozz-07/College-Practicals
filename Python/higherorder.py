from functools import reduce
lists=[10,203,4,2,7]
fil=list(filter(lambda x:x%2==0,lists))
print(fil)

maps=list(map(lambda x:x**2,lists))
print(maps)

add=reduce(lambda a,b:a+b,lists)
print(add)
