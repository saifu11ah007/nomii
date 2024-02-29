#include<iostream>
using namespace std;
int main(){
  int price, tax;
  float total;
  cout<<"Enter price without tax: ";
  cin>>price;
  cout<<"Enter tax: ";
  cin>>tax;
  total = price + (price*(tax/100.0));
  cout<<total;
  
  return 0;
}