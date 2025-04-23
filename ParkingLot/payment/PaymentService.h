#ifndef PAYMENTSERVICE_H
#define PAYMENTSERVICE_H

#include "Payment.h"
#include "CashPayment.h"
#include "CreditCardPayment.h"
#include "UPIPayment.h"
#include <iostream>

class PaymentService
{
public:
    void processPayment(double fee);
    void choosePaymentMethod(double fee);
};

#endif // PAYMENTSERVICE_H
