//
// Created by Pratik Giri on 29-10-2024.
//
#include<iostream>
void validate(int i){
    try{
        if(i < 0)
            throw "negetive";
        else if(i > 0)
            throw i * 1.00;
        else
            throw 0;
    }
    catch(float )
    { std::cout << "float "; }
    catch(int )
    { std::cout << "int "; }
    catch(const char* )
    { std::cout << "char *"; }
}
int main(){
    try{
        validate(0);
        validate(5);
        validate(-5);
    }
    catch(...)
    { std::cout << "ALL"; } //LINE-4
}