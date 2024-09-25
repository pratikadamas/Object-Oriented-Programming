#include<iostream>
using namespace std;
 //const int pin=123;
class atm {
    private:
           int password=123;
           float balence=1000.369,withdrawl_ammount;
        long int Ac_no;
           char name[20];
           
           void withdrawl()
           {
               //float x;
               cout<<" how many ammount you withdrawl\n";
               cin>>withdrawl_ammount;
               balence=balence-withdrawl_ammount;
               cout<<"your final balence is---"<<balence;
               
           }
           
           void check_balence(){
               cout<<"--your balence---"<<balence<<endl;
               
           }
           
           void trensfer(){
               float x;
               int i;
                long int ac_no;
               
               cout<<"-------MONEY DEPOSIT PRESS 1------\n  ------MONEY TRANSFER PRESS 2-----\n";
               cin>>i;
               
               switch(i){
                   
             case 1:  cout<<"ammount of the money--";
                        cin>>x;
                        balence=balence+x;
                        cout<<"-----------------PAYMENT DONE-----------------";
                         cout<<"-----your balence is -----"<<balence;
                         break;
            case 2: cout<<"Account holder A/C number---";
                    cin>> ac_no;
                    cout<<" -----TRANSFER ammount of the money-----";
                    cin>>x;
                    balence=balence-x;
                    cout<<"---------------PAYMENT DONE--------------";
                  cout<<"-----your balence is -----"<<balence;
                  break;
               }
           }
    public:
          void pin(){
              int x;
              cout<<"Please Enter your pin\n";
              cin>>x;
              if(x==password){
              cout<<"enter your AC number---\n";
              cin>>Ac_no;
              cout<<"Enter your name---\n";
              cin>>name;
              
              int i;
              cout<<"Enter 1 for Balence check\n   2 for withdrawl  \n  3 for transfer  \n";
              cin>>i;
              switch(i){ 
                  case 1: check_balence();
                          break;
                  case 2: withdrawl();
                          break;
                  case 3: trensfer();
                          break;
                  default: cout<<"wrong input";
                           break;
                  
              }
              }
        
              else 
                  cout<<" ----WRONG PIN----";
          }
};

int main()
{
    atm m1;
    m1.pin();
    
    return 0;
    
}
    
