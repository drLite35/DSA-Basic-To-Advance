#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
    int arr[10] = {1,2,2,2,3,7,8,8,9,9};
    int d = 0;
    for(int i=0 ; i<9 ; i++){
        if(arr[i]==arr[i+1] && arr[i]!=d){
            cout<<arr[i]<<endl;
            d=arr[i];
        }
    }
   
return 0;
}