n = int(input())
dp = [1,1,2,4,8,16,32]
for i in range(7,n+1): 
    dp.append((dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%(10**9+7))
print(dp[n])