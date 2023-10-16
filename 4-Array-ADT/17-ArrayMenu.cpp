#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
template<class T>
class Array{
    private:
    T *A;
    int size;
    int len;
    public:
    Array(){
        size=10;
        len=0;
        A = new T[size];
    }
    Array(int sz){
        size = sz;
        len =0 ;
        A = new T[size];
    }
    ~Array(){
        delete []A;
    }
    void display(){
        for(int i=0 ; i<size ; i++){
            cout<<A[i]<<" ";
        }
    }
    void insert(int index , T num){
        if(index>=0 && len<size && index<=len){
            int i=len-1;
            while(i>=index){
                A[i+1] = A[i];
                i--;
            }
            A[index] = num;
            len++;
        }
    }
    void deletion(int index){
        if(index>=0 && index<len){
            int i=index;
            while(i<len-1){
                A[i] =A[i+1];
                i++;
            }
            len--;
        }
    }
    bool issorted(){
        for(int i=0 ; i<len-1 ; i++){
            if(A[i]>A[i+1])return false;
        }
        return true;
    }
};
int main(){
   Array<int> arr(10);
   arr.insert(0,1);
   arr.insert(1,2);
   arr.insert(2,3);
   arr.insert(3,4);
   arr.insert(4,5);
   arr.insert(5,6);
   arr.insert(6,7);
   arr.insert(7,8);
   arr.insert(8,9);
   arr.insert(9,10);
   arr.insert(10,110);
   arr.display();
   cout<<arr.issorted()<<endl;
   arr.deletion(0);
   arr.insert(0 ,1);
   arr.display();
return 0;
}