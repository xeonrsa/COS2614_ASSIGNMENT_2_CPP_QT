#ifndef HOURLY_H
#define HOURLY_H

#include "payment.h"

class Hourly : public Payment{
public:
    Hourly(double hour);
    void addHours(double hours);
    double pay() const;
private:
    double hourlyRate;
    double hours;
};

#endif // HOURLY_H
