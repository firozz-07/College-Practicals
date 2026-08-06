import itertools
print("1.count()")
counter=itertools.count(start=1,step=2)
for i in range(5):
    print(next(counter))
print("2.cycle()")
colors=itertools.cycle(["red","green","blue"])
for i in range(8):
    print(next(colors))
print("3.repeat()")
for item in itertools.repeat("python ",5):
    print(item)

print("4.permutations()")
letters=["A","B","C"]
for item in itertools.permutations(letters):
    print(item)

print("5.combinations()")
items=["Pen","book","bag"]
for item in itertools.combinations(items,2):
    print(item)
