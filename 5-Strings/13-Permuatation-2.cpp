#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

void perm(string s , int l , int h){
    if(l==h)cout<<s<<endl;
    else{
        for(int i=l ; i<=h ; i++){
            char tmp = s[i];
            s[i] = s[l];
            s[l] = tmp;
            perm(s , l+1 , h);
            tmp = s[i];
            s[i] = s[l];
            s[l] = tmp;
        }
    }
}

int main(){
   perm("ABC" , 0 , 2);
return 0;
}