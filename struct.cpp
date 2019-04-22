#include <iostream>
#include <string>
using namespace std;
pr
struct produce{
  string name;
  double price;
  double weight;
}watermelon, apple;

void printProduce(produce p);

int main(){
  watermelon.name = "watermelon";
  watermelon.price = 0.99;
  watermelon.weight = 7;

  apple.name = "apple";
  apple.price = 0.45;
  apple.weight = 1;

  printProduce(watermelon);
  printProduce(apple);

  Case apple_crate;

  return 0;

}

void printProduce(produce p){
  cout << "Name: " << p.name;
}
