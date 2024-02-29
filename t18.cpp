#include<iostream>
using namespace std;
int main(){
  int radius;
  cout<<"enter radius: ";
  cin>>radius;
  float volume = ((float)4/3 )*(22.0/7)*radius*radius*radius;
  cout<<volume;
  return 0;
}