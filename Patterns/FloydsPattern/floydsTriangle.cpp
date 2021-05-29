#include<iostream>
using namespace std;

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main(){
  int numberCounter = 1;
  int maxNumOfRows;

  cout << "Enter the max num of rows";
  cin >> maxNumOfRows;

  for(int rowCounter = 1; rowCounter < maxNumOfRows+1; rowCounter++){
    for (int colCounter = 0; colCounter < rowCounter; colCounter++){
      cout << numberCounter << " ";
      numberCounter++;
    }

    cout << endl;
  }

  return 0;
}