
#include "exerciseentry.h"
#include <iostream>
using namespace std;

ExerciseEntry::ExerciseEntry(int m, int d, int y, int mood, string n,
                             string activity, int duration)
    : WellnessEntry(m, d, y, mood, n),
      activityType(activity),
      durationMinutes(duration) {}

void ExerciseEntry::display() const
{
    cout << "[Exercise Entry]" << endl;

    // call base class display
    WellnessEntry::display();

    cout << "Activity: " << activityType << endl;
    cout << "Duration: " << durationMinutes << " minutes" << endl;
}