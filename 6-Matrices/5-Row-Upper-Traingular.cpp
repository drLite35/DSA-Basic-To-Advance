#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class upper{
    private:
    int n;
    int *A;
    public :
    upper(int n){
        this->n = n;
        A = new int [n*(n+1)/2];
    }
    void set(int i , int j , int x){
        if(i<=j){
            A[((n*(i-1)-((i-1)*(i-2)/2))-(j-i))] = x;
        }
    }
    int get(int i , int j){
        if(i>j)return 0;
        else{
            return A[((n*(i-1)-((i-1)*(i-2)/2))-(j-i))];
        }
    }
    void display(){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if(i>j)cout<<0<<" ";
                else cout<< A[((n*(i-1)-((i-1)*(i-2)/2))-(j-i))]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
   upper u(4);
   for(int i=1 ; i<=4 ; i++){
    for(int j=1 ; j<=4 ; j++){
        int n;
        cin>>n;
        u.set(i , j , n);
    }
   }
   u.display();
return 0;
}