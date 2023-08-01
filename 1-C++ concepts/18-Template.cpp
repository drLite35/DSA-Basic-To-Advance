#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
template <class T>
class Art{
    private:
    T a;
    T b;
    public:
    Art(T x, T y);
    T add();
    T sub();
};
    template <class T>
    Art<T>::Art(T x , T y){
        a=x;
        b=y;
    }
    template <class T>
    T Art<T>::add(){
        return a+b;
    }
    template <class T>
    T Art<T>::sub(){
        return a-b;
    }
    
int main(){
   Art<float>A(10.5,5.6);
   cout<<A.add()<<endl;
   cout<<A.sub()<<endl;
return 0;
}