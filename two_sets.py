n = int(input())
sum = n*(n+1)//2
if sum%2: print("NO")
else:
    print("YES")
    target = sum//2
    i = 0
    cnt_sum = 0
    ans = set()
    main = {i for i in range(1,n+1)}
    if n%2:
        mid = (n+1)//2
        ans.add(mid)
        main.remove(mid)
        cnt_sum+=mid
    else:
        mid = n//2; mid1 = (n+2)//2
        ans.add(mid1); ans.add(mid)
        main.remove(mid1); main.remove(mid)
        cnt_sum+=(mid1+mid)
    while(cnt_sum < target):
        ans.add(i+1); cnt_sum+=(i+1); main.remove(i+1)
        if cnt_sum == target: break
        ans.add(n-i); cnt_sum+=(n-i); main.remove(n-i)
        if cnt_sum == target: break
        i+=1
    print(len(ans))
    print(*ans)
    print(len(main))
    print(*main)
    
