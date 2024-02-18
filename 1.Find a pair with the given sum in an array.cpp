#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
void Findpair(int arr[],int n,int target)
{

    /*for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" , "<<arr[j];
            }
        }
        cout<<endl;
    }
    cout<<"Pair not fount";*/
    /*int low=0;
    int high=n-1;
    sort(arr,arr+n);
    while(low<high)
    {
        if(arr[low]+arr[high]==target){
            cout<<arr[low]<<" , "<<arr[high];
            low++;
            high--;
        }
        if(arr[low]+arr[high]<target){
            low++;
        }
        else{
            high--;
        }
    }*/
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++){
        if(ump.find(target-arr[i])!=ump.end()){
            cout<<arr[ump[target - arr[i]]]<<" "<<arr[i];
            return;
        }

        ump[arr[i]]=i;
    }

}
int main()
{

    int n=6;
    int arr[6]={8,7,2,5,3,1};
    int target=10;
    Findpair(arr,n,target);
}
