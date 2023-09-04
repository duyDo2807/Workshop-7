#include "Fridge.h"

Fridge::Fridge() : Appliance() {}
Fridge::Fridge(int powerRating, double volume)
    : Appliance(powerRating), volume(volume) {}

double Fridge::getVolume() { return volume; }

int Fridge::get_powerRating() { return Appliance::get_powerRating(); }

std::string Fridge::get_type() { return "Fridge"; }

double Fridge::getPowerConsumption() {
  return Appliance::get_powerRating() * 24 * (volume / 100);
}