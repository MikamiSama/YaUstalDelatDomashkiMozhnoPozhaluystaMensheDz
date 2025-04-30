#ifndef WORKER_H
#define WORKER_H

#include <iostream>
using namespace std;

class Worker {
private:
    string name, position;
    int startYear;
    double salary;

public:
    explicit Worker(const string& n = "", const string& p = "", int y = 0, double s = 0.0);

    void input();
    void display() const;

    string getPosition() const;
    int getStartYear() const;
    double getSalary() const;
};

#endif
#pragma once
