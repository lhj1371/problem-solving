from itertools import permutations

primes = [2, 3, 5, 7, 11, 13, 17]
ret = 0

for perm in permutations(range(10)):
    if perm[0]==0: continue
    n = ''.join(map(str, perm))
    tosum = True
    for i in range(1, 8):
        if int(n[i:i+3])%primes[i-1]!=0:
            tosum = False

    if tosum:
        ret += int(n)

print(ret)
