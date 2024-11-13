//
// Created by Pratik Giri on 07-11-2024.
//

#include <iostream>

using namespace std;
class Sample {

    int x, y, z;

public:

    Sample(int val=0): z(++val), y(val++), x(++val) {}

    void display() {

        cout << "x = " << x << " y = " << y <<", z = "<< z << endl;

    }

};

int main() {

    Sample obj ( 5);
    obj.display();

    return 0;

}