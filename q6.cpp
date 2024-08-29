#include<iostream>
using namespace std;


class hotel {
    private:
    int rno;
    string name;
    float tariff;
    int NOD;
    public :
    

 void checkin(int _rno, string _name , float _NOD , float _tariff){
         rno = _rno;
         name = _name;
         NOD = _NOD;
         tariff = _tariff;

   }



   int CALC(){
    int charges;
    if(NOD*tariff >10000)
    {
        charges = 1.05*NOD*tariff;
    }
    else{
        charges = NOD*tariff;
    }
    return charges;
   }
  
   void checkout(float _charges){
   
    cout << rno << " " << name <<" " << "  " << _charges <<endl;
   }

};
int main(){

hotel h1;
cout <<"enter the room number" <<endl;
int rno ;
cin >> rno;

cout <<"enter your name"<<endl;
string name;
cin >> name;


cout <<"number of days you spent  "<<endl;
float nod;
cin >> nod;

cout <<"tarrif of hotel room "<<endl;
float tarriff;
cin >> tarriff;



h1.checkin(rno , name, nod ,tarriff);



int temp = h1.CALC();
h1.checkout(temp);












    return 0;
}