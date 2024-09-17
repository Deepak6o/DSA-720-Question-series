//Find the duplicate element in a limited range array
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include <numeric>
#include<vector>
using namespace std;

//O(nlogn)
void Duplicate(int n, int arr[]){
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<arr[i];
            return;
        }
    }  
}

// O(n)
// int Duplicate(int n, int arr[]){
//     unordered_map<int,int> map;
//     for(int i=0;i<n;i++)
//     {
//         map[arr[i]]++;
//     }
//     for(auto x: map){
//         if(x.second>1){
//             return x.first;
//         }
//     }
// }

//Using Difference in Sum O(n);
// void Duplicate(int n, int arr[]){
//     int expected_sum = n*(n-1)/2;
//     int actual_sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         actual_sum+=arr[i];
//     }
//     cout<<actual_sum-expected_sum;
// }

// Using XOR O(n)
// void Duplicate(int n, int arr[]){
//     int Xor=0;
//     for(int i=0;i<n;i++)
//     {
//         Xor^=arr[i];
//     }
//     for(int i=1;i<=n-1;i++)
//     {
//         Xor^=i;
//     }
//     cout<<Xor;
// }





int main()
{
    int arr[] = { 1, 2, 3, 4, 4  };
    int n= sizeof(arr)/sizeof(arr[0]);
    Duplicate(n,arr);
}
