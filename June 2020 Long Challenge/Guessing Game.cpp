/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

// https://www.codechef.com/viewsolution/34301895
// https://www.codechef.com/JUNE20B/problems/GUESSG

typedef long long ll;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, i = 1, temp = 0, lower_bound_odd = 0, upper_bound_odd, midpoint_odd;
    char ans = 'G';
    cin >> n;
    upper_bound_odd = n;
    
    while(i++ <= 120)
    {
        while(1)
        {
            cout<<1<<endl;
            cin>>ans;
            if(ans == 'E')
                exit(0);
            else if(ans == 'L')
                break;
            else
            {
                cout<<n<<endl;
                cin>>ans;
                if(ans == 'E')
                    exit(0);
                else if(ans == 'G')
                    break;
            }
        }
        temp = lower_bound_odd + upper_bound_odd;
        if (temp & 1)
            midpoint_odd = (temp + 1)/2;
        else
            midpoint_odd = temp/2;
        
        cout<<midpoint_odd<<endl;;
        cin>>ans;
    
        if(ans == 'G')
            lower_bound_odd = midpoint_odd;
        else if(ans == 'L')
            upper_bound_odd = midpoint_odd;
        else
            exit(0);
    }
	return 0;
}
