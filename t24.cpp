#include<iostream>
using namespace std;
int main(){
  int age,month, day, minutes;
  cout<<"enter your age: ";
  cin>>age;
  month = age*12;
  day = age*365;
  minutes = day*24*60;
  cout<<month<<endl<<day<<endl<<minutes;
  return 0;
}