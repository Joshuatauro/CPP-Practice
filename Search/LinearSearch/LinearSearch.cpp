#include<iostream>
using namespace std;

int main(){
  const int size = 100;

  int array[size];

  int lengthOfArray;

  cout << "Enter the length of the array => ";
  cin >> lengthOfArray;

  for (int i=0; i < lengthOfArray; i++){
    int value;

    cout << "Enter the value of " << i << " position element => ";

    cin >> value;

    array[i] = value;
  }

  int numToBeFound;

  cout << "Enter the number to be found => ";
  cin >> numToBeFound;

  for (int i=0; i< numToBeFound; i++){
    if(array[i] == numToBeFound){
      cout << "Found the value at index "<<i;
    }
  }

  return 0;
}

