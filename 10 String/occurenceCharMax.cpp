#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int max=0;
    // for(int i=0;i<s.size();i++){
    //     char ch=s[i];
    //     int count=1;
    //     for(int j=i+1;j<s.size();j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(max<count) max=count;
    // }
    // cout<<max;


    vector<int> a(26,0);
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int asci=(int)ch;
        a[asci-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(a[i]>max) max=a[i];
    }
    for(int i=0;i<26;i++){
        if(a[i]==max){
            int asci=i+97;
            char ch=(char)asci;
            cout<<ch<<" "<<max<<endl;
        }
    }
}