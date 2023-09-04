#include <iostream>

#include "Appliance.h"
#include "Fridge.h"

int main() {
  Fridge fridge(50, 10);
  std::cout << "The appliance: " << fridge.get_type()
            << " has a power rating of " << fridge.get_powerRating()
            << " and a volume of " << fridge.getVolume()
            << ", has the power consumption of: "
            << fridge.getPowerConsumption() << std::endl;
  return 0;
}