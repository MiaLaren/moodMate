
#ifndef EXERCISEENTRY_H
#define EXERCISEENTRY_H

#include "wellnessentry.h"

class ExerciseEntry : public WellnessEntry
{
private:
    string activityType;
    int durationMinutes;

public:
    ExerciseEntry(int m, int d, int y, int mood, string n,
                  string activity, int duration);

    void display() const;
};

#endif