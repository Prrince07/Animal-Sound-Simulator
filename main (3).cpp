#include <iostream>
#include <string>
using namespace std;
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound :- \n";
    }
};
class cat : public Animal {
  public:
    void animalSound() {
      cout << "The cat says: meow meow \n";
    }
};
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  cat mycat;
  Dog myDog;

  myAnimal.animalSound();
  mycat.animalSound();
  myDog.animalSound();
  return 0;
}
