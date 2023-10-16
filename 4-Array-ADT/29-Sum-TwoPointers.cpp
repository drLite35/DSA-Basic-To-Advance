#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void tsum(int arr[] , int len , int k){
    int i=0 ; int j = len-1;
    while(i<j){
        if(arr[i]+arr[j]==k){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j++;
        }
        else if(arr[i]+arr[j]<k)i++;
        else j--;
    }
}
int main(){
    int arr[10] = {1,2,3,6,7,8,9,10,11,12};
    tsum(arr , 10 , 11);
return 0;
}//only for sorted array