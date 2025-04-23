#include "Vehicle.h"

Vehicle::Vehicle(string license, string type)
    : licensePlate(license), vehicleType(type) {}

string Vehicle::getLicensePlate()
{
    return licensePlate;
}

string Vehicle::getVehicleType()
{
    return vehicleType;
}
