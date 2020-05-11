# cook your dish here
# https://www.codechef.com/viewsolution/32857713
# https://www.codechef.com/problems/TABLET

cases = int(input())

for _ in range(cases):
    (n, b) = map(int, input().split(' '))
    area = 0
    for x in range(n):
        (w, h, p) = map(int, input().split(' '))
        if p <= b:
            if (w * h) > area:
                area = w * h
    if area == 0:
        print('no tablet')
    else:
        print(area)