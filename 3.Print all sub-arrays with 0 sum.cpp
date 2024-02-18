#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void printSubarray(int nums[],int n)
{
   /* for(int i=0;i<n-1;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=nums[j];
            if(sum==0)
            {
                for(int k=i;k<=j;k++)
                {
                    cout<<nums[k]<<" ";
                }
                cout<<endl;
            }
        }
    }*/
    unordered_map<int,vector<int>> mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        if(sum==0)
        {
            cout<<0<<" to "<<i<<endl;
        }
        if(mp.find(sum)!=mp.end())
        {
            for(auto x: mp[sum])
            {
                cout<<(x+1)<<" to "<<i<<endl;
            }
        }
        mp[sum].push_back(i);
    }
}
int main()
{
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n= sizeof(nums)/sizeof(nums[0]);
    printSubarray(nums,n);

}
