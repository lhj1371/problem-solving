ret = 0

for i in range(1, 1000000):
    base10 = str(i)
    if (base10!=base10[::-1]):
        continue
    base2 = str(bin(i))[2:]
    if (base2!=base2[::-1]):
        continue
    ret += i

print(ret)

