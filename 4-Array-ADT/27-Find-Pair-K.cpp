#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void sumk(int arr[] , int len , int k){
    for(int i=0 ; i<len-1 ; i++){
        for(int j=i+1 ; j<len ; j++){
            if(arr[i]+arr[j]==k)cout<<i<<" "<<j<<" are the index "<<endl;
        }
    }
}
int main(){
    int arr[10] = {2,8,1,7,5,4,6,9,3,10};
    sumk(arr , 10 , 10);
   
return 0;
}