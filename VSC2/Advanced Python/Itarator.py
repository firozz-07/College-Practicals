num=[10,20,30,40,50]
itr=iter(num)
print("Iterator Output:")
for i in range(5):
    print(next(itr))

def square():
    for i in range(1,6):
        yield i*i
print("generator output:")
gen=square()
for value in gen:
    print(value)
