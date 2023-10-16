#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   int arr[10]={1,1,2,4,7,7,8,9,9,10};
   for(int i=0 ; i<9 ; i++){
    if(arr[i]==arr[i+1])cout<<arr[i]<<endl;
   }
return 0;
}