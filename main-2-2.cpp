#include <iostream>

#include "Appliance.h"
#include "TV.h"

int main() {
  TV tv(40, 30);
  std::cout << "A " << tv.get_type() << " has a power rating of "
            << tv.get_powerRating() << ", has a screen size of "
            << tv.getScreenSize() << " and has a power consumption of "
            << tv.getPowerConsumption() << std::endl;
  return 0;
}