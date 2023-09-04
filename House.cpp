#include "House.h"

House::House() : numAppliances(0) {}

House::House(int numAppliances)
    : numAppliances(numAppliances), currentCount(0) {
  appliances = new Appliance*[numAppliances];
  for (int i = 0; i < numAppliances; i++) {
    appliances[i] = nullptr;
  }
}

bool House::addAppliance(Appliance* appliance) {
  if (currentCount < numAppliances) {
    appliances[currentCount] = appliance;
    currentCount++;
    return true;
  }
  return false;
}

double House::getTotalPowerConsumption() {
  double total = 0;
  for (int i = 0; i < numAppliances; i++) {
    total = total + appliances[i]->getPowerConsumption();
  }
  return total;
}