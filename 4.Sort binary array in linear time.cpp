//Sort binary array in linear time

#include<iostream>
#include<algorithm>
using namespace std;

// nlogn time complexity
// void sortbinary(int n, int arr[]){
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// o(n) time complexity
// void sortbinary(int n, int arr[]){
//     int one =0;
//     int zero =0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         {
//             zero++;
//         }
//     }
//     int i=0;
//     while(zero--)
//     {
//         arr[i++]=0;
//     }
//     while(i<n)
//     {
//         arr[i++]=1;
//     }
//     for(int j=0;j<n;j++)
//     {
//         cout<<arr[j]<<" ";
//     }
   
    
// }

// QuickSort logic O(n)
void Swap(int arr[], int i ,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sortbinary(int n, int arr[]){
    int pivot =1;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<pivot)
        {
            Swap(arr, i,k);
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] =  { 1, 0, 1, 0, 1, 0, 0, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    sortbinary(n,arr);
}
