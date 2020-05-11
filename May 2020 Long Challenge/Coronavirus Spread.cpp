// https://www.codechef.com/viewsolution/32866888
// https://www.codechef.com/MAY20B/problems/COVID19

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cases = 0, n = 0, counter = 0, previous_counter = 0, min = 1, max = 1;
	cin >> cases;
	
	for(int k = 0; k < cases; k++)
	{
	  	cin >> n;
    	int line[n];
    	
    	for(int i = 0; i < n; i++)
        {
            cin >> line[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            counter = 1;
            if(i>0)
            {
                for(int j = i; j > 0; j--)
                {
                    if(line[j] - line[j-1] <= 2)
                    {
                        counter += 1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
         
            for(int j = i; j < n - 1; j++)
            {
                if(line[j+1] - line[j] <= 2)
                {
                    counter += 1;
                }
                else
                {
                    break;
                }
            }
            // cout << "counter:" << counter << endl;
            if(i == 0)
            {
                min = counter;
                max = counter;
            }
            if(counter < min)
            {
                min = counter;
            }
            if(counter > max)
            {
                max = counter;
            }
           
        }
        cout << min << " " << max << endl;
	}
	return 0;
}
