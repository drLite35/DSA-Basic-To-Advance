#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
bool anagram(string a , string b){
    int i=0;
    for(; a[i]!='\0' ; i++){}
    int j=0;
    for(; b[j]!='\0' ; j++){}
    if(i!=j)return false;
    else{
        int h[123];
        for(int k=0 ; k<123 ; k++){
            h[k]=0;
        }
        for(int k=0 ; a[k]!='\0' ; k++){
            h[a[k]]++;
        }
        for(int k=0 ; b[k]!='\0' ; k++){
            h[b[k]]--;
            if(h[b[k]]<0)return false;
        }
    }
    return true;
}
int main(){
   cout<<anagram("vova" , "vova");
return 0;
}