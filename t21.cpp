#include<iostream>
using namespace std;
int main(){
  int subject_1, subject_2, subject_3, subject_4, sum;
  float percent, average;
  cout<<"enter subject_1 marks: ";
  cin>>subject_1;
  cout<<"enter subject_2 marks: ";
  cin>>subject_2;
  cout<<"enter subject_3 marks: ";
  cin>>subject_3;
  cout<<"enter subject_4 marks: ";
  cin>>subject_4;
  sum = subject_1 + subject_2 + subject_3+ subject_4;
  percent = sum/200.0*100;
  average = sum/4;
  cout<<sum<<average<<endl<<percent<<endl;
  return 0;
}