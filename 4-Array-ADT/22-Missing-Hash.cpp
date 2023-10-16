#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int hashtable(int arr[] , int len){
    int min=len+1;
    int max=0;
    for(int i=0 ; i<len ; i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    int hasht[max+1];
    for(int i=0 ; i<max+1 ; i++){
        hasht[i]=0;
    }
    for(int i=0 ; i<len ; i++){
        hasht[arr[i]]=1;
    }
    for(int i=min ; i<max+1 ; i++ ){
        if(hasht[i]!=1)return i;
    }
    return -1;
}
int main(){
   int arr[8] = {4,6,5,9,8,10,11,12};
   cout<<hashtable(arr , 8);
return 0;
}
//reduced to o(n).