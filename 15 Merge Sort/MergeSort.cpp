#include<iostream>
#include<vector>
using namespace std;
void mergeArray(vector<int>& A, vector<int>& B, vector<int>& res){
    int i=0, j=0, k=0;
    vector<int> C;
    while(i<A.size() && j<B.size()){
        if(A[i] < B[j]){
            res[k++]=A[i++];
        }
        else{
            res[k++]=B[j++];
        }
    }

    while(i<A.size()){
        res[k++]=A[i++];
    }
    while(j<B.size()){
        res[k++]=B[j++];
    }
} 
void mergeSort(vector<int>& v){
    int n=v.size();
    int n1=n/2, n2=n-n1;
    vector<int> a(n1), b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
}    

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}