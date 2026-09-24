import itertools
num=[1,2,3,4,5,6]
it=iter(num)
print(next(it))
print(next(it))
print(next(it))
def nums():
  yield 10
  yield 20
  yield 30
  yield 40
gen=nums()
print(next(gen))
print(next(gen))
print(next(gen))