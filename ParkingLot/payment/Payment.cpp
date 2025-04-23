#include "Payment.h"
#include <iostream>
using namespace std;

Payment::Payment(double amt, PaymentStrategy *strategy)
    : amount(amt), strategy(strategy) {}

void Payment::processPayment()
{
    if (amount > 0 && strategy)
    {
        strategy->processPayment(amount);
    }
    else
    {
        cout << "Invalid payment amount or strategy." << endl;
    }
}
