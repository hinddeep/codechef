# cook your dish here
# https://www.codechef.com/viewsolution/32856484
# https://www.codechef.com/problems/ADASCOOL
cases = int(input())

for _ in range(cases):
    (a, b) = map(int, input().split(' '))
    if a%2 != 0 and b%2 != 0:
        print("NO")
    else:
        print("YES")