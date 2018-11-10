#include <commission.h>

Commission::Commission(double comRate): Payment("commission"), commissionRate(comRate), totalSales(0.0){
}
void Commission::addSales(double sales){
    totalSales = totalSales + sales;
}
double Commission::pay() const{
    return commissionRate / 100 * totalSales;
}
