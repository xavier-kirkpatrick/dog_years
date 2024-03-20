#include <iostream>

int main() {

  // First two dog years === 21 human years
  // Each following dog year === 4 human years

  double dog_age;
  double human_age;

  std::cout << "Enter a dog age in years to be converted to human years:\n";

  std::cin >> dog_age;

  if (dog_age == 1) {
    std::cout << "Your dog is 10.5 years old.\n";
  } else if (dog_age == 2) {
    std::cout << "Your dog is 21 years old.\n";
  } else {
    human_age = 21 + (dog_age - 2) * 4;
    std::cout << "Your lovley dog is " << human_age << " human years old :)\n";
  };

  return 0;
}