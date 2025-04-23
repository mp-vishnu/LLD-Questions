#ifndef BIKEVEHICLE_H
#define BIKEVEHICLE_H

#include "Vehicle.h"

class BikeVehicle : public Vehicle
{
private:
    static constexpr double RATE = 5.0; // $5 per hour

public:
    BikeVehicle(string licensePlate);

    // Calculate fee based on hours
    double calculateFee(int hoursStayed);

    // Default fee (optional)
    double calculateFee() override;
};

#endif // BIKEVEHICLE_H
