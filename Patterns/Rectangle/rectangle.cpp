#include<iostream>
using namespace std;

int main(){
  int numberOfRows;
  int numberOfCols;

  cout<<"Enter number of rows";
  cin >> numberOfRows;
  
  cout<<"Enter number of cols";
  cin >> numberOfCols;

  for(int rowCounter = 0; rowCounter < numberOfRows; rowCounter++){
    for(int colCounter = 1; colCounter <= numberOfCols; colCounter++){
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}