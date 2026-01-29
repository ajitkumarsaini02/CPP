#include<iostream>
#include<string>
using namespace std;
int gcd(int a, int b){
     if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
    int a=4;
    int b=65;
    cout<<gcd(a,b);  // TC O(log(a+b))
}