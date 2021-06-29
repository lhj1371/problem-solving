with open('p042_words.txt') as f:
    x = f.read()

x = x.split(',')
x = [i[1:-1] for i in x]

triangles = [i * (i+1) / 2 for i in range(1, 100)]

ret = 0
for word in x:
    val = 0
    for c in word:
        val += ord(c) - ord('A') + 1
    if val in triangles:
        ret += 1

print(ret)
        

