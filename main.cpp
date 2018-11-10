#include <QTextStream>
#include <QString>
#include <QFile>

#include "commission.h"
#include "employee.h"
#include "employeelist.h"
#include "hourly.h"
#include "payment.h"
#include "salary.h"

QTextStream cout(stdout);

void displaySalaries(EmployeeList& list, QString type){
    cout << "Displaying " << type << " employees: " << "\n";
    foreach(Employee e, list){
        if(e.getPayment()->getType() == type){
            cout << e.getName() << "\t" << e.getID() << "\t" << e.getPayment()->pay()<< "\n";
        }
    }
    cout << endl;
}
int main(){
    Payment * p1 = new Salary(10000.00);
    Payment * p2 = new Salary(12000.00);
    Payment * p3 = new Hourly(40.00);
    Payment * p4 = new Hourly(60.00);
    Payment * p5 = new Commission(7);
    Payment * p6 = new Commission(9);
    Employee e1("Joe", "Blob");
    e1.setPayment(p1);
    Employee e2("Kim", "Jim");
    e2.setPayment(p2);
    Employee e3("Dav", "Becks");
    e3.setPayment(p3);
    Employee e4("Collen", "Scholes");
    e4.setPayment(p4);
    Employee e5("Jack", "Jose");
    e5.setPayment(p5);
    Employee e6("Donald", "Trump");
    e6.setPayment(p6);
    EmployeeList l1;
    l1.append(e1);
    l1.append(e2);
    l1.append(e3);
    l1.append(e4);
    l1.append(e5);
    l1.append(e6);
    Hourly * h3 = (Hourly*) l1.at(2).getPayment();
    h3->addHours(40);
    Hourly * h4 = (Hourly*) l1.at(3).getPayment();
    h4->addHours(40);
    Commission * c5 = (Commission*) l1.at(4).getPayment();
    c5->addSales(100000.00);
    Commission * c6 = (Commission*) l1.at(5).getPayment();
    c6->addSales(150000.00);
    displaySalaries(l1, "salary");
    displaySalaries(l1, "hourly");    
    displaySalaries(l1, "commission");
    return 0;
}
