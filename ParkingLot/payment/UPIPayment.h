#ifndef UPIPAYMENT_H
#define UPIPAYMENT_H

#include "PaymentStrategy.h"
#include <iostream>
using namespace std;

class UPIPayment : public PaymentStrategy
{
public:
    void processPayment(double amount) override;
};

#endif // UPIPAYMENT_H
