#include "main.h"

const int MAX = 100;
const int CURRENT_YEAR = 2024;

void listWorkersByExperience(Worker w[], int n, int years) {
    for (int i = 0; i < n; i++)
        if (CURRENT_YEAR - w[i].getStartYear() > years)
            w[i].display();
}

void listWorkersBySalary(Worker w[], int n, double minSalary) {
    for (int i = 0; i < n; i++)
        if (w[i].getSalary() > minSalary)
            w[i].display();
}

void listWorkersByPosition(Worker w[], int n, const string& pos) {
    for (int i = 0; i < n; i++)
        if (w[i].getPosition() == pos)
            w[i].display();
}

int main() {
    int n;
    Worker workers[MAX];

    cout << "--- Workers ---\nEnter number of workers: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nWorker #" << i + 1 << ":\n";
        workers[i].input();
    }

    int minYears;
    double minSalary;
    string position;

    cout << "\nEnter minimum experience (years): ";
    cin >> minYears;
    listWorkersByExperience(workers, n, minYears);

    cout << "\nEnter minimum salary: ";
    cin >> minSalary;
    listWorkersBySalary(workers, n, minSalary);

    cout << "\nEnter position: ";
    cin >> position;
    listWorkersByPosition(workers, n, position);

    return 0;
}
