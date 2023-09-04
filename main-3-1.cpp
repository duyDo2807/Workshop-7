#include <iostream>

#include "Appliance.h"
#include "Fridge.h"
#include "House.h"
#include "TV.h"

int main() {
  House house(2);
  Appliance* newAppliance1 = new Fridge(50, 10);
  Appliance* newAppliance2 = new TV(40, 30);
  house.addAppliance(newAppliance1);
  house.addAppliance(newAppliance2);
  std::cout << "House's appliances are: " << newAppliance1->get_type() << ", "
            << newAppliance2->get_type() << std::endl;
  std::cout << "The house's total power consumption: "
            << house.getTotalPowerConsumption() << std::endl;
  return 0;
}