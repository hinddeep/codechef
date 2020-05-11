# cook your dish here
# https://www.codechef.com/problems/ICL1902
# https://www.codechef.com/viewsolution/32850015

import math 

def calculate(num_c, squares):
    if(num_c == 0):
        print(squares)
    else:
        sqrt = int(math.sqrt(num_c))
        squares = squares + 1
        calculate(num_c - sqrt ** 2, squares)

cases = int(input())
for _ in range(cases):
    circle = int(input())
    calculate(circle, 0)