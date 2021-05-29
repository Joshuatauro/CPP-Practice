#include<iostream>
using namespace std;

int main(){
  int inputA;
  int inputB;
  int inputC;

  cin>>inputA;
  cin>>inputB;
  cin>>inputC;

  if(inputA > inputB){
    if(inputA > inputC){
      cout<<"First input is biggest \n";
    } else {
      cout<<"Third input is biggest \n";
    }
  } else{
    if(inputB > inputC){
      cout<<"Second input is biggest \n";
    } else {
      cout<<"Third input is biggest";
    }
  }

  return 0;
}