// Name: Mia Santos
// Date: 4/12/26
// File: main.cpp
// Purpose: Driver for MoodMate

#include <iostream>
#include "wellnessentry.h"
#include "exerciseentry.h"
using namespace std;

int main()
{
    WellnessEntry e1(4, 7, 2025, 7, "Felt pretty good today, slept well.");

    ExerciseEntry e2(4, 8, 2025, 9,
                     "Great workout session.",
                     "Running",
                     45);

    cout << "--- Wellness Log ---" << endl << endl;

    e1.display();
    cout << endl;

    e2.display();

    return 0;
}