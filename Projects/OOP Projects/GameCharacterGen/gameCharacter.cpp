#include <iostream>
using namespace std;

class Character{
  public:
    string name;
    string attackType;
    int damage;
    int health;

    Character(string pName, string pAttackType, int pDamage){
      if(checkValidAttackType(pAttackType)){
        name = pName;
        attackType = pAttackType;
        damage=pDamage;
        cout << pDamage << " " << pName << endl;
        health=pDamage*2;
      }
    }
  private: 
    bool checkValidAttackType(string pAttackType){
      string validAttackTypes[] = {"Meleee", "Air", "Sniper"};
      bool isValid = false;

      for (int i=0; i < 3; i++){
        if(pAttackType == validAttackTypes[i]){
          isValid = true;
        }
      }
      if(!isValid){
        cout << "PLEASE ENETER A CORRECT ATTACK TYPE BHOPDIKE" << endl;
      }
      return isValid;
    }
};


int main(){

  Character Barbarian("Barbarian", "Melee", 75);
  Character Archer("Archer", "Sniper", 105);
  Character Dragon("Dragon", "Air", 50);

  cout << Dragon.health << " is the health of the dragon" << endl;
  cout << Archer.health << " is the health of the archer" << endl;


  return 0;
}