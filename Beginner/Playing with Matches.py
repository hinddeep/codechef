# cook your dish here
# https://www.codechef.com/viewsolution/32849302
# https://www.codechef.com/problems/MATCHES
# IMPORTANT NOTE: Solving the same problem using Java results in Time Limit Exceeded error.
# Check the solution below
# https://www.codechef.com/viewsolution/32849116 
# In many problems Python produces output faster than Java even though the logic / algorithm remains the same

cases = int(input())
digs = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

for _ in range(cases):
    temp = input()
    a, b = temp.split()
    a = int(a)
    b = int(b)
    total = int(a+b)
    mysum = 0
    while total > 0:
        mysum = mysum + digs[int(total%10)]
        total = int(total / 10)
    print(mysum)
        
        