data=[10,21,23,30,55]
double=list(map(lambda x:x*2,data ))
print("map's example",double)

even_numbers = list(filter(lambda x: x % 2 == 0, data))
print("filter's example ",even_numbers)

info=[("firoz",32),("Irfan",69),("Arslan",67)]
sort=list(sorted(info , key=lambda x:x[0]))
print("sorted example ",sort)
