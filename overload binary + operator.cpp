
#include<iostream>
using namespace std;
class complex{
    float real,imag;
public:
    complex()
    { real=0,imag=0;
    }

    complex (float a,float b){
        real=a;
        imag=b;
    }
    void display(){
        cout<<"real="<<real<<"imag="<<imag<<endl;
    }
    complex operator + (complex &a){
        complex temp;
        temp.real=real+a.real;
        temp.imag=imag+a.imag;
        return temp;

    }

};

int main(){
    complex X(2.1,6.2),Y(25.1,5.02);
    X.display();
    Y.display();
    complex M;
    M=X+Y;
    M.display();


}