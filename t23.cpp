#include<iostream>
using namespace std;
int main(){
  char word, output;
  cout<<"enter word: ";
  cin>>word;
  output = toupper(word);
  cout<<output;

  return 0;
}