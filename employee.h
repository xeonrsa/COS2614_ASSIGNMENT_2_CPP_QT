#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include "payment.h"

class Employee{
public:
    Employee(QString fn, QString ln);
    Employee(const Employee& e);
    ~Employee(); //Import concept, destructor
    int getID() const;
    QString getName() const;
    void setPayment(Payment* pay);
    Payment* getPayment() const;
private:
    int id;
    QString firstName;
    QString lastName;
    Payment* payment;
    static int nextId;
};

#endif // EMPLOYEE_H
