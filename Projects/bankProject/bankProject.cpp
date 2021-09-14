
#include <iostream>
using namespace std;

  int money = 1000;

void showBalance();
void depositMoney();
void withdrawMoney();
void end();


void showMenu(){
  cout << "*************MENU*************" << endl;

  cout << "1. BALANCE" << endl;
  cout << "2. DEPOSIT" << endl;
  cout << "3. WITHDRAW" << endl;

  int choice;
  cout << "ENTER YOUR CHOICE => ";
  cin >> choice;

  if(choice == 1) {
    showBalance();
  }
  else if(choice == 2){
    depositMoney();
  } else if (choice == 3) {
    withdrawMoney();
  } else {
    end();
  }

}


void showBalance(){
  cout << money << " is the balance you have" << endl; 
  showMenu();
}

void depositMoney(){
  int amountToDeposit;
  cout << "ENTER AMOUNT TO DEPOSIT => ";
  cin >> amountToDeposit;
  
  money += amountToDeposit;

  showMenu();
}


void withdrawMoney(){
  int amountToWithdraw;
  cout << "AMOUNT TO WITHDRAW => ";

  cin >> amountToWithdraw;

  money -= amountToWithdraw;

  showMenu();
}

void end(){
  cout << "Thank you for using our bank bsdk UwU";
}


int main(){

  showMenu();

  return 0;
}