def isprime(n):
    for p in primes:
        if p*p>n:
            break
        if n%p==0:
            return False
    return True

def pandigit(n):
    n = ''.join(sorted(str(n)))
    return n==''.join(map(str, range(1, len(n)+1)))

primes = []
maxret = 0
for i in range(2, 10000000): # there is no 8- and 9-digit pandigital primes
    if isprime(i):
        primes.append(i)
        if pandigit(i) and i>maxret:
            maxret = i

print(maxret)
