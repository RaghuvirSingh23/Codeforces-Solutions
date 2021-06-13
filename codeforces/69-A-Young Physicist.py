x = 0
y = 0
z = 0
n = int(input())
for i in range(n):
  l = [int(x) for x in input().split(" ")]
  x+= l[0]
  y+= l[1]
  z+= l[2]

if x== 0 and y==0 and z==0:
  print("YES")
else:
  print("NO")
