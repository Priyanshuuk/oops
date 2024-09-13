#include<iostream>
using namespace std;
class bank_account{

private:

string name;
int account_number;
string account_type;
float account_balance;


public:
    void assign(){
        cout <<"enter the name of account holder" << endl;
        cin >> name ;
        cout <<"enter the account number" << endl;
        cin >> account_number;
        cout <<"enter the account type" << endl;
        cin >> account_type;
        cout<<"enter the account balance" << endl;
        cin >> account_balance;
  

    }
    void display(){
        cout <<"Name"<<name<<" "<< "account balance"<<account_balance <<" "<<endl;

    }
    int deposit(){
        cout<<"Enter the ammount you want to deposit"<<endl;
    int amount;
    cin >> amount;
    account_balance= account_balance+amount;
    cout <<"your new balance is "<<account_balance<< endl;
    return account_balance;
    
    }

    int withdraw(){
        int withdraw_amount;
        cout<<"enter the ammount you want to withdraw  "<<endl;
        cin >> withdraw_amount;
        if(account_balance <withdraw_amount){
            cout <<"not sufficent balance request denied"<<endl;
        }
        else{

        cout<<"wtithdrawing "<<withdraw_amount<<"from your account "<<endl;
         account_balance = account_balance- withdraw_amount;
        cout<<"updated balance is "<<account_balance<< endl;
        return account_balance;
        }
    }
   
};
int main (){
    

bank_account b1;
b1.assign();
int a ;
cout <<"enter 1 to deposit "<<endl;
cout<<"enter 2 to withdraw"<<endl;
cout << "enter 3 to display "<<endl;
cout <<"press 4 to exit"<<endl;
cin >> a;

while(a != 4){
switch (a)
{
case 1:
 b1.deposit();
 cout <<"enter 1 to deposit "<<endl;
cout<<"enter 2 to withdraw"<<endl;
cout << "enter 3 to display "<<endl;
cout <<"press 4 to exit"<<endl;
 cin >> a;
    break;
case 2:
b1.withdraw();
 cout <<"enter 1 to deposit "<<endl;
cout<<"enter 2 to withdraw"<<endl;
cout << "enter 3 to display "<<endl;
cout <<"press 4 to exit"<<endl;
 cin >> a;
break;
case 3:
b1.display();
 cout <<"enter 1 to deposit "<<endl;
cout<<"enter 2 to withdraw"<<endl;
cout << "enter 3 to display "<<endl;
cout <<"press 4 to exit"<<endl;
 cin >> a;
break;
case 4:
break;
default:
    break;
}
}
return 0 ;
}
