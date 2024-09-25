// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() 
{ 
  //declare named  variables
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;
  double tot = 0.0;
  double smallPer = 0.0;
  double mediumPer = 0.0;
  double largePer = 0.0;
  double familyPer = 0.0;

  //enter input item
  cout << "Small pizzas: " ;
  cin >> small;

  cout << "Medium pizzas: " ;
  cin >> medium;

  cout << "Large pizzas: " ;
  cin >> large;

  cout << "Family pizzas: " ;
  cin >> family;

  //calculate  and display the end balance
  tot = small + medium + large + family;
  smallPer = small / tot * 100;
  mediumPer = medium / tot * 100;
  largePer = large / tot * 100;
  familyPer = family / tot * 100;
  cout << "Total pizzas: " << tot << endl;
  cout << smallPer << endl;
  cout << "Small pizzas: %" << smallPer << endl;
  cout << "Medium pizzas: %" << mediumPer << endl;
  cout << "Large pizzas: %" << largePer << endl;
  cout << "Family pizzas: %" << familyPer << endl;
  
  
  
  return 0;
} //end of main function
