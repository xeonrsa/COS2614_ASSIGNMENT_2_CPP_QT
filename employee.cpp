#include "employee.h"
#include "salary.h"
#include "commission.h"
#include "hourly.h"

int Employee::nextId = 1001;
Employee::Employee(QString fn, QString ln): id(nextId), firstName(fn), lastName(ln){
    nextId++;
}
Employee::Employee(const Employee &e): id(e.id), firstName(e.firstName), lastName(e.lastName){
   if (e.getPayment()->getType() == "salary")
       payment = new Salary((Salary&)*(e.payment));
   else if (e.getPayment()->getType() == "hourly")
      payment = new Hourly((Hourly&)*(e.payment));
   else if (e.getPayment()->getType() == "commission")
      payment = new Commission((Commission&)*(e.payment));
   else
      payment = NULL;
}
Employee::~Employee(){
    delete payment;
}
int Employee::getID() const{
    return id;
}
QString Employee::getName() const{
    return QString("%1  %2").arg(firstName).arg(lastName);
}
void Employee::setPayment(Payment* pay){
    payment = pay;
}
Payment* Employee::getPayment() const{
    return payment;
}
