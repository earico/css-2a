///Eleazar Rico
///Dr. A
///01-28-2019
///Shoe Discounter code thing
#include <iostream>
#include <string>
using namespace std;

struct ShoeRecord{
  double shoe_sizes[27] = {1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5,
                          5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5,
                          10, 10.5, 11, 11.5, 12, 12.5, 13, 13.5, 14};
  string shoe_color;
  string shoe_style;
  string shoe_name;
  double shoe_price;
}shoeA, shoeB, shoeC;

int counter = 1;

void applyDiscount(ShoeRecord& shoe, double discount_percentage);

int main(){
  double discount1 = 0.10;
  double discount2 = 0.20;
  double discount3 = 0.50;

  //Shoe A
  shoeA.shoe_color = "Blue";
  shoeA.shoe_style = "Running Shoes";
  shoeA.shoe_name = "Water 11's";
  shoeA.shoe_price = 30;

  //Shoe B
  shoeB.shoe_color = "Red";
  shoeB.shoe_style = "Crocs";
  shoeB.shoe_name = "Flex 12's";
  shoeB.shoe_price = 40;

  //Shoe C
  shoeC.shoe_color = "Yellow";
  shoeC.shoe_style = "Rain Boots";
  shoeC.shoe_name = "Booties";
  shoeC.shoe_price = 50;

  applyDiscount(shoeA, 0.10);
  cout << endl;
  applyDiscount(shoeB, discount2);
  cout << endl;
  applyDiscount(shoeC, discount3);

  return 0;
}

void applyDiscount(ShoeRecord& shoe, double discount_percentage){
    shoe.shoe_price = shoe.shoe_price - (shoe.shoe_price * discount_percentage);
    cout << "Shoe sizes: ";
    for (int i = 0; i < 27; i++)
      cout << shoe.shoe_sizes[i] << " ";

    cout << endl;
    cout << "Shoe color: " << shoe.shoe_color << endl;
    cout << "Shoe style: " << shoe.shoe_style << endl;
    cout << "Shoe name: " << shoe.shoe_name << endl;
    cout << "Shoe price: $" << shoe.shoe_price << endl;
}
