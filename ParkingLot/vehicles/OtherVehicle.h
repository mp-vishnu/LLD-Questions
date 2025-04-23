#ifndef OTHERVEHICLE_H
#define OTHERVEHICLE_H

#include "Vehicle.h"

class OtherVehicle : public Vehicle
{
private:
    static constexpr double RATE = 15.0;

public:
    OtherVehicle(string licencePlate);
    double calculateFee(int hoursStayed);
};

#endif