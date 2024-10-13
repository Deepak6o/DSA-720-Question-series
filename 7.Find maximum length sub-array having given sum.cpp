//Find maximum length subarray having a given sum
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
// Bruteful solution O(n^2)
// void maxlensubarr(int n, int arr[], int target){
//     int res=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         int sum=0;
//         for(int j=i;j<n;j++)
//         {
//             sum+=arr[j];
//             if(sum==target)
//             {
//                 if(j-i+1>res)
//                 {
//                     res=j-i+1;
//                 }
//             }
//         }
//     }
//     cout<<res;
// }
void  maxlensubarr(int n, int arr[], int target){
    int maxlength=0;
    int currentsum=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        if(mp.find(currentsum)==mp.end()){
            mp[currentsum]=i;
        }
        if(mp.find(currentsum-target)!=mp.end()){
            maxlength=max(maxlength, i-mp[currentsum-target]);
        }
    }
    cout<<maxlength;

}
int main()
{
    int arr[] = { 5, 6, -5, 5, 3, 5, 3,-3, -2, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int target =8;
    maxlensubarr(n,arr,target);
}
