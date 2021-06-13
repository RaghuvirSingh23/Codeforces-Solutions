name = list(input())
list1 = []
for i in range(len(name)):
	if name[i] not in list1:
		list1.append(name[i])
if len(list1)%2 == 0:
	print("CHAT WITH HER!")
else:
	print("IGNORE HIM!")
