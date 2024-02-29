#include<iostream>
using namespace std;
int main()
{
  int length, width;
  cout<<"Enter Length: ";
  cin>>length;
  cout<<"Enter width: ";
  cin>>width;
  int area = length * width;
  int perimeter = 2*(length + width);
  cout<<area<<endl<<perimeter;
  return 0;
    
}
