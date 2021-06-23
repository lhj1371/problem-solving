n = 1;
num = 1;
ret = 1;
nlist = [1, 10, 100, 1000, 10000, 100000, 1000000]

while n<=1000000:
    for c in str(num):
        if n in nlist:
            ret *= int(c)
        n += 1
    num += 1
    
print(ret)


