#include "TV.h"

TV::TV() : Appliance(), screenSize(0) {}

TV::TV(int powerRating, double screenSize)
    : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) { screenSize = screenSize; }

std::string TV::get_type() { return "TV"; }

double TV::getScreenSize() { return screenSize; }

double TV::getPowerConsumption() {
  return Appliance::get_powerRating() * (screenSize / 10);
}