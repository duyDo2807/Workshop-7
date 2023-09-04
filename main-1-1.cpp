#include <iostream>

#include "Appliance.h"

int main() {
  Appliance appliance(40);
  appliance.turnOn();
  std::cout << "An appliance has a power rating of "
            << appliance.get_powerRating() << std::endl;
  return 0;
}