import itertools
data=itertools.count(start=10,step=2)
for i in range(10):
  print(next(data))

data2=itertools.cycle(["a","b"])
for i in range(5):
  print(next(data2))

text=itertools.repeat("python",10)
for i in range(10):
  print(next(text))

a=[1,2,3,4]
b=[1,2,3,4]
c=itertools.chain(a,b)
for i in c:
  print(i)