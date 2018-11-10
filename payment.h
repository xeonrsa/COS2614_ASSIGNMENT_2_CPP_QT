#ifndef PAYMENT_H
#define PAYMENT_H

#include <QString>

class Payment{
public:
    Payment(QString typ);
    QString getType() const;
    virtual double pay() const = 0; //NOTE: Pure virtual
protected:
    QString type;
};
#endif // PAYMENT_H
