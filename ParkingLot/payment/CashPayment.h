#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

#include "PaymentStrategy.h"
#include <iostream>
using namespace std;

class CashPayment : public PaymentStrategy
{
public:
    void processPayment(double amount) override;
};

#endif
