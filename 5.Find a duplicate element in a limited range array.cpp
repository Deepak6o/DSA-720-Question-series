#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FindDupicate(vector<int>nums, int n)
{
   /* unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }

    for(auto x: mp)
    {
        if(x.second>1){
            return x.first;
        }
    }
    return 0;*/
    vector<bool> visited(n);
    for(auto x: nums)
    {
        if(visited[x]){
            return x;
        }
        visited[x]=true;
    }
}

int main()
{
    vector<int>nums={1, 2, 3, 4, 4};
    int n=nums.size();
    cout<<FindDupicate(nums,n);
}

