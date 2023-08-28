#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
double e(int x ,int n){
    double s=1;
    for(int i=n ; i>0 ; i--){
        s= 1+((x*s)/i);
    }
    return s;
}//could even be done with reverse loop logic but this one is correct and fine
int main(){
   cout << e(1,10)<<endl;
return 0;
}