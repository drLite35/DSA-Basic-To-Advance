#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void hashdup(int arr[] , int len){
    int min=arr[0];
    int max=arr[0];
    for(int i=0 ;  i<len ; i++){
        if(min>arr[i])min=arr[i];
        if(max<arr[i])max=arr[i];
    }
    int hasd[max+1];
    for(int i=0 ; i<max+1 ; i++){
        hasd[i]=0;
    }
    for(int i=0 ; i<len ; i++){
        hasd[arr[i]]++;
    }
    for(int i=min ; i<max+1 ; i++){
        if(hasd[i]>1)
        cout<<i<<" occurs "<<hasd[i]<<" times "<<endl;
    }
}
int main(){
   int arr[10] = {2,7,2,3,9,4,4,9,6,7};
   hashdup(arr,10);
return 0;
}