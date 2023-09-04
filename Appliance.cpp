#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {}
Appliance::Appliance(int powerRating) : powerRating(powerRating) {}

void Appliance::turnOn() { isOn = true; }

void Appliance::turnOff() { isOn = false; }

int Appliance::get_powerRating() { return powerRating; }

std::string Appliance::get_type() { return "No type"; }

double Appliance::getPowerConsumption() { return 0; }