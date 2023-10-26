#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

int get(int A[] , int i , int j ){
    if(i==j) return A[i-1];
    else return 0;
}

void set(int A[] , int i , int j , int x){
    if(i==j){
        A[i-1]=x;
    }
} 
void display(int A[]){
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(i==j)cout<<A[i]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}
int main(){
   int A[5];
   set(A, 1 , 1, 5);
   set(A, 2 , 2, 5);
   set(A, 3 , 3, 5);
   set(A, 4 , 4, 5);
   set(A, 5 , 5, 5);
   cout<< get(A , 1 , 2)<<endl;
   cout << get(A , 1 , 1)<<endl;
   display(A);
return 0;
}