#include "CarVehicle.h"

CarVehicle::CarVehicle(string licensePlate)
    : Vehicle(licensePlate, "Car") {}

double CarVehicle::calculateFee(int hoursStayed)
{
    return hoursStayed * RATE;
}

double CarVehicle::calculateFee()
{
    return RATE; // default to 1 hour if no parameter is provided
}
