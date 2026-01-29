#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    int key;
    cin>>key;
    bool flag=false;
    int pos=-1;
     for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
            pos=i;
        }
    }
    if(flag==true){
        cout<<"Element is present at "<<pos<<" location";
    }
    else{
        cout<<"Element is not found";
    }

}