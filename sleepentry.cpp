
#include "sleepentry.h"
#include <iostream>
using namespace std;

SleepEntry::SleepEntry(int m, int d, int y, int mood, string n,
                       int hours, string quality)
    : WellnessEntry(m, d, y, mood, n),
      hoursSlept(hours),
      sleepQuality(quality) {}

void SleepEntry::display() const
{
    cout << "[Sleep Entry]" << endl;

    WellnessEntry::display();

    cout << "Hours slept: " << hoursSlept << endl;
    cout << "Sleep quality: " << sleepQuality << endl;
}