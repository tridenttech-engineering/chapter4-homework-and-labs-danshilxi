//lab4-4.cpp - displays the volume of a cylinder
//creatd/revised by <your name> on <current date>
#include <iostream>
using namespace std;

int main() 
{
  //declare named constant and variables
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;

  //enter input item
  cout << "Height: ";
  cin >> height;

  cout << "Radius: ";
  cin >> radius;

  //calculate and display the volume
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;

  return 0;
} //end of main function
