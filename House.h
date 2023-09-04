#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House {
 private:
  int numAppliances;
  Appliance** appliances;
  int currentCount;

 public:
  House();
  House(int numAppliances);
  bool addAppliance(Appliance* appliance);
  double getTotalPowerConsumption();
};

#endif