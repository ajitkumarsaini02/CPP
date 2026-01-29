#include<iostream>
#include<string>
using namespace std;

void BinaryString(string s,int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    BinaryString(s+'0',n-1);
    if(s=="" || s[s.size()-1]=='0'){
        BinaryString(s+'1',n-1);
    }  
}

int main(){
    int n=4;
    string str="";
    BinaryString(str,n);
}