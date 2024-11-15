//
// Created by Pratik Giri on 14-11-2024.
//
#include<iostream>
using namespace std;

class base{
public:
   virtual void A(){
        cout<<"A() base\n";
    }
    void B(){
        cout<<"B() base\n";
    }

};
class derived :public base{
public:
    void A(){
        cout<<"A() derived\n";
    }
    void C(){
        cout<<"C() derived\n";
    }
};

int main(){
    base a,*A;
    derived b,*B;
    A=&a;
    A->A();
    A=&b;
    B=&b;
    A->A();
    B->C();
    B->A();

    return 0;

}