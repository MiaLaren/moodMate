
#ifndef ENTRYDATE_H
#define ENTRYDATE_H

class EntryDate
{
private:
    int month;
    int day;
    int year;

public:
    EntryDate(int m, int d, int y);
    void display() const;
};

#endif