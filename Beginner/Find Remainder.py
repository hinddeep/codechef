#Note that it's python3 Code. Here, we are using input() instead of raw_input().
#You can check on your local machine the version of python by typing "python --version" in the terminal.

#Read the number of test cases.
# https://www.codechef.com/viewsolution/32853470
# https://www.codechef.com/problems/FLOW002

T = int(input())
for tc in range(T):
	# Read integers a and b.
	(a, b) = map(int, input().split(' '))
	
	#Compute the answer
	#Complete the line below	
	ans = a % b
	print(ans)