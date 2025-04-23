#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle
{
private:
    string licensePlate;
    string vehicleType;

public:
    Vehicle(string license, string type);
    string getLicensePlate();
    string getVehicleType();
    virtual double calculateFee() = 0; // Abstract method
    virtual ~Vehicle() {}
};

#endif // VEHICLE_H
