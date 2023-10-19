#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void casec(char *s , int len){
    for(int i=0 ; i<len ; i++){
        if(s[i]>=65 && s[i]<=90)s[i]+=32;
        else if(s[i]>=97 && s[i]<=122)s[i]-=32;
    }
}
int main(){
   char s[25] = "Anurag Singh";
   casec(s ,12);
   cout<<s;
return 0;
}