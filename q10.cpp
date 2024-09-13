#include<iostream>
using namespace std;
class invoice{
private:

int partNumber;
string partDescription;
int quantity;
 double price_per_item;



 public:
 
 invoice(int partNumber, string partDescription , double price_per_item,int quantity ){
   this -> partNumber = partNumber;
 this ->   partDescription = partDescription;
   this -> quantity = quantity;
   this ->  price_per_item = price_per_item;
 }
void setPartNumber(int partNumber)
{
    this->partNumber = partNumber;
}
void setQuantity(int quantity)
{
    this->quantity = quantity;
}
int getPartNumber(){
    return this->partNumber = partNumber;
}
string getpartDescription ()
{
    return this->partDescription = partDescription;

}
int getQuantity()
{
    return this->quantity;
}
double getPrice()
{
    return this->price_per_item;
}
void setPricePerItem(double price){
    this->price_per_item = price;
}
void set_partDescription(string partDescription){
    this->partDescription = partDescription;
}


int getInvoiceAmount(){

    int account = price_per_item*quantity;
    if (account < 0) 
    {
        account = 0.0;
    }
    
return account;
}

};
int main (){
    
class invoice i1(12,"naeat",5,8);
cout << i1.getInvoiceAmount()<<endl;
int partNumber;
cout <<" enter the part number" << endl;
cin >> partNumber;
int quantity;
cout <<"enter the quantity"<<endl;
cin >>quantity;
i1.setPartNumber(partNumber);
i1.setQuantity(quantity);
string partDescription;
cout <<"enter the part description"<<endl;
cin>> partDescription;

i1.set_partDescription(partDescription);
double price ;
cout<<"set the price"<<endl;
cin >> price;
i1.setPricePerItem(price);
cout << i1.getInvoiceAmount()<<endl;

cout << i1.getpartDescription();




return 0;
}