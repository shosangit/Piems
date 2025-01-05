#include "EnergyBubbles.h"
#include <iostream>
#include <stdexcept>

EnergyBubbles::EnergyBubbles(double inputEnergy, double outputEnergy, double storedEnergy)
    : _rateInputEnergy(inputEnergy), _rateOutputEnergy(outputEnergy), _storedEnergy(storedEnergy) {}

EnergyBubbles::EnergyBubbles()
    : _rateInputEnergy(0.0), _rateOutputEnergy(0.0), _storedEnergy(0.0) {}

double EnergyBubbles::getRateInputEnergy() const {
    return _rateInputEnergy;
}

void EnergyBubbles::setRateInputEnergy(double value) {
    _rateInputEnergy = value;
}

double EnergyBubbles::getRateOutputEnergy() const {
    return _rateOutputEnergy;
}

void EnergyBubbles::setRateOutputEnergy(double value) {
    _rateOutputEnergy = value;
}

double EnergyBubbles::getStoredEnergy() const{
    return _storedEnergy;
}

void EnergyBubbles::setStoredEnergy(double value){
    _storedEnergy = value;
}

void EnergyBubbles::printStatus() const{
    std::cout << "Energy Bubble Status:\n"
            << "  Input Energy: " << _rateInputEnergy << "\n"
            << "  Output Energy: " << _rateOutputEnergy << "\n"
            << "  Stored Energy: " << _storedEnergy << "\n";
}

