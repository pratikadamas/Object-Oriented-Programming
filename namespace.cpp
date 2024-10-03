//
// Created by Pratik Giri on 28-09-2024.
//
#include "iostream"
using namespace std;
namespace class1{
    int a=126;
//public:
   void printf(){
        cout<<"         Hello I am from class1  ---\n"<<a<<endl;
        //return 1;
    }
};
namespace class2{
    int a=156;
// public:
    void printf(){
        cout<<"-----    -----Hi I am from 2nd class-----    ------\n"<<a;
    }
};
int main(){
  // cout<<class1::printf()<<"\n";
    //cout<<class2::printf()<<"\n";
    class1::printf();
    class2::printf();
    cout<<"\n"<<class1::a<<"\n";
    cout<<"\n"<<class2::a<<"\n";
return 0;
}
