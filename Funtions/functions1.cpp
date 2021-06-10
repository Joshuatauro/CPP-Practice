#include<iostream>
using namespace std;

//* Q1) WAF TO PRINT ALL PRIME NUMBERS BETWEEN A RANGE
//* Q2) WAF TO PRINT THE FIRST N TERMS OF FIBONACCI
//* Q3) WAF TO PRINT THE FACTORIAL OF A NUMBER
//* Q4) TO FIND THE COMBINATION(nCr) OF A NUMBER 

//* Q1
int primeNumbers(int upperLimit, int lowerLimit){
  for (int i=lowerLimit; i <= upperLimit; i++){
    bool isCurrentPrime = true;
    for (int j=2; j < i/2; j++){
      if(i%j == 0){
        isCurrentPrime = false;
      }
    }
    if(isCurrentPrime){
      cout << i << endl;
    }
  }

  return 0;
}

// * Q2
int fibonacciSequence(int nthTerm){
  int a = 0;
  int b = 1;
  int c;
  int n = 0;
  while(n < nthTerm){
    cout << a << " ";
    c = a+b;

    a = b;
    b = c;

    n++;
  }

  return 0;
}

// * Q3
int factorial(int num){
  int product = 1;
  for (int i=1; i<= num; i++){
    product *= i;
  }

  cout << product << " is the factorial of  " << num << endl;
}

// * Q4
int fact(int num){
  int product = 1;
  for (int i=1; i<= num; i++){
    product *= i;
  }

  return product;
}

int nCr(int n, int r){
  cout << (fact(n)/(fact(r) * fact(n-r)));

  return 0;
}


int main(){

  int choice;

  cout << "Please enter your choice => ";
  cin >> choice;

  if (choice == 1){
    int num1;
    int num2;
    cout << "Enter upper limit => ";
    cin >> num1;
  
    cout << "Enter lower limit => ";
    cin >> num2;

    primeNumbers(num1, num2);

  } else if(choice == 2){
    int num;
    cout << "Enter the number of terms";
    cin >> num;
    fibonacciSequence(num);
  } else if (choice == 3){
    int num;
    cout << "Enter the number of terms";
    cin >> num;
    factorial(num);
  } else if(choice == 4){
    int n;
    int r;
    
    cout << "Enter value of n => ";
    cin >> n;

    cout << "Enter value of r => ";
    cin >> r;

    nCr(n,r);
  }

  return 0;

}


