#ifndef TV_H
#define TV_H
#include <string>

#include "Appliance.h"

class TV : public Appliance {
 private:
  double screenSize;

 public:
  TV();
  TV(int powerRating, double screenSize);
  void setScreenSize(double screenSize);
  std::string get_type();
  double getScreenSize();
  double getPowerConsumption();
};

#endif