// https://www.codechef.com/viewsolution/33111091
// https://www.codechef.com/LRNDSA01/problems/ZCO14003

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
    
    int n;
    cin >> n;
    ll budget[n], max;
    
    for(ll &x:budget) cin >> x;
    /*
    for(int i = 0; i < n; i++)
        cin >> budget[i]
    */
    
    sort(budget, budget + n);
    
    max = budget[0] * n;
    
    for(int i = 1; i<n; i++)
        if((budget[i] * (n-i)) > max)
            max = budget[i] * (n-i);
            
    cout << max;
	return 0;
}
