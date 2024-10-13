// Find the largest subarray formed by consecutive integers

#include<iostream>
#include<algorithm>
using namespace std;
bool isConsecutive(int n, int arr[], int i, int j, int miin, int maax){
    if(maax-miin!=j-i){
        return false;
    }
    vector<bool> visited(j-i+1);
    for(int k=i;k<=j;k++)
    {
        if(visited[k]){
            return false;
        }
        visited[arr[k]]=true;
    }
    return true;
}
int largsubarr(int n, int arr[]){
    int len=1;
    int start=0;
    int end=0;

    // step 1: 1stly find the max and min of every subarray
    for(int i=0;i<n-1;i++)
    {
        int miin = arr[i];
        int maax = arr[i];
        for(int j=i+1;j<n;j++)
        {
            miin = min(miin, arr[j]);
            maax = max(maax, arr[j]);
            if(isConsecutive(n,arr,i,j,miin,maax))
            {
                if(len<maax-miin+1){
                    len=maax+miin+1;
                    start=i;
                    end=j;
                }
            }
        }
    }
    cout<<start<<" "<<end;
}
int main()
{
    int arr[]={8,1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    largsubarr(n,arr);
}
