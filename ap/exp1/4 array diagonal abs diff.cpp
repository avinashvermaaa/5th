/*
https://www.hackerrank.com/challenges/diagonal-difference/problem
--------------------------------------------------------------------------------------------------------------------------
*/


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int size,i=0,j=0;
    cin>>size;
    
    int arr[size][size];
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int diagonal1=0,diagonal2=0;
    j=0;
    for(i=0;i<size;i++)
    {
        diagonal1 += arr[i][j];
        j++;
    }
   
    j = size-1;
     for(i=0;i<size;i++)
    {
        diagonal2 += arr[i][j];
        j--;
    }
   
    int abs_diff = 0;
    abs_diff = abs(diagonal1 - diagonal2);
    
    cout<<abs_diff<<endl;
}