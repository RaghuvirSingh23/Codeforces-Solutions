n = input()
z = n.split(" ")
n1 = z[0]
n2 = z[1]
k = input().split()
l = k[int(n2)-1]
if int(l) != 0:
	g = 0
	for i in range(int(n2),len(k)):
		if k[i] == l:
			g += 1
		else:
			break
	print(g + int(n2))
else:
	h = 0
	for i in k:
		if int(i)> 0:
			h+=1
		else:
			continue
	print(h)

