#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
bool validate(string s){
    for(int i=0 ; s[i]!='\0' ; i++){
        if(!((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)))return false;
    }
    return true;
}
int main(){
   cout<<validate("Anurag)");
return 0;
}