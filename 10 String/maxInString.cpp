#include<iostream>
#include<string>
using namespace std;
int main(){
   string s[]={"0123","0023","456","00182","940","2901"};
   int max=stoi(s[0]);
   string maxS=s[0];
   for(int i=0;i<=5;i++){
        int x=stoi(s[i]);
        if(x>max){
            max=x;
            maxS=s[i];
        } 
   }
   cout<<maxS;
}