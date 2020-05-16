// https://www.codechef.com/LRNDSA01/problems/CONFLIP
// https://www.codechef.com/viewsolution/33098508

#pragma GCC optimize("O2")  
#pragma GCC target("avx,avx2,fma") 

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
    
	int cases, I, N, Q, G, counter = 0;
	fastscan(cases);
	
	while(cases--)
	{
	    fastscan(G);
	    while(G--)
	    {
	       fastscan(I);
	       fastscan(N);
	       fastscan(Q);
	       if(N%2 == 0)
	        counter = N/2;
	       else 
	        if(I == Q) // start with head, expect head OR start with tail, expect tail
	            counter = N - ((N/2) + 1);
	            // N - ((N/2) + 1) = (N-2)/2 are equal considering floats but for ints these expressions are not equal
	        else // start with head, expect head OR start with tail, expect head
	            counter = ((N/2) + 1);
	       // (I == 1 && Q == 1) || (I == 2 && Q == 2) ---> I == Q
	       // (I == 1 && Q == 2) || (I == 2 && Q == 1) ---> I != Q
	       // and I == Q and I != Q are exactly opposite, so no need of if, elseif, directly use if else
	       
	       //counter = 0;
	       //for(int i = 0; i < N; i++)
	       //{
	       //    if((((N - i) % 2 == 0) && (I == Q)) || ((N - i) % 2 == 1) && (I != Q)) 
	       //     counter++;
	       //}
	       cout<<counter<<"\n";
	    }
	}
	
	return 0;
}
