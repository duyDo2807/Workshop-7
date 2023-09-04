#ifndef FRIDGE_H
#define FRIDGE_H
#include <string>

#include "Appliance.h"

class Fridge : public Appliance {
 private:
  double volume;

 public:
  Fridge();
  Fridge(int powerRating, double volume);
  int get_powerRating();
  std::string get_type();
  double getVolume();
  double getPowerConsumption();
};

#endif