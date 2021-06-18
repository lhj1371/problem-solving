def func(n):
    if n%2==0:
        return n/2
    else:
        return 3*n+1

def chain(n):
    if n in dp:
        return dp[n]
    ret = chain(func(n)) + 1
    dp[n] = ret
    return ret

dp = {1:0}
retc = 0
reti = 0
for i in range(1, 1000000):
    c = chain(i)
    if c>retc:
        retc = c
        reti = i

print(reti)

