// cars can run at equal speed
// if the preceeding car is running at a speed lower than the subsequent car, the subsequent car will also run at the speed of the preceeding car
// Without fast I/O runtime is 0.12 sec
// With fast I/O execution time is 0.2 secs
// using getchar_unlocked brought down execution time from 0.2 to 0.00 secs! 
// for loop and while loop have almost same execution times

// https://www.codechef.com/LRNDSA01/problems/CARVANS
// https://www.codechef.com/LRNDSA01/submit/CARVANS


#include <iostream>
using namespace std;

// Code Taken from: https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
inline void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
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
	
	int cases, n, prev_speed, current_speed, counter = 1;
	fastscan(cases);
	
    while(cases--)
	{
	    fastscan(n);
	    fastscan(prev_speed);
	    counter = 1;
	  
	    for(int j = 1; j < n; j++)
	    {
	        fastscan(current_speed);
	        if(prev_speed >= current_speed)
	        {
	            counter++;
	            prev_speed = current_speed;
	        }
	    }
	    cout << counter << "\n";
	}
	return 0;
}