#include<iostream>
using namespace std;

int main(){
  int numOfRows;

  cout << "Enter the number of rows";
  cin >> numOfRows;

  for (int rowCounter = 1; rowCounter <= numOfRows; rowCounter++){
    for (int spaceCounter = 0; spaceCounter < numOfRows-rowCounter; spaceCounter++){
      cout << " ";
    }

    for (int numberCounter = 1; numberCounter <= rowCounter; numberCounter++){
      cout << numberCounter << " ";
    }

    cout << endl;
  }

  return 0;
}