#include<iostream>
using namespace std;
int main(){
  float cm, m, km;
  cout<<"Enter value in cm: ";
  cin>>cm;
  m = cm/100.0;
  km= cm/1000.0;
  cout<<m<<endl<<km;
  return 0;
}