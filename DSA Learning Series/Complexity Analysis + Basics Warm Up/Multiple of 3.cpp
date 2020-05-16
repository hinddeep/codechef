// https://www.codechef.com/LRNDSA01/problems/MULTHREE
// https://www.codechef.com/viewsolution/33082018

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cases, d0, d1;
    long long int final_sum = 0,  intermediate_sum = 0, k; 
    cin >> cases;
	
    while(cases--)
	{
	     cin >> k >> d0 >> d1;
	     final_sum = d0 + d1;
	   //  cout<<final_sum<<"\n";
	   //  cout<<final_sum%10<<"\n";
	     if(final_sum%10 == 0 || final_sum%10 == 5){
            cout<<"NO\n";
            continue;
        }
	    if(k != 2)
	    {
	       final_sum += ((d0 + d1) % 10);
	       final_sum += 20*((k-3)/4);
	       for(int i = 0; i < (k-3)%4; i++)
	           final_sum += (final_sum%10);
	    }
	     if(final_sum % 3 == 0)
    	    cout<<"YES\n";
    	 else
    	    cout<<"NO\n";
	}
	return 0;
}