//
// Created by Pratik Giri on 29-10-2024.
//
#include<iostream>
void func(){
    try{
        throw 9.81;
    }
    catch(int& e){ throw e; }
}
int main(){
    try{
        func();
    }
    catch(int& e){ std::cout << "int"; }
//catch(...){ std::cout << "all"; } //LINE-1         error: '...' handler must be the last handler for its try block [-fpermissive]
    catch(double& e){ std::cout << "double"; }
   // catch(...){ std::cout << "all"; } //LINE-1
    return 0;
}