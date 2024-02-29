#include <iostream>
#include<string>
using namespace std;
int main(){
  string num, temp;
  cout<<"Enter 5 digit number: ";
  cin>>num;
  temp=" ";
  temp = num[0];
  num[0]=num[num.length()-1];
  num[num.length()-1]=temp[0];
  cout<<num;
  return 0;

}