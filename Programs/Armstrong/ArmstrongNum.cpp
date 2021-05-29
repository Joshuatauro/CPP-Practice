#include<iostream>
#include<math.h>
using namespace std;


int main(){
  int number;
  int numberCopy;
  int sum;

  cout << "Enter number => ";
  cin >> number;
  numberCopy = number;

  while (number > 0){
    int digit = number%10;
    sum += pow(digit, 3);
    number = number/10;
  }

  if(sum == numberCopy){
    cout << numberCopy << " is an armstrong number";
  } else {
    cout << numberCopy << " is not an armstrong number since its sum is " << sum;
  }

  return 0;
}