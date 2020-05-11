# cook your dish here
# https://www.codechef.com/viewsolution/32855222
# https://www.codechef.com/problems/CHEFSTLT

cases = int(input())

def compare(s1, s2):
    minimum = 0
    maximum = 0
    for x in range(len(s1)):
        if s1[x] == '?' or s2[x] == '?':
            maximum = maximum + 1
        elif s1[x] != s2[x]:
            minimum = minimum + 1
            maximum = maximum + 1
    return (minimum, maximum)

for _ in range(cases):
    s1 = input()
    s2 = input()   
  
    (minimum, maximum) = compare(s1, s2)
    print(minimum,maximum)