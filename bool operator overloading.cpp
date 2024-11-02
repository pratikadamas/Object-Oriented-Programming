//
// Created by Pratik Giri on 03-11-2024.
//
#include <iostream>
#include <string>
class intClass {
public:
    intClass(bool data) : d1_(data) { }
    intClass(std::string data) : d2_(data) { }
    explicit operator bool const() {
        if(d2_ == "")
            return d1_ == false ? 0 : 1;
        else
            return d2_ == "true" ? 1 : d2_ == "false" ? 0 : -1;
    }
private:
    bool d1_ { false };
    std::string d2_ { "" };
};
int main(){
    std::string v = "false";
    intClass i1(true);
    intClass i2(v);
    std::cout << (bool)i1 << " "; //LINE-1
    std::cout << (bool)i2 << " "; //LINE-2
    std::cout << static_cast<bool>(i1) << " "; //LINE-3
    std::cout << bool(i2) << " "; //LINE-4
    return 0;
}