//
// Created by Pratik Giri on 29-10-2024.
//
#include <iostream>
using namespace std;
int globalVar = 5;
class MyClass {
    int memberVar;
public:
    MyClass(int memberVar_ = 0) : memberVar(++memberVar_) { // LINE-1
        ++globalVar;
    }
    ~MyClass() {
        memberVar = 0;
        globalVar = 0;
    }
    void print() {
        cout << "memberVar = " << memberVar << ", globalVar = " << globalVar << endl;
    }
};
void test() {
    MyClass obj;
    obj.print();
}
int main() {
    MyClass obj;
    test();
    obj.print();
    return 0;
}