#include "salary.h"

Salary::Salary(double sal): Payment("salary"), salary(sal){
}
double Salary:: pay() const{
    return salary;
}
