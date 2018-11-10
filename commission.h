#ifndef COMMISSION_H
#define COMMISSION_H

#include "payment.h"

class Commission : public Payment{
public:
    Commission(double commissionRate);
    void addSales(double sales);
    double pay() const; //Important concept Const
private:
    double commissionRate;
    double totalSales;
};

#endif // COMMISSION_H
