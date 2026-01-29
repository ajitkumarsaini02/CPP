#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void printMax(int arr[], int n, int i, int max){
    if(i==n){
        cout<<max;
        return;
    }
    if(max<arr[i]) max=arr[i];
    printMax(arr,n,i+1,max);
}
int maxInArray(int arr[], int n, int i){
    if(i==n) return INT_MIN;
    return max(arr[i],maxInArray(arr,n,i+1));
}
int main(){
    int arr[]={2,1,5,7,4,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
   printMax(arr,n,0,INT_MIN);
   cout<<endl;
   cout<<maxInArray(arr,n,0);
}