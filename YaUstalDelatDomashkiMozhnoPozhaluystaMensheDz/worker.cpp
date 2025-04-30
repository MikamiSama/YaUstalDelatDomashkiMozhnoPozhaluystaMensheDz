#include "main.h"

Worker::Worker(const string& n, const string& p, int y, double s)
    : name(n), position(p), startYear(y), salary(s) {
}

void Worker::input() {
    cout << "Name: ";
    cin >> name;
    cout << "Position: ";
    cin >> position;
    cout << "Start year: ";
    cin >> startYear;
    cout << "Salary: ";
    cin >> salary;
}

void Worker::display() const {
    cout << "Name: " << name
        << ", Position: " << position
        << ", Start year: " << startYear
        << ", Salary: " << salary << "\n";
}

string Worker::getPosition() const { return position; }
int Worker::getStartYear() const { return startYear; }
double Worker::getSalary() const { return salary; }
