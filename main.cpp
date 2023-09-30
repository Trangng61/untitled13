#include <iostream>

using namespace std;

int leapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void dayInMonth(int month, int year) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;
        case 4:
        case 6:
        case 9 :
        case 11:
            cout << "30 days";
            break;
        case 2:
            if (leapYear(year)) {
                cout << "29 days";
            } else {
                cout << "28 days";
            }
            break;
        default:
            cout << "Invalid month";
    }
}


int main() {
    int month;
    int year;
    do {
        cout << "Month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "Error";
        }
    } while (month < 1 || month > 12);
    do {
        cout << "Year (non negative):  ";
        cin >> year;
        if (year < 0) {
            cout << "Error";
        }
    } while (year < 0);

    dayInMonth(month, year);
    return 0;
}
