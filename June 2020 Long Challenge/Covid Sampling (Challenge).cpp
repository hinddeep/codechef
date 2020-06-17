/* *************************************** 
*  AUTHOR: HINDDEEP SHAILESH PUROHIT     *
* ****************************************
*/

// https://www.codechef.com/viewsolution/34392281
// https://www.codechef.com/JUNE20B/problems/COVDSMPL

typedef long long ll;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int cases, total_infected, sub_matrix_infected, x, prev=0,per_row = 0, counter_row = 0, sum_row = 0;
    cin >> cases;
    
    while(cases--)
    {
        int n, p, counter = 0;
        per_row = 0;
        counter_row = 0;
        cin >> n;
        cin >> p;
        
        int population[n][n];
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                population[i][j] = 0;
                
        cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<"\n";
        cin>>total_infected;
        
        if(total_infected == -1)
            exit(0);
        if(total_infected == 0)
            goto printer;
       
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<n<<"\n"; 
        cin>>per_row;
        if(per_row == -1)
            exit(0);
        if(per_row > 0)
        {
            cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<"\n";    
            cin>>prev;
            if(prev == -1)
                break;
            else if(prev == 1)
            {
                counter++;
                population[0][0] = 1;
                if(counter == total_infected)
                    goto printer;
            }
            if(per_row == 1 && population[0][0] == 1)
                ;// do nothing
            else
            {
                 for(int j = 2; j < n; j++) 
                {
                    cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<j<<"\n"; 
                    cin>>sub_matrix_infected;
                    if(sub_matrix_infected == -1)
                        break;
                    if(sub_matrix_infected - prev == 1)
                    {
                        counter++;
                        counter_row++;
                        prev++;
                        population[0][j - 1] = 1;
                        if(counter == total_infected)
                            goto printer;
                        if(counter_row == per_row)
                            break;
                    }
                }
                if(per_row - prev == 1)
                    population[0][n - 1] = 1;
            }
        }
            
        per_row = 0;
        counter_row = 0;
        cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<1<<"\n"; 
        cin>>per_row;
        prev = population[0][0];
        if(per_row == -1)
            exit(0);
        if(per_row > 0)
        {
            if(per_row == 1 && population[0][0] == 1)
                ;//do nothing
            else
            {
              for(int i = 2; i < n; i++) 
                {
                    cout<<1<<" "<<1<<" "<<1<<" "<<i<<" "<<1<<"\n"; 
                    cin>>sub_matrix_infected;
                    if(sub_matrix_infected == -1)
                        break;
                    if(sub_matrix_infected - prev == 1)
                    {
                        counter++;
                        counter_row++;
                        prev++;
                        population[i - 1][0] = 1; 
                        if(counter == total_infected)
                            goto printer;
                        if(counter_row == per_row)
                            break;
                    }
                }
                if(per_row - prev == 1)
                    population[n - 1][0] = 1; 
            }
        }
       
        for(int i = 2; i <= n; i++) 
        {
            per_row = 0;
            counter_row = 0;
            sum_row = 0;
            cout<<1<<" "<<1<<" "<<1<<" "<<i<<" "<<n<<"\n"; 
            cin>>per_row;
            if(per_row == 0)
                continue;
            for(int a = 1; a < i; a++)
                for(int b = 1; b <= n; b++)
                    sum_row += population[a - 1][b - 1];
            
            for(int j = 2; j <= n; j++) 
            {
                prev = 0;
                for(int k = 1; k <= i; k++)
                    for(int l = 1; l <= j; l++)
                        prev += population[k - 1][l - 1];
                if(i == n && j == n)
                {
                    if(total_infected - prev == 1)
                    {
                        population[n - 1][n - 1] = 1;
                        goto printer;
                    }
                }
                else
                {
                    cout<<1<<" "<<1<<" "<<1<<" "<<i<<" "<<j<<"\n"; 
                    cin>>sub_matrix_infected;
                    if(sub_matrix_infected == -1)
                        exit(0);
                    if(sub_matrix_infected - prev == 1)
                    {
                        counter++;
                        counter_row++;
                        population[i - 1][j - 1] = 1; 
                        if(counter == total_infected)
                            goto printer;
                        if(counter_row == (per_row - sum_row) )
                            break;
                    }
                }
            }
        }
        
      
        printer: cout<<2<<"\n";        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
              cout << population[i][j]<<" ";
            cout<<"\n";
        }
        cin>>x;
        if(x == -1)
            exit(0);
    }
	return 0;
}
