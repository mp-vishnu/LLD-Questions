#include "VehicleFactory.h"
#include <algorithm> // for transform

Vehicle *VehicleFactory::createVehicle(const string &vehicleType, const string &licensePlate)
{
    string typeLower = vehicleType;
    transform(typeLower.begin(), typeLower.end(), typeLower.begin(), ::tolower);

    if (typeLower == "car")
    {
        return new CarVehicle(licensePlate);
    }
    else if (typeLower == "bike")
    {
        return new BikeVehicle(licensePlate);
    }

    return nullptr; // For unsupported vehicle types
}
