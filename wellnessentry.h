
#ifndef WELLNESSENTRY_H
#define WELLNESSENTRY_H

#include "entrydate.h"
#include <string>
using namespace std;

class WellnessEntry
{
private:
    EntryDate date;
    int moodScore;
    string note;

public:
    WellnessEntry(int m, int d, int y, int mood, string n);
    void display() const;
};

#endif