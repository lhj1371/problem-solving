def alphaorder(c):
    return ord(c) - ord('A') + 1

with open('p022_names.txt') as f:
    names = f.read()

names = [i[1:-1] for i in names.split(',')]
names = sorted(names)

ret = 0
for i, name in enumerate(names):
    ret += sum(map(alphaorder, name)) * (i+1)

print(ret)
