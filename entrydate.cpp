
#include "entrydate.h"
#include <iostream>
using namespace std;

EntryDate::EntryDate(int m, int d, int y)
    : month(m), day(d), year(y) {}

void EntryDate::display() const
{
    cout << "Date: " << month << "/" << day << "/" << year << endl;
}