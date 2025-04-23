#include "BikeVehicle.h"
using namespace std;

BikeVehicle::BikeVehicle(string licensePlate)
    : Vehicle(licensePlate, "Bike") {}

double BikeVehicle::calculateFee(int hoursStayed)
{
    return hoursStayed * RATE; // 5.0 per hour for bikes
}

double BikeVehicle::calculateFee()
{
    return RATE; // Returns $5.0 for 1 hour if no hours are provided
}
