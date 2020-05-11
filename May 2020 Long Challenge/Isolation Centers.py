# cook your dish here
# https://www.codechef.com/MAY20B/problems/CORUS/
# https://www.codechef.com/viewsolution/32860954
from collections import Counter

cases = int(input())

for _ in range(cases):
    (n, q) = map(int, input().split(' '))
    c = []
    
    inpstr = input()
    for i in range(q):
        c.append(int(input()))
    
    repeats = Counter(inpstr)
    for i in c:
        count = 0
        for j in repeats:
            if repeats[j] - i > 0:
                count = count + repeats[j] - i
        print(count)
