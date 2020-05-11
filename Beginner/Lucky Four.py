# cook your dish here
# https://www.codechef.com/viewsolution/32850132
# https://www.codechef.com/problems/LUCKFOUR
cases = int(input())

for _ in range(cases):
    num = int(input())
    counter = 0
    while num > 0:
        if int(num % 10) == 4:
            counter = counter + 1
        num = int(num / 10)
    print(counter)
