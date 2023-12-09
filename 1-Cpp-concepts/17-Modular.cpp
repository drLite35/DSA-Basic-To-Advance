#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class rect{
    private:
    int len;
    int wid;
    public:
    rect(int l,int w){
        len=l;
        wid=w;
    }
    int per(){
        return 2*(len+wid);
    }
    int are(){
        return len*wid;
    }

};
int main(){
   rect r(10,5);
   cout<<r.are()<<endl;
   cout<<r.per();
   
return 0;
}//there is also scope resolution that can be used to use methods outside of class
//destructor can also be used as ~rect(){}