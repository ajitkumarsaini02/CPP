#include<iostream>
using namespace std;
int stairs(int a){
    if(a==1) return 1;
    if(a==2) return 2;
    return stairs(a-1) + stairs(a-2);
}
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<stairs(a);
    return 0;
}