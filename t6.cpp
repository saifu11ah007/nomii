#include<iostream>
using namespace std;
int main()
{
  int radius;
  cout<<"enter radius: ";
  cin>>radius;
  float area = 3.14 * radius * radius;
  float diameter= 2*radius;
  float circumference= 2*(22.0/7)*radius;
  cout<<area<<endl<<diameter<<circumference;
  
  return 0;
    
}
