def cross(x, y):
    return x[0]*y[1] - x[1]*y[0]

with open('p102_triangles.txt') as f:
    tris = f.read()

tris = tris.split()
ret = 0
for tri in tris:
    tri = list(map(int, tri.split(',')))
    tri = [tri[:2], tri[4:], tri[2:4]]
    csigns = [cross(tri[i], tri[(i+1)%3])>0 for i in range(3)]
    if csigns[0]==csigns[1]==csigns[2]:
        ret += 1

print(ret)
