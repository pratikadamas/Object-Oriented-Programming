//
// Created by Pratik Giri on 03-11-2024.
//
#include <iostream>
using namespace std;
class Number {
    int value;
public:
    Number(int _value = 0) : value(_value) {}
    void friend show(Number&);
};
void show(Number &n) {
    cout << n.value;
}
int main() {
    Number n(10);
    show(n);
    return 0;
}