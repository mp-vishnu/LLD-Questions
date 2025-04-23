#ifndef CARVEHICLE_H
#define CARVEHICLE_H

#include "Vehicle.h"

class CarVehicle : public Vehicle
{
private:
    static constexpr double RATE = 10.0; // $10 per hour

public:
    CarVehicle(string licensePlate);

    // Implement the calculateFee function for a given number of hours
    double calculateFee(int hoursStayed);

    // Default fee if no parameter is passed (optional)
    double calculateFee() override;
};

#endif // CARVEHICLE_H
