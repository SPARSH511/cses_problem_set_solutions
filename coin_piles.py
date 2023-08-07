for _ in range(int(input())):
    a,b = map(int,input().split())
    x,y = min(a,b),max(a,b)
    if(x == 0 and y == 0): print("YES"); continue
    elif(x == 0 or y == 0): print("NO"); continue
    else:
        k = (2*x-y)/3
        if k<0: print("NO")
        elif int(k) == k: print("YES")
        else: print("NO")
