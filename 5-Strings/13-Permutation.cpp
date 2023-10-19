#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void sperm(string s , int k){
    static int A[10];
    static char c[10];
    if(s[k]=='\0'){
        c[k]='\0';
        cout << c <<endl;
    }
    else{
        for(int i=0 ; s[i]!='\0' ; i++){
            if(A[i]==0){
                c[k]=s[i];
                A[i]=1;
                sperm(s , k+1);
                A[i]=0;
            }
        }
    }
}
int main(){
   sperm("ABC" , 0);
return 0;
}