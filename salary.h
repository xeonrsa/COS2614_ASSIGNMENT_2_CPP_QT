#ifndef SALARY_H
#define SALARY_H

#include "payment.h"

class Salary : public Payment{
public:
    Salary(double sal);
    double pay() const;
private:
    double salary;
};

#endif // SALARY_H
