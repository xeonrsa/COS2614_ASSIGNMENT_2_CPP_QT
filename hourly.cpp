#include "hourly.h"

//TO DO: add include
Hourly::Hourly(double hr): Payment("hourly"), hourlyRate(hr), hours(0.0) {
}
void Hourly::addHours(double hrs){
    hours = hours + hrs;
}
double Hourly::pay() const{
    return hours * hourlyRate;
}

