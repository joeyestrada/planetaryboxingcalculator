#include <iostream>

int main() {
  
  double weight;
  std::cout << "Please enter your earth weight: ";
  std::cin >> weight;

  std::cout << "Below are a list of planets in your solar system:\n";
  std::cout << "1 for Mercury   2 for Venus   3 for Mars\n";
  std::cout << "4 for Jupiter   5 for Saturn  6 for Uranus\n";
  std::cout << "7 for Neptune\n";
  
  int planet;
  std::cout << "Enter the number that corresponds with the planet your boxing match is in: ";
  std::cin >> planet;

  double new_weight;

  switch(planet) {
    case 1:
      new_weight = weight * 0.38;
      break;
    case 2:
      new_weight = weight * 0.91;
      break;
    case 3:
      new_weight = weight * 0.38;
      break;
    case 4:
      new_weight = weight * 2.34;
      break;
    case 5:
      new_weight = weight * 1.06;
      break;
    case 6:
      new_weight = weight * 0.92;
      break;
    case 7:
      new_weight = weight * 1.19;
      break;
  }

  std::cout << "Your weight on this planet will be: " << new_weight << "\n";
}
