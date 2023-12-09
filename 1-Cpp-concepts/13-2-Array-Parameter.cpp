#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int sum(int arr[] , int n){
    int sum = 0 ;
    for(int i=0 ; i<n ; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
   int arr[4] = {1,2,3,4};
   int ans = sum(arr , 4);
   cout<<ans;
return 0;
}