#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void hashs(int arr[] , int len , int k){
    int max = arr[0];
    for(int i=0 ; i<len ; i++){
        if(max<arr[i])max=arr[i];
    }
    int hash[max+1];
    for(int i=0 ; i<max+1 ; i++){
        hash[i]=0;
    }
    for(int i=0 ; i<len ; i++){
        if(hash[k-arr[i]]!=0)cout<<arr[i]<<" "<<k-arr[i]<<endl;
        hash[arr[i]]++;
    }
}
int main(){
   int arr[10] = {2,8,1,7,5,4,6,9,3,10};
    hashs(arr , 10 , 10);
return 0;
}