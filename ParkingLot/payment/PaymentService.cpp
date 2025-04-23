#include "PaymentService.h"
using namespace std;

void PaymentService::processPayment(double fee)
{
    choosePaymentMethod(fee);
}

void PaymentService::choosePaymentMethod(double fee)
{
    cout << "Total fee: $" << fee << endl;
    cout << "Choose payment method:\n";
    cout << "1. Credit Card\n";
    cout << "2. Cash\n";
    cout << "3. UPI\n";
    cout << "Enter choice: ";

    int choice;
    cin >> choice;

    Payment *payment = nullptr;

    switch (choice)
    {
    case 1:
        payment = new Payment(fee, new CreditCardPayment());
        break;
    case 2:
        payment = new Payment(fee, new CashPayment());
        break;
    case 3:
        payment = new Payment(fee, new UPIPayment());
        break;
    default:
        cout << "Invalid choice. Defaulting to Cash.\n";
        payment = new Payment(fee, new CashPayment());
        break;
    }

    if (payment)
    {
        payment->processPayment();
        delete payment; // Cleanup
    }
}
