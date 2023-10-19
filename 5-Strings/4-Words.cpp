#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int words(string s , int len){
    int ans(0);
    for(int i=0 ; i<len ; i++){
        if(s[i]==' ' && s[i-1]!=' ')ans++;//condition is important
    }
    return ans;
}
int main(){
   string s = "Anu   Rag Singh is good ";
   cout<<words(s ,24 );
return 0;
}