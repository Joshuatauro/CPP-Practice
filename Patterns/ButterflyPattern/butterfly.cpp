#include<iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

int main(){
  int length;

  cout << "Enter the length of half";
  cin >> length;

  for(int rowCounter = 1; rowCounter<= length; rowCounter++){
    for(int colCounter = 0; colCounter < rowCounter; colCounter++){
      cout << "*";
    }

    int numOfSpaces = length*2 - 2*rowCounter;

    for (int i = 0; i<numOfSpaces; i++){
      cout << " ";
    }

    for(int colCounter = 0; colCounter < rowCounter; colCounter++){
      cout << "*";
    }
    cout << endl;
  }

  for(int rowCounter = length; rowCounter > 0; rowCounter--){
    for(int colCounter = 0; colCounter < rowCounter; colCounter++){
      cout << "*";
    }

    int numOfSpaces = length*2 - 2*rowCounter;

    for (int i = 0; i<numOfSpaces; i++){
      cout << " ";
    }

    for(int colCounter = 0; colCounter < rowCounter; colCounter++){
      cout << "*";
    }
    cout << endl;
  }
}