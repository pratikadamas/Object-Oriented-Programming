//
// Created by Pratik Giri on 02-11-2024.
//
// C++ program to demonstrate working of
// inline namespaces inside inline namespaces

#include <iostream>
using namespace std;

namespace ns1 {
    int d=7;
    inline namespace ns2 {
        inline namespace ns3 {
            int var = 10;
        }
    } // namespace ns2
} // namespace ns1

int main()
{
    cout << ns1::var;
    cout<<ns1::var;
    return 0;
}
