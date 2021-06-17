#include<iostream>
using namespace std;

int main(){
  const int size = 100; //* Allocating memory for the array ie user can select any value less than 100(only for dynamic array)

  int lengthOfArray;
  
  cout << "Enter the length of the array => ";
  cin >> lengthOfArray;

  int array[size];

  for (int i=0; i<lengthOfArray; i++){
    int n;

    cout << "Enter the value => ";
    cin >> n;

    array[i] = n;
  }

  for (int i=0; i<lengthOfArray; i++){
  cout << array[i] << " ";
  }

  return 0;
}