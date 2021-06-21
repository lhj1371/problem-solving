def isprime(n):
    n = int(n)
    if (n<2): return False
    for p in primes:
        if p*p>n:
            break
        if n%p==0:
            return False
    return True

def istrunc(n):
    n = str(n) 

    for i in range(len(n)):
        if (not isprime(n[:i+1])) or (not isprime(n[i:])):
            return False
    return True 

primes = []
ret = 0
for i in range(2, 1000000):
    if isprime(i):
        primes.append(i)
    if i>10 and istrunc(i):
        ret += i

print(ret)
