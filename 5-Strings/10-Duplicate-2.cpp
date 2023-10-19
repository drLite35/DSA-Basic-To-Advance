#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void duplicate(string s){
    int h[123];
    for(int i=0 ; i<123 ; i++){
        h[i]=0;
    }
    for(int i=0 ; s[i]!='\0' ; i++){
        h[s[i]]++;
    }
    for(int i=0 ; i<123 ; i++){
        char c = i;
        if(h[i]>0)
        cout<<c<<" occurs "<<h[i]<<" times"<<endl;
    }
}
int main(){
   duplicate("Anurag   Singh");
return 0;
}