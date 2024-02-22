#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Maxlen(int arr[], int n, int target)
{
    /*int len=INT_MIN;
    int e=-1;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==target){
                if(len<j-i+1)
                {
                    len=j-i+1;
                    e=j;
                }
            }
        }
    }
    cout<<e-len+1<<" - "<<e;*/
    unordered_map<int,int> mp;
    int maxlength=0;
    int current=0;
    for(int i=0;i<n;i++)
    {
        current+=arr[i];
        if(mp.find(current)==mp.end())
        {
            mp[current]=i;
        }
        if(mp.find(current-target)!=mp.end())
        {
            maxlength=max(maxlength,i-mp[current-target]);
        }
    }
    cout<<maxlength;
}
int main()
{
    int arr[]={5, 6, -5, 5, 3, 5, 3, -2, 0};
    int  n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    Maxlen(arr,n,target);
}
