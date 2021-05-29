#include<iostream>
using namespace std;

int main(){
  int n;
  
  cout<<"Enter the button pressed";
  cin>>n;
  
  switch (n)
  {
  case 'a':
    cout<<"Button pressed is a";
    break;
  case 'b':
    cout<<"Button pressed is b";
    break;
  case 'c':
    cout<<"Button pressed is c";
    break;
  default:
    cout<<"Could not understand output";
    break;
  } 

  return 0;
}