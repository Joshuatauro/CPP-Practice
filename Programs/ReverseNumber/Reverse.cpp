#include<iostream>
using namespace std;

int main(){
  int number;
  int numberCopy;

  cout << "Enter number to be reversed => ";
  cin >> number;
  numberCopy = number;

  int reverseNumber;

  while(number > 0){
    int lastDigit = number%10;
    reverseNumber = reverseNumber*10+lastDigit;
    number = number/10;
  }

    cout << reverseNumber << " is the reverse of " << numberCopy;

  return 0;
}