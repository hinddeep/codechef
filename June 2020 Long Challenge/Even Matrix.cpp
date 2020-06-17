/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

// https://www.codechef.com/viewsolution/34109963
// https://www.codechef.com/JUNE20B/problems/EVENM

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 

typedef long long ll;

#include <iostream>
#include <bits/stdc++.h>
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
    int cases;
    fastscan(cases);
  
    while(cases--)
    {
       int n;
       fastscan(n);
       int arr[n][n];
       int i,j, no=1,top=0,bottom=n-1,left=0,right=n-1;
       for(i=1; no<=n*n; i++)
    	{
    		for(j=left; j<=right; j++)
    		    arr[top][j]=no++;
    		top++;
    		
    		for(j=top; j<=bottom; j++)
    		    arr[j][right]=no++;
    		right--;
    
    		for(j=right; j>=left; j--)
    		    arr[bottom][j]=no++;
    		bottom--;
    		
    		for(j=bottom; j>=top; j--)
    		    arr[j][left]=no++;
    		left++;
    	}
    	for(i=0; i<n; i++) {
    	    for(j=0; j<n; j++)
        	    cout<<arr[i][j]<<" ";
        	cout<<"\n";
    	}
    }
	return 0;
}
