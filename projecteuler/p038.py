n = 9
ret = 0
while n>1:
    k = 1
    while True:
        nums = [k * i for i in range(1, n+1)]
        numstring = ''.join(map(str, nums))
        numstring_s = ''.join(sorted(numstring))
        if len(numstring)>9:
            break
        if numstring_s=='123456789':
            if int(numstring)>ret:
                ret = int(numstring)
        k += 1
    n -= 1

print(ret)
