#include<iostream>
#include<unordered_set>
using namespace std;
bool checkZero(int arr[], int n)
{
   /* for(int i=0;i<n-1;i++){
int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0){
                cout<<"Subarray with zero sum exits";
                return;
            }

        }
    }*/
    unordered_set<int>s;
    s.insert(0);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(s.find(sum)!=s.end())
        {
            return true;
        }
        else{
            s.insert(sum);
        }
    }
    return false;

}
int main()
{
    int n=10;
    int arr[10]={3,4,-7,3,1,3,1,-4,-2,-2};
    checkZero(arr,n)?cout<<"Subarray exit" : cout<<"Subarray not exit";

}
