#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H

#include "PaymentStrategy.h"
#include <iostream>
using namespace std;

class CreditCardPayment : public PaymentStrategy
{
public:
    void processPayment(double amount) override;
};

#endif // CREDITCARDPAYMENT_H
