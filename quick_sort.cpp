#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={56,96,999,126,34};
    cout<<"given array\n";
    cout<<"[ ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]\n";
    sort(arr,arr+5);
 cout<<"[ ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
     cout<<" ]\n";
     return 0;
}