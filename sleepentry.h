
#ifndef SLEEPENTRY_H
#define SLEEPENTRY_H

#include "wellnessentry.h"
#include <string>
using namespace std;

class SleepEntry : public WellnessEntry
{
private:
    int hoursSlept;
    string sleepQuality;

public:
    SleepEntry(int m, int d, int y, int mood, string n,
               int hours, string quality);

    virtual void display() const;
};

#endif