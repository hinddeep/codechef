/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Code Taken from: https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
inline void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    int c;  // register int c can also be written as int c as register keyword has been deprecated in C++17
  
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
    int cases, n, counter, temp;   
    
    fastscan(cases);
    
    while(cases--)
    {
        fastscan(n);
        int recipe[n], types[1000];    
        unordered_set<int> seq; 
        
        for(int i = 0; i<999; i++)
            types[i] = 0;
            
        for(int i = 0; i<n; i++)
        {
            fastscan(recipe[i]);
            types[recipe[i]]++;
        }
        counter = 0;
        for(int i = 0; i<999; i++)
        {
            if(types[i] != 0)
            {
                counter++;
                seq.insert(types[i]);  
            }
        }
        if((counter != seq.size()))
        {            
            cout<<"NO\n";
            continue; 
        }

        temp = recipe[0];
        int i;
        for(i = 0; i< n - 1; i++)  
        {
            for(int j = i; j < n; j++)
            {
                if(recipe[j] == temp)
                    continue;
                else
                {
                    for(int k = j + 1; k < n; k++)
                    {
                        if(recipe[k] == temp)
                        {
                            cout<<"NO\n";
                            goto outer;
                        }
                    }
                }
            }
        }      
        outer: if(i == (n-1))
            cout<<"YES\n";
    }
	return 0;
}
