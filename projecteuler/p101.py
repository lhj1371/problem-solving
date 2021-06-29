def lagrange(x, y, z):
    n = len(x)
    tmp1 = [[(z-x[j]) / (x[i]-x[j]) if i!=j else 1 for j in range(n)] for i in range(n)]
    ret = 0
    for i in range(n):
        tmp2 = y[i]
        for j in range(n):
            tmp2 *= tmp1[i][j]
        ret += tmp2
    return ret


x = [[i**j for j in range(0, 11)] for i in range(1, 12)]
c = [1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1]
y = [sum([x[i][j] * c[j] for j in range(11)]) for i in range(11)]

ret = 0
for i in range(2, 12):
    ret += lagrange(range(1, i), y[:i-1], i)

print(ret)
