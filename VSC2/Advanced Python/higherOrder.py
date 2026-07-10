def square(x):
    return x*x
numbers=[1,2,3,4,5]
result=list(map(square,numbers))
print("original list",numbers)
print("squared  list",result)