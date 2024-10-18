// Find pair with given sum in the array


#include<iostream>
#include <algorithm>
#include<unordered_map>
using namespace std;
//1. Using Brute-Force O(n^2)
// void Pair(int n, int arr[], int target){
   
//     for(int i=0;i<n-1;i++)
//     {
//        for(int j=i+1;j<n;j++)
//        {
//         if(arr[i]+arr[j]==target)
//         {
//             cout<<arr[i]<<" "<<arr[j];
//             return;
//         }
//        }
//     }
//     cout<<"Pair not found";
// }

//2.  Using Sorting O(n.log(n))
// void Pair(int n, int arr[], int target){
//    sort(arr,arr+n);
//    int i=0;
//    int j=n-1;
//    while(i<=j){
//     if(arr[i]+arr[j]==target)
//     {
//         cout<<arr[i]<<" "<<arr[j];
//         return;
//     }
//     if(arr[i]+arr[j]<target){
//         i++;
//     }
//     else{
//         j--;
//     }
//    }
//    cout<<"Pair not found";
// }

//3. Using Hashing O(n)
void Pair(int n, int arr[], int target){
   unordered_map<int,int> map;
   for(int i=0;i<n;i++){
    if(map.find(target-arr[i])!=map.end()){
        cout<<arr[i]<<" "<<arr[map[target-arr[i]]];
        break;
    }
    map[arr[i]]=i;
   }
}

int main(){
   int n,target;
   cout<<"size = ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"Target = ";
   cin>>target;
   Pair(n,arr,target);
}
