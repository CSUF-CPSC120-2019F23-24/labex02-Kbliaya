// Name: Kaylee Bliaya
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main ()
{
  double meal_cost, tax, tip, bill;

  //Introduction
  std::cout<<"Welcome to the Restaurant Bill Calculator!\n";

  //Get the total meal cost.
  std::cout<< "What is the total meal cost? ";
  std::cin>>meal_cost;

  //Calculate the tip.
  tip = meal_cost * 0.0775;

  //Display the tip.
  std::cout<<"Tip: " <<tip<<'\n';

  //Calculate the tax.
  tax = meal_cost * 0.2;

  //Display the tax.
  std::cout<<"Tax: " <<tax<<'\n';

  //Calculate the total bill.
  bill = meal_cost + tip + tax;

  //Display total bill.
  std::cout<<"Total Bill: " <<bill<<'\n';

  return 0;
}
