// https://www.codechef.com/MAY20B/problems/CHANDF
// https://www.codechef.com/viewsolution/33006093

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int cases;
	long long int x, y, l, r, ans, max_ans, min_z;
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> cases;
	
	for(int i = 0; i<cases; i++)
	{
	  cin >> x;
	  cin >> y;
	  cin >> l;
	  cin >> r;
	   
	  max_ans = (x & l)*(y & l);
	  min_z = r;
	  
	  for(int j = l + 1; j <= r; j++)
	  {
	      ans = (x & j)*(y & j);
	    //  cout << "j: " << j << ", ans: " << ans << endl;
	     
	      if(ans > max_ans)
	      {
	          max_ans = ans;
	          min_z = j;
	      }
	      else if(ans == max_ans)
	      {
	           if(j < min_z)
	            {
	               min_z = j;
	            }
	      }
	  }
	  cout<<min_z<<"\n";
	}
	return 0;
}
