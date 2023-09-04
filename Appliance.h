#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <string>

class Appliance {
 private:
  int powerRating;
  bool isOn;

 public:
  Appliance();
  Appliance(int powerRating);
  void turnOn();
  void turnOff();
  int get_powerRating();
  virtual std::string get_type();
  virtual double getPowerConsumption();
};

#endif