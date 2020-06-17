/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

// https://www.codechef.com/viewsolution/34066871
// https://www.codechef.com/JUNE20B/problems/XYSTR

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
        string s;
        cin >> s;
        int pairs = 0;
        for(int i = 0; i < s.length()-1; i++)
        {
            if(s[i] != s[i+1])
            {
                i++;
                pairs++;
            }
        }
        cout<<pairs<<endl;
    }
    
    
	return 0;
}
