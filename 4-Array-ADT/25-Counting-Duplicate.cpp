#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   int arr[15]={1,1,2,2,3,4,4,5,5,5,6,7,8,8,9};
   int j=0;
   for(int i=0 ; i<14 ; i++){
    if(arr[i]==arr[i+1]){
        j=i;
        while(arr[j]==arr[i])j++;
        cout<<"The element "<<arr[i]<<" is present "<<j-i<<" times"<<endl;
        i=j-1;
    }
   }
return 0;
}