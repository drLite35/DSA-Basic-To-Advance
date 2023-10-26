#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class low{
    private:
    int n;
    int *A;
    public:
    low(int ne){
        n=ne;
        A= new int[n*(n+1)/2];
    }
    void set(int i , int j , int x){
        if(i>=j){
            A[(((n*(j-1))-(((j-1)*(j-2))/2))+(i-j))]=x;
        }
    }
    int get(int i , int j){
        if(i<j)return 0;
        else return A[((n*(j-1)-((j-1)*(j-2)/2))+(i-j))];
    }
    void display(){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if(i<j)cout<<0<<" ";
                else cout<<A[(((n*(j-1))-(((j-1)*(j-2))/2))+(i-j))]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
   low l(3);
   for(int i=1 ; i<=3 ; i++){
    for(int j=1 ; j<=3 ; j++){
        int n;
        cin>>n;
        l.set(i,j,n);
    }
   }
   l.display();
return 0;
}