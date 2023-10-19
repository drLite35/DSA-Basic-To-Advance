#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
bool palid(string s){
    int i=0;
    for(; s[i]!='\0' ; i++){}
    int j=i-1;
    int k=0;
    while(k<j){
        if(s[k]!=s[j])return false;
        k++;
        j--;
    }
    return true;
}
int main(){
   cout<<palid("AnuunA");
return 0;
}