// Print all subarrays with 0 sum


#include<iostream>
#include <algorithm>
#include<unordered_set>
#include<unordered_map>
#include<vector>
using namespace std;

//1. Using Brute-Force
// void printAllSubarrays(int n, int arr[]){
//    for(int i=0;i<n;i++)
//    {
//     int sum=0;
//     for(int j=i;j<n;j++)
//     {
//         sum=sum+arr[j];
//         if(sum==0){
//             cout<<i<<" ... "<<j<<endl;
//         }
        
//     }
//    }
// }

// Better Solution
void printAllSubarrays(int n, int arr[])
{
    unordered_map<int,vector<int>> map;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            cout<<0<<" ... "<<i;
        }
        if(map.find(sum)!=map.end()){
            for(auto x: map[sum]){
                cout<<(x+1)<<" ... "<<i;
            }
        }
        map[sum].push_back(i);
    }

}

//Count number of subarray
int CountSum(int n,  int arr[]){
    unordered_map<int,int> map;
    int sum=0;
    int ans=0;
    map[0]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(map.find(sum)!=map.end()){
            ans+=map[sum];
        }
        map[sum]++;
    }
    return ans;
}



int main(){
   
   int arr[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
   int n= sizeof(arr)/sizeof(arr[0]);
   
   printAllSubarrays(n,arr);
   cout<<endl;
   cout<<CountSum(n,arr);
}
