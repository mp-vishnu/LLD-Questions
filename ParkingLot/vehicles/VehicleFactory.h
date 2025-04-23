#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include <string>
#include "Vehicle.h"
#include "CarVehicle.h"
#include "BikeVehicle.h"

using namespace std;

class VehicleFactory
{
public:
    static Vehicle *createVehicle(const string &vehicleType, const string &licensePlate);
};

#endif
