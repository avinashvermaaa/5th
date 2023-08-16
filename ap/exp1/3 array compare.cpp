/*
https://www.hackerrank.com/challenges/compare-the-triplets/problem

--------------------------------------------------------------------------------------------------------------------------
*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int sum1=0,sum2=0;

    int arr1[3],arr2[3];
    
    for(int i=0;i<3;i++)
    {
        cin>>arr1[i];
    }
     
    for(int i=0;i<3;i++)
    {
        cin>>arr2[i];
    }
    
    for(int i=0;i<3;i++)
    {
        if(arr1[i] > arr2[i])
        {
            sum1++;
        }
        
        else if(arr2[i] > arr1[i])
        {
            sum2++; 
        }
        
    }
    
    cout<<sum1<<" "<<sum2;
}