#include<iostream>
using namespace std;

// 1
// 22
// 333
// 4444
// 55555


int main(){
  int numOfRows;

  cout << "Enter the number of rows ";
  cin >> numOfRows;


  for (int rowCounter = 1; rowCounter <= numOfRows; rowCounter++){
    for (int colCounter = 0; colCounter<rowCounter; colCounter++){
      cout << rowCounter;
    }

    cout << endl;
  }
}