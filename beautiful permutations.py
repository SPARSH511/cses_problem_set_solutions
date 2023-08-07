n = int(input())
l,m = [],[]
for i in range(1,n+1):
    if i%2: l.append(i)
    else: m.append(i)
x = l+m
y = m+l
flag = 0
for i in range(len(x)-1):
    if abs(x[i]-x[i+1]) == 1: 
        flag = 1
        for i in range(len(y)-1):
            if abs(y[i]-y[i+1]) == 1:
                print("NO SOLUTION"); exit()
if flag == 1: print(*y)
else: print(*x)

