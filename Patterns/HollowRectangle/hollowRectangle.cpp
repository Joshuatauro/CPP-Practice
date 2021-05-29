#include<iostream>
using namespace std;

// *****
// *   *
// *****


int main(){
  int length;
  int breadth;

  cout<<"Enter length of hollow rect";
  cin >> length;

  cout << "Enter breadth of hollow rect";
  cin >> breadth;

  for (int lengthCounter=0; lengthCounter < length; lengthCounter++){
    for (int breadthCounter=0; breadthCounter < breadth; breadthCounter++){
      if(lengthCounter == 0 || lengthCounter == length-1){
        cout<<"*";
      } else if(breadthCounter == 0 || breadthCounter == breadth-1){
        cout<<"*";
      } else {
        cout << " ";
      }
    }

    cout<<"\n";
  }

  return 0;


}