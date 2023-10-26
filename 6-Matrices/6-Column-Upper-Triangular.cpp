#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class up{
    private:
    int n;
    int *A;
    public:
    up(int ne){
        n= ne;
        A = new int[n];
    }
    int get(int i , int j);
    void display();
    void set(int i, int j , int x);
};

void up::set(int i , int j , int x){
    if(i<=j){
        A[(j*(j-1)/2)+i-1] = x;
    }
}

int up::get(int i , int j){
    if(i>j)return 0;
    else return A[(j*(j-1)/2)+i-1];
}

void up::display(){
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if(i>j)cout<<0<<" ";
            else cout<<A[(j*(j-1)/2)+i-1]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    up u(4);
    for(int i =1 ; i<=4 ; i++){
        for(int j=1 ; j<=4 ; j++){
            int n;
            cin>>n;
            u.set(i , j ,n);
        }
    }
    u.display();
return 0;
}