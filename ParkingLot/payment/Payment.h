#ifndef PAYMENT_H
#define PAYMENT_H

#include "PaymentStrategy.h"

class Payment
{
private:
    double amount;
    PaymentStrategy *strategy;

public:
    Payment(double amt, PaymentStrategy *strategy);
    void processPayment();
};

#endif // PAYMENT_H
