//
// Created by Pratik Giri on 03-10-2024.
//
#include "iostream"
using namespace std;
class base{
    int i;
public:

    base( ){
        i=0;
        cout<<"DEFAULT CASE\n";
       // cout<<"value of i ="<<i;
    }
     base(int x){
        cout<<" Insert your value of i=\n";
        cin>>x;
        i=x;
    }
    base( base &a){
        i=a.i;
       // cout<<"COPY CONSTRUCTOR\n";
    }
    void display(){
        cout<<"VALUE OF I ="<<i<<"\n";
    }
    ~base(){
        cout<< "destroy the object\n";
    }

};
int main(){
    base obj1(5),obj2,obj3;
    obj1.display();
    cout<<"-------------------\n";
    obj2.display();
    cout<<"-----------------\n";
    obj3=obj2;
    obj3.display();


    return 5;

}
