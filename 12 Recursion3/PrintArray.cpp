#include<iostream>
#include<vector>
using namespace std;
void display(int arr[], int n, int i){
    if(i==n) return;
    cout<<arr[i]<<" ";
    display(arr,n,i+1);
}
void display2(vector<int>& v, int i){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    display2(v,i+1);
}
int main(){
    int arr[]={2,1,5,7,4,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    cout<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display2(v,0);
}