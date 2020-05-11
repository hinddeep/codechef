# cook your dish here
# https://www.codechef.com/viewsolution/32962513 
# https://www.codechef.com/LRNDSA01/problems/FLOW007
cases = int(input())

for x in range(cases):
    num = int(input())
    rev = 0
    while(num > 0):
        rev = int(rev*10 + num%10)
        num = int(num / 10)
    print(rev)
