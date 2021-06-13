n = int(input(""))
sum = 0

for i in range(n):
	z = input()
	x = z.split(" ")
	sum1 = 0
	for l in x:
		sum1 += int(l)
	if sum1 >= 2:
		sum+= 1
	else:
		continue

print(sum)