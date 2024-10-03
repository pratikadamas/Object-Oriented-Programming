//
// Created by Pratik Giri on 28-09-2024.
//
#include<iostream>
#include <cstring>
using namespace std;
class stu{
     int roll;
     float num;
     char *str;

public:
    void setdata(){
        int x;
        cout<<"Roll no:-"<<endl;
        cin>>x;
        roll=x;
        float y;
        cout<<"Marks :-\n";
        cin>>y;
        num=y;
      //  string str1;
     //   getline(cin>>, str1);

        //str=&str1;

    }
    void printdetail(){
        cout<<"-----------\n\n\n---------\n\n-------\n";
        cout<<"Roll No- "<<roll<<"\n";
        cout<<" Marks - "<<num<<"\n";
      //  cout<<"name"<<str<<"\n";
    }
};
int main() {
    stu *ptr;
    int c,i;
    cout<<" Total No Of Student "<<endl;
    cin>>c;
    ptr=new stu[c];
    cout<<" Enter Student Details--\n";
    for(i=0;i<c;i++) {

        (ptr+i)->setdata();

    }

    for(i=0;i<c;i++) {

        (ptr+i)->printdetail();

    }
delete [] ptr;

    return 0;

}