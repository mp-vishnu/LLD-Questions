#ifndef PAYMENTSTRATEGY_H
#define PAYMENTSTRATEGY_H

class PaymentStrategy
{
public:
    virtual void processPayment(double amount) = 0;
    virtual ~PaymentStrategy() {}
};
#endif