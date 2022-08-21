#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;
class BankApp
{
    string name;
    string email;
    int Phone;
    int passport;
    string postal;
    string residential;
    int pin;
    int acno;
    string actype;
    int bal;

public:
    void opbal(void);
    void secured(void);
    void deposit(void);
    void withdraw(void);
    void display(void);


};


    void BankApp:: opbal(void)
    {
    cout<<endl<<endl<<endl;
    cout<<"Enter Name: \t";
    cin>>name;
    cout<<"Enter Email Address: \t";
    cin>>email;
    cout<<"Enter Phone number: \t";
    cin>>Phone;
    cout<<"Enter Passport Number: \t";
    cin>>passport;
    cout<<"Enter Residential Address: \t";
    cin>>residential;
    cout<<"Enter account Type: \t";
    cin>>actype;
    cout<<"Enter Opening Balance: \t";
    cin>>bal;
    }

    void BankApp::secured(void)
    {
    int pin;
    cout<<"Your Pin Is: ";
    srand(time(0));
    for(int x=1; x<5; x++)
    {
    pin=rand()%6;
    cout<<1+pin;

    }
    int acno;
    cout<<endl;
    cout<<"Your Account Number Is: ";
    srand(time(0));
    for(int x=1; x<14; x++){
    acno=rand()%6;
    cout<<1+acno;
    }
    }

    void BankApp:: deposit(void)
    {
    int deposit;
    cout<<"Enter Deposit amount: \t";
    cin>>deposit;
    bal+=deposit;
    cout<<"\nDeposit Balance = \t"<<bal;
    }

    void BankApp:: withdraw(void)
    {
    int withdraw;
    cout<<"\nBalance Amount = \t\t"<<bal;
    cout<<"\nEnter Withdraw Amount :-\t";
    cin>>withdraw;

        if(bal>withdraw)
        {
        bal=bal-withdraw;
        cout<<"\nAfter Withdrawal Balance is = \t"<<bal;
        }
        else
        {
        cout<<"\n\t Not Enough Balance";
        }
    }

    void BankApp::display(void)
    {

    cout<<endl<<endl<<endl;
    cout<<setw(50)<<"Details"<<endl;
    cout<<setw(50)<<"Name Of User "<<name<<endl;
    cout<<setw(50)<<"Email "<<email<<endl;
    cout<<setw(50)<<"Passport: "<<passport<<endl;
    cout<<setw(50)<<"Phone: "<<Phone<<endl;
    cout<<setw(50)<<"Residential: "<<residential<<endl;
    cout<<setw(50)<<"A/c type: "<<actype<<endl;
    cout<<setw(50)<<"Balance: "<<bal<<endl;
    }

int main()
{
    BankApp ob1;
    int choice;

    do
    {
        cout<<"\n\n\n\t Banking System Program";
        cout<<"\n\nChoice List\n\n";
        cout<<"1) To Create An Account\n";
        cout<<"2) To Access Pin and Bank Account\n";
        cout<<"3) To Deposit\n";
        cout<<"4) To Withdraw\n";
        cout<<"5) To Display All Details\n";
        cout<<"6) Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: ob1.opbal();
            break;

            case 2: ob1.secured();
            break;

            case 3: ob1.deposit();
            break;

            case 4: ob1.withdraw();
            break;

            case 5: ob1.display();
            break;

            case 6: goto end;

            default: cout<<"\nInvalid Option.....";
        }
    }while(1);

end:
    return 0;
}
