#include <iostream>

using namespace std;

class ElectricityBill {
private:
    string name;
    float charge;
    float units;

public:
    string getname() {
        return name;
    }

    void setname(string _name) {
        name = _name;
    }

    float getcharge() {
        return charge;
    }

    void setcharge() {
        float p = 0.0, q = 0.0, r = 0.0;
        if (units > 300) {
            r = (units - 300) * 0.9;
            p = 200 * 0.8;
            q = 100 * 0.6;
        
        } else if (100 < units <=300) {
            q = (units - 100) * 0.8;
            p = 100*0.6;
        } else if (units < 100) {
            p = (units ) * 0.6;
        }

        charge = p + q + r +50;
        
        float percen;
        if (charge >300)
        {
         percen = (charge*15)/100;
        }
        charge = charge+percen;
     
    }

    float getunits() {
        return units;
    }

    void setunits(float _units) {
        units = _units;
    }
};

int main() {
    ElectricityBill d1;

    cout << "Enter the name of the person: " << endl;
    string NameOfPerson;
    getline(cin, NameOfPerson); 
    d1.setname(NameOfPerson);
cout <<"enter the unit of elecftricity he consumed: " << endl;
int u ;
 cin >>u;
    d1.setunits(u); 
    d1.setcharge(); 

    cout << endl;
    cout << endl;
    cout << "Charge: " << d1.getcharge() << endl;
    cout << "Name: " << d1.getname() << endl;
    cout << "Units: " << d1.getunits() << endl;

    return 0;
}
