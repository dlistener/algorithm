import sys

print(abs((lambda x: x[0] - x[1])
      (list(map(int, sys.stdin.readline().split())))))
