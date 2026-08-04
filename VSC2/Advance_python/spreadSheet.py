import numpy as np 
sheet=np.array([
    [10,20,30],
    [40,50,60],
    [70,80,90]
])

print("original String\n")
print(sheet)

#  adding value
print("added two values ")
print(sheet[0][0]+sheet[1][1])

# update the values
sheet[0][0]=100
print("changed the value")
print(sheet[0][0])

# insert row
new_row=[11,21,31]
sheet=np.insert(sheet,1,new_row,axis=0)
print("new sheet")
print(sheet)


# delete row
sheet=np.delete(sheet,1,axis=0)
print("deleted a row ")
print(sheet)

# insert column
new_col=[80,70,50]
sheet=np.insert(sheet,1,new_col,axis=1)
print("adde a column")
print(sheet)

# delete col
sheet=np.delete(sheet,1,axis=1)
print("deleted a row ")
print(sheet)

