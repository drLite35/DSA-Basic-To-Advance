#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class tri{
    private:
    int n;
    int *A;
    public:
    tri(int en){
        n=en;
        A = new int[n];
    }
    void set(int i , int j , int x){
        if(i-j==(-1)){
            A[i-1]=x;
        }
        else if(i==j){
            A[n+i-2]=x;
        }
        else if(i-j==1){
            A[(2*n)+i-3]=x;
        }
    }
    int get(int i , int j){
           if(i-j==(-1)){
            return A[i-1];
        }
        else if(i==j){
            return A[n+i-2];
        }
        else if(i-j==1){
            return A[(2*n)+i-3];
        }
        else return 0;
    }
    void display(){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n  ; j++){
                if(i-j==(-1)){cout<<A[i-1]<<" ";}
                else if(i==j){cout<<A[n+i-2]<<" ";}
                else if(i-j==1){cout<<A[(2*n)+i-3]<<" ";}
                else cout<<0<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    tri t(4);
    for(int i=1 ; i<=4 ; i++){
        for(int j=1 ; j<=4 ;j++){
            int n;
            cin>>n;
            t.set(i , j , n);
        }
    }
    t.display();
return 0;
}