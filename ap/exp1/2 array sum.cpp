/*
https://www.hackerrank.com/challenges/simple-array-sum/problem

--------------------------------------------------------------------------------------------------------------------------
*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int size;
    cin>>size;
    
    int arr[size],sum=0;
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    
    cout<<sum<<endl;
}