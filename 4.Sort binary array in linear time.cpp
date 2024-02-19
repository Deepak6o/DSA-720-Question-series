#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void BinarySort(int nums[],int n)
{
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            zero++;
        }
        else{
            one++;
        }
    }

    int k=0;
    while(zero--)
    {
        nums[k++]=0;
    }
    while(one--)
    {
        nums[k++]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}
int main()
{
    int nums[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    int n= sizeof(nums)/sizeof(nums[0]);
    BinarySort(nums,n);

}
