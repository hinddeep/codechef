// https://www.codechef.com/MAY20B/problems/TWOSTRS
// https://www.codechef.com/viewsolution/33006395

#include <iostream>
#include<string>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int cases = 0, n = 0, counter = 0, lena, lenb, min_length=0;
	string a, b;
    multimap <int, string> sbstra;
    multimap <int, string> sbstrb;
    multimap <int, string>::iterator itr1, itr2, itr3, lwrbound;
    
    string temp = "";
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> cases;

	for(int i = 0; i < cases; i++)
	{
	    cin >> a;
    	cin >> b;
    	cin >> n;
    	lena = a.length();
    	lenb = b.length();
    	string favstr[n];
    	int favint[n];
    	
    	cin >> favstr[0];
    	cin >> favint[0];
    	min_length = (favstr[0]).length();
    	
    	for(int j = 1; j < n; j++)
    	{
    	    cin >> favstr[j];
    	    cin >> favint[j];
    	    if((favstr[j]).length() < min_length)
    	    {
    	       min_length = (favstr[j]).length();
    	    }
    	} 
    	counter = 0;
    	if(lena != lenb)
    	{
        	    for(int j = 0; j < lena; j++)
        	    {
                	for(int l = j + 1; l < lena; l++)
                	{
                	        temp =  a.substr(j, l);
                	        sbstra.insert(pair<int, string>(temp.length(),temp));
                        	counter++;
                	}
        	    }
               
            	counter = 0;
        
                for(int j = 0; j < lenb; j++)
            	{
                	for(int l = j + 1; l < lenb; l++)
                	{  
                	        temp =  b.substr(j, l);
                	        sbstrb.insert(pair<int, string>(temp.length(),temp));
                        	counter++;
                	}
            	}
                
    	}
    	else
    	{
    	    for(int j = 0; j < lena; j++)
        	    {
                	for(int l = j + 1; l < lena; l++)
                	{
                	        temp =  b.substr(j, l);
                	        sbstra.insert(pair<int, string>(temp.length(), temp));
                	        temp =  b.substr(j, l);
                	        sbstrb.insert(pair<int, string>(temp.length(), temp));
                        	counter++;
                	}
        	    }
                
    	}

    	string combined = "";
    	int previous_pleasure = 0;
    	int current_pleasure = 0;
    	int pos = 0;
    	
    for(itr1 = sbstra.begin(); itr1 != sbstra.end(); itr1++)
    {
        int x = itr1->first;
        string y = itr1->second;
        if(x < min_length)
        {
            itr2 = sbstrb.begin();
            while(true)
            {
               x = itr2->first; 
               if(x == (min_length - 1))
               {
                   lwrbound = itr2;
                   break;
               }
               itr2++;
            }
        }
        else
        {
            lwrbound = sbstrb.begin();
        }
    	    for(itr3 = lwrbound; itr3 != sbstrb.end(); itr3++)
    	    {
    	        combined = y + itr3 -> second;
    	        
        	        for(int l = 0; l < n; l++)
        	        {
        	            if(favstr[l].length() <= combined.length())
        	            {
        	                pos = 0;
            	           while((pos = combined.find(favstr[l], pos)) != std::string::npos)
            	           {
            	               current_pleasure += favint[l];
            	               pos++;
            	           }
        	            }
        	        }
        	      
        	        if(current_pleasure > previous_pleasure)
        	        {
        	            previous_pleasure = current_pleasure;
        	        }
        	        current_pleasure = 0;
    	        }
    	}
     	cout << previous_pleasure << "\n";
	}
	return 0;
}
