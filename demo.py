import statistics as s

x = [10, 20, 20, 30, 40, 50]

print("Mean:", s.mean(x))
print("Median:", s.median(x))
print("Mode:", s.mode(x))
print("Variance:", s.variance(x))
print("SD:", s.stdev(x))
print("Range:", max(x)-min(x))
print("IQR:", s.quantiles(x, n=4)[2] - s.quantiles(x, n=4)[0])