import sys
from collections import Counter

sys.stdin = open("input.txt")
for x in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    c = 1
    l = 2
    x = len(Counter(a[c-1:l-1]).keys()) # c(l,r)
    p