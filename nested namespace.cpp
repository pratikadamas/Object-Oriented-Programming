//
// Created by Pratik Giri on 02-11-2024.
//
#include<iostream>
using namespace std;
inline namespace s1{
    int v1=1;
  namespace  s2{
        int v2=2;
   namespace s3{
            int v3=3;
        }
    }
}
int main(){
    cout<<s1::v1;
    cout<<s1::s2::v2;
    cout<<s1::s2::s3::v3;
}