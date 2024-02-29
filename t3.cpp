#include<iostream>
using namespace std;
int main()
{
  int num_1, num_2;
  cout<<"enter number: ";
  cin>>num_1;
  cout<<"enter number: ";
  cin>>num_2;
  int sum= num_1+num_2;
  int minus = num_1-num_2;
  int multiply= num_1*num_2;
  int divide =num_1/num_2;
  int remainder = num_1%num_2;
  cout<<sum<<endl<<minus<<endl<<multiply<<endl<<divide<<endl<<remainder;
  return 0;
    
}
