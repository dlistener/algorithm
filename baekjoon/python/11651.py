import sys

tmp = list()

for _ in range(int(sys.stdin.readline())):
    tmp.append(list(map(int, sys.stdin.readline().split())))
tmp = sorted(tmp, key=lambda x: (x[1], x[0]))

for i in tmp:
    print(i[0], i[1])

# lambda useage