// Name: Mia Santos
// Date: 4/12/26
// File: main.cpp
// Purpose: Updated Driver for MoodMate

#include <iostream>
#include "wellnessentry.h"
#include "exerciseentry.h"
#include "sleepentry.h"
using namespace std;

int main()
{
    WellnessEntry* log[3];

    log[0] = new WellnessEntry(4, 7, 2025, 7,
        "Felt pretty good today, slept well.");

    log[1] = new ExerciseEntry(4, 8, 2025, 9,
        "Great workout session.",
        "Running",
        45);

    log[2] = new SleepEntry(4, 9, 2025, 6,
        "Woke up a few times.",
        6,
        "Fair");

    cout << "--- Wellness Log ---" << endl << endl;

    for (int i = 0; i < 3; i++)
    {
        log[i]->display();
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete log[i];
    }

    return 0;
}