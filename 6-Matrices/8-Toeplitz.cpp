#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class toe{
    private:
    int n;
    int *A;
    public:
    toe(int ne){
        n=ne;
        A = new int[n];
    }
    void set(int i , int j , int x){
        if(i<=j){
            A[abs(i-j)]=x;
        }
        else{
            A[n-1+abs(i-j)]=x;
        }
    }
    void display(){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                 if(i<=j){cout<<A[abs(i-j)]<<" ";}
                 else{cout<<A[n-1+abs(i-j)]<<" ";}
            }
            cout<<endl;
        }
    }
};

int main(){
   toe t(4);
   for(int i=1 ; i<=4 ; i++){
    for(int j=1 ; j<=4 ; j++){
        int n;
        cin>>n;
        t.set(i , j , n);
    }
   }
   t.display();
return 0;
}