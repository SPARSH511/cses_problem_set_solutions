def coin_change(coins,target):
    dp = [0]*(target+1)
    dp[0] = 0
    for i in coins: 
        if i > target: continue
        dp[i] = 1
    for i in range(1,target+1):
        if(dp[i] != 0): continue
        min_cost = float('inf')
        for j in range(1,i//2+1):
            if(dp[j] != 0 and dp[i-j] != 0):
                min_cost = min(min_cost,dp[j]+dp[i-j])
        dp[i] = min_cost
    if dp[target] == float('inf'): return -1
    else: return dp[target]
n,x = map(int,input().split())
coins = list(map(int,input().split()))
print(coin_change(coins,x))
    
