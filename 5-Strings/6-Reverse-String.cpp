#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
string reverse(string s){
    int i=0;
    for( ; s[i]!='\0' ;i++ ){}
    string p = s; 
    for(int j=0 ; j<i ; j++){
        p[j] = s[i-j-1];
    }
    return p;
}
int main(){
   cout<<reverse("Anurag Singh");
return 0;
}