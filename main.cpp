/***********************************************************************
* Copyright (C) 2010-2011, XXX Co. Ltd.
* All rights reserved.
* 
* FileName: main.cpp
* Description: EMS Software Start
* Author: Isaac Ma
* Date: 2025-01-03
* Others: 
***********************************************************************/
#include <stdlib.h>
#include "EnergyBubbles.h"

int main(int argc, char* argv[]) {
    EnergyBubbles EnergyBubbles1;
    EnergyBubbles1.setRateInputEnergy(2000);
    EnergyBubbles1.setRateOutputEnergy(2000);
    EnergyBubbles1.setStoredEnergy(3000);
    EnergyBubbles1.printStatus();
    return 0;
}