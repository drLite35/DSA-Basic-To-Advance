#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void duplicate(string s){
    int h[26];
    for(int i=0 ; i<26 ; i++){
        h[i] = 0;
    }
    for(int i=0 ; s[i]!='\0' ; i++){
        h[(s[i]-97)]++;
    }
    for(int i=0 ; i<26 ; i++){
        char c = i+97;
        if(h[i]>1)cout<<c<<" Occurs "<<h[i]<<" times."<<endl;
    }
}
int main(){
   duplicate("anurgaaag");
return 0;
}