#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
   int arr[8] = {2,5,6,1,8,9,3,7};
   for(int i=1 ; i<9 ; i++){
    int tmp=0;
    for(int j=0 ; j<8 ; j++){
        if(i==arr[j])tmp=1;
    }
    if(tmp==0){
        cout<<i;
        break;
   }
}
return 0;
}
//this has the complexity of o(n2)