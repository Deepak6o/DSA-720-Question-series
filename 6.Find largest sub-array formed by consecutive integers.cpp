#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*Bruteful solution
bool linear(int arr[],int n, int x)
{

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return true;
        }
    }
    return false;
}
int largestSubarray(int nums[], int n)
{
    int longest=1;
    for(int i=0;i<n;i++)
    {
        int x=nums[i];
        int count=1;
        while(linear(nums,n,x+1)==true){
            x=x+1;
            count++;
            longest=max(longest,count);
        }

    }
    return longest;


}*/
int largestSubarray(int nums[],int n)
{
    sort(nums,nums+n);
    int lastSmall=INT_MIN;
    int longest=1;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]-1==lastSmall)
        {
            cnt++;
            lastSmall=nums[i];
        }
        else if(nums[i]!=lastSmall)
        {
            cnt=1;
            lastSmall=nums[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int main()
{
    int nums[] = {2, 0, 2, 1, 4, 3, 1, 0};
    int n= sizeof(nums)/sizeof(nums[0]);
    cout<<largestSubarray(nums,n);
}
