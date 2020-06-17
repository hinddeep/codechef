/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

// https://www.codechef.com/viewsolution/34094409
// https://www.codechef.com/JUNE20B/problems/EOEO

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 

typedef long long ll;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin >> cases;
    
    while(cases--)
    {
        ll ts, js = 0;
        bool flag = true;
        cin >> ts;
        
        if (ts & 1) //ts is odd
        {
            js = (ts - 1)/2;
        }
        else //ts is even
        {
            if((ts&(ts-1)) != 0)  // skip powers of 2 as they will always yield 0
            {   
                while(!(ts & 1)) // divide ts by 2 till it is even
                    ts >>= 1; 
                ts *= 2;
                js = ((ts - 6)/4)+1;
                
                /* Slightly optimized method */
                // js = 1;
                // for(ll i = 6; i <= pow(10, 18); i+=4)
                // {
                //     if(ts%i == 0)
                //     {
                //         ll temp = ts/i;
                //         if((temp&(temp-1)) == 0)
                //             break;
                //         else
                //             js++;
                //     }
                //     else
                //         js++;
                // }
                /* Naive Method */
                // for(ll i = 2; i <= ts; i+=2)
                // {
                //     ll temp = i;
                //     ll ts_copy = ts;
                //     while(!(ts_copy & 1) && !(temp & 1)) // continue until both are even  
                //     {
                //         ts_copy >>= 1;  // fast division by 2
                //         temp >>= 1;
                //     }
                //     if((ts_copy & 1) && !(temp & 1)) //ts is odd and js is even
                //         js++;
                // }
            }
        }
        cout << js <<"\n"; 
    }
	return 0;
}
