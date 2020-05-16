// https://www.codechef.com/LRNDSA01/problems/FCTRL
// https://www.codechef.com/viewsolution/33097934

#include <iostream>
using namespace std;

// Code Taken from: https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
inline void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c;  // register int c can also be written as int c as register keyword has been deprecated in C++17
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar_unlocked(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar_unlocked(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar_unlocked()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}

int main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cases, n, zeros = 0, divisor = 5, counter;
    fastscan(cases);
    while(cases--)
	{
	    fastscan(n);
	    zeros = 0;
	    divisor = 5;
	    while((counter = n /divisor) > 0)
	    {
	        zeros += counter;
	        divisor *= 5;
	    }
	    cout << zeros << "\n";
	}
	return 0;
}
