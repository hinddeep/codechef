// https://www.codechef.com/viewsolution/33002143
// https://www.codechef.com/LRNDSA01/problems/LAPIN

#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int cases, midpoint, lenS;
	string s;
	map<char, int> charfreq_1, charfreq_2;
	map<char, int>::iterator itr_1, itr_2;
	
	cin >> cases;
	for(int i = 0; i < cases; i++)
	{
	    charfreq_1.clear();
	    charfreq_2.clear();
	    for(char ch = 'a'; ch <= 'z'; ch++)
	    {
	        charfreq_1.insert(pair<char, int>(ch, 0));
	        charfreq_2.insert(pair<char, int>(ch, 0));
	    }
	   
	    cin >> s;
	    lenS = s.length();
	    midpoint = lenS / 2;
	    
	    if(lenS % 2 == 0)
	    {
	        for(int j = 0; j < midpoint; j++)
	        {
	            charfreq_1[s[j]] = charfreq_1[s[j]] + 1;
	        }
	    
	        for(int j = midpoint; j < lenS; j++)
	        {
	            charfreq_2[s[j]] = charfreq_2[s[j]] + 1;
	        }
	        for(itr_1 = charfreq_1.begin(), itr_2 = charfreq_2.begin(); itr_1 != charfreq_1.end(); itr_1++, itr_2++)
	        {
	            if(itr_1->second != itr_2->second)
	            {
	                cout << "NO" << endl;
	                break;
	            }
	        }
	        if(itr_1 == charfreq_1.end())
	        {
	            cout << "YES" << endl;
	        }
	    }
	    else
	    {
	        for(int j = 0; j < midpoint; j++)
	        {
	            charfreq_1[s[j]] = charfreq_1[s[j]] + 1;
	        }
	    
	        for(int j = midpoint + 1; j < lenS; j++)
	        {
	            charfreq_2[s[j]] = charfreq_2[s[j]] + 1;
	        }
	        for(itr_1 = charfreq_1.begin(), itr_2 = charfreq_2.begin(); itr_1 != charfreq_1.end(); itr_1++, itr_2++)
	        {
	            if(itr_1->second != itr_2->second)
	            {
	                cout << "NO" << endl;
	                break;
	            }
	        }
	        if(itr_1 == charfreq_1.end())
	        {
	            cout << "YES" << endl;
	        }
	    }
	}
	return 0;
}
