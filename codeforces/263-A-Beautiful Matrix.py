for i in range(5):
  f =[int(x) for x in  input().split(" ")]
  if 1 in f:
    x = f.index(1)
    print(abs(2-i) + abs(2-x))
    break
  else:
    continue