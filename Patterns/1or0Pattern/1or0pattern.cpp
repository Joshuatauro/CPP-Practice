#include<iostream>
using namespace std;

// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main(){
  int numberOfRows;

  cout << "Enter the number of rows => ";
  cin >> numberOfRows;

  for(int rowCounter = 1; rowCounter < numberOfRows+1; rowCounter++){
    for (int colCounter = 1; colCounter < rowCounter+1; colCounter++){
      if((rowCounter+colCounter) % 2 == 0){
        cout << "1" << " ";
      } else {
        cout << "0" << " ";
      }
    }

    cout << endl;
  }

  return 0;
}