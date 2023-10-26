#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;//matrix has to be based on 0 indexing [1,,2,3,,4,5,6,,7,8,9,10,,]
class lower{
    private:
    int n;
    int *A;
    public:
    lower(int ne){
        n=ne;
        A= new int[(n*(n+1))/2];
    }
    void set(int i , int j , int x){
        if(i>=j){
            A[((i*(i-1))/2)+j-1] = x;}
    }
    int get(int i , int j){
        if(i>=j){
        return A[((i*(i-1))/2)+j-1];}
        else return 0;
    }
    void display(){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if(i<j)cout<<0<<" ";
                else cout<<A[((i*(i-1))/2)+j-1]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
   lower l(5);
   for(int i=1 ; i<=5 ; i++){
    for(int j=1 ; j<=5 ; j++){
        int n;
        cin>>n;
        l.set(i,j,n);
    }
   
    l.set(2,1,3);
    l.set(1,2,5);
    cout<<l.get(2,1)<<endl;
    cout<<l.get(1,2)<<endl;
    cout<<endl;
    l.display();

return 0;
}