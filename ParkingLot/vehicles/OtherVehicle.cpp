#include "OtherVehicle.h"
using namespace std;

OtherVehicle::OtherVehicle(string licensePlate)
    : Vehicle(licensePlate, "Other") {}

double OtherVehicle::calculateFee(int hoursStayed)
{
    return hoursStayed * RATE;
}