#include<iostream>
using namespace std;
int partition(int a[],int low,int high){
    int pivot=a[low];
    int count=0;
    for(int i=low+1;i<=high;i++)
        if(a[i]<=pivot) count++;
    int p=low+count;
    swap(a[low],a[p]);
    int i=low;
    int j=high;
    while(i<p && j>p){
        if(a[i]<=pivot) i++;
        else if(a[j]>pivot) j--;
        else{swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return p;
}
void quickSort(int A[],int low,int high){
    if(low<high){
        int p=partition(A,low,high);
        quickSort(A,low,p-1);
        quickSort(A,p+1,high);
    }
}
int main(){
    int A[]={10,7,8,9,1,5};
    int n=sizeof(A)/sizeof(A[0]);
    cout << "Original Array: ";
    for(int i=0;i<n;i++) 
        cout<<A[i]<<" ";
    cout<<endl;
    quickSort(A,0,n-1);
    cout << "Sorted Array: ";
    for(int i=0;i<n;i++) 
        cout<<A[i]<<" ";
}
