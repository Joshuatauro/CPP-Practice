#include<iostream>
using namespace std;

int main(){
  int number;

  cout << "Enter number => ";
  cin >> number;

  bool isPrime = true;

  for (int i=2; i<number/2;i++){
    if(number%i == 0){
      isPrime = false;
    }
  }


  if(isPrime){
    cout << number << " is a prime number";
  } else {
    cout << number << " is not a prime number";
  }

  return 0;
}