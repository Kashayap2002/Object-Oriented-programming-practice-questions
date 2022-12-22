#include <iostream>
using namespace std;

struct TIME
{
  int seconds;
  int minutes;
  int hours;
};

void computeTimeDifference(struct TIME, struct TIME, struct TIME *);
void computeTimeAddition(struct TIME, struct TIME, struct TIME *);

int main()
{
    struct TIME t1, t2, difference, add;

    cout << "Enter start time." << endl;
    cout << "Enter hours, minutes and seconds: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time." << endl;
    cout << "Enter hours, minutes and seconds: ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    computeTimeDifference(t1, t2, &difference);
    computeTimeAddition(t1, t2, &add);

    cout << endl << "TIME DIFFERENCE: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;
    
    cout << endl << "ADDITION: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    cout << " + " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " << add.hours << ":" << add.minutes << ":" << add.seconds;
    return 0;
}
void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference)
{
    
    if(t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }

    difference->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes-t2.minutes;
    difference->hours = t1.hours-t2.hours;
}
void computeTimeAddition(struct TIME t1, struct TIME t2, struct TIME *add)
{
    
    if(t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }

    add->seconds = t1.seconds + t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    add->minutes = t1.minutes+t2.minutes;
    add->hours = t1.hours+t2.hours;
}
