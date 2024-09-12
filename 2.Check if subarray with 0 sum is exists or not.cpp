// Check if a subarray with 0 sum exists or not


#include<iostream>
#include <algorithm>
#include<unordered_set>
using namespace std;

//1. Using Brute-Force
// void Subarray_Zero(int n, int arr[]){
//    for(int i=0;i<n;i++)
//    {
//     int sum=0;
//     for(int j=i;j<n;j++)
//     {
//         sum=sum+arr[j];
//         if(sum==0){
//             cout<<"Subarray_Exit";
//             return;
//         }
//     }
//    }
//    cout<<"Not Exit";
// }

//1. Using STL
void Subarray_Zero(int n, int arr[]){
   unordered_set<int> s;
   
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=arr[i];
    if(s.find(sum)!=s.end()){
        cout<<"Subarray_Zero";
        return;
    }
    else{
        s.insert(sum);
    }
   }
   cout<<"Not Exit";
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
   Subarray_Zero(n,arr);
}
