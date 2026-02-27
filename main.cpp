#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Week 1: Data model for an appliance
struct Appliance {
    string name;        // appliance name
    double powerW;      // power in watts
    double hoursPerDay; // usage hours per day
};

int menu() {
    cout << "\n==============================\n";
    cout << "   Electrical Load Monitoring\n";
    cout << "==============================\n";
    cout << "1. Register appliance (coming)\n";
    cout << "2. View all appliances (coming)\n";
    cout << "0. Exit\n";
    cout << "Choose: ";

    int choice;
    cin >> choice;
    return choice;
}

int main() {
    vector<Appliance> appliances; // Week 1: store appliances in memory

    while (true) {
        int choice = menu();

        if (choice == 0) {
            cout << "Goodbye!\n";
            break;
        }

        cout << "Feature not added yet. Continue in Week 2.\n";
    }

    return 0;
}