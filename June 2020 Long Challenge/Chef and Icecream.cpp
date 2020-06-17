/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

// https://www.codechef.com/viewsolution/34071309
// https://www.codechef.com/JUNE20B/problems/CHFICRM

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
    int cases;
    fastscan(cases);
    
    while(cases--)
    {
        int n;
        fastscan(n);
        int customers[n];
        unordered_map<int, int> coins;
        bool flag = true;
        
        for(int i = 0; i < n; i++)
            fastscan(customers[i]);
       
        if(customers[0] > 5) 
        {
            flag = false;
            goto print;
        }
            
        coins[5] = 1;
        coins[10] = 0;
        coins[15] = 0;
        // for(int i = 0; i < n; i++)
        //     cout<<customers[i]<<endl;
        for(int i = 1; i < n; i++)
        {
            if(customers[i] == 5)
                coins[5]++;
            else if(customers[i] == 10 && coins[5] >= 1)
            {
                coins[10]++;
                coins[5]--;
            }
            else if(customers[i] == 15)
            {
                coins[15]++;
                if(coins[10] >= 1)
                    coins[10]--;
                else if(coins[5] >= 2)
                    coins[5] -= 2; 
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                flag = false;
                break;
            }
            // cout<<"i: "<<i<<endl;
            // for(auto x: coins)
            //     cout<<x.first<<": "<<x.second<<endl;
        }
        print: if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	return 0;
}
