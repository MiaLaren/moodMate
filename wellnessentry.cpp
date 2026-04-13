
#include "wellnessentry.h"
#include <iostream>
using namespace std;

WellnessEntry::WellnessEntry(int m, int d, int y, int mood, string n)
    : date(m, d, y), moodScore(mood), note(n) {}

void WellnessEntry::display() const
{
    cout << "[General Entry]" << endl;
    date.display();
    cout << "Mood: " << moodScore << "/10" << endl;
    cout << "Note: " << note << endl;
}