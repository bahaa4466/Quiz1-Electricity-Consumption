/*
Full Name: [بهاء هيثم ابراهيم]
Group: [B1]
*/

#include <iostream>
using namespace std;

int main() {
    int consumption;
    int pricePerUnit;
    long totalBill;

    cout << "Enter electricity consumption (in kilowatts): ";
    cin >> consumption;

    if (consumption <= 100) {
        pricePerUnit = 250;
    } else if (consumption <= 300) {
        pricePerUnit = 300;
    } else {
        pricePerUnit = 350;
    }

    totalBill = static_cast<long>(consumption) * pricePerUnit;

    if (totalBill > 100000) {
        cout << "High consumption – Please reduce usage" << endl << endl;
    } else {
        cout << "Normal consumption" << endl << endl;
    }

    cout << "Electricity consumption: " << consumption << " units" << endl;
    cout << "Price per unit: " << pricePerUnit << " IQD" << endl;
    cout << "Total bill amount: " << totalBill << " IQD" << endl;

    return 0;
}