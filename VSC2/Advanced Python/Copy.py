import copy
org=[10,20,30,[40,50]]
shallow=copy.copy(org)
deep=copy.deepcopy(org)
shallow[3].append(90)
deep[3].append(12)

print("original",org)
print("shallow",shallow)
print("after the deep copy")
print("original",org)
print("deep copy",deep)
