// Problem_1
//
// #include <iostream>
// using namespace std;
//
// float calculateTotal(int price, int quantity) {
//     return price * quantity;
// }
//
// int main() {
//     int choice, quantity;
//     float total = 0;
//     char continueOrdering;
//
//     do {
//         cout << "Menu:\n";
//         cout << "1. Pizza - $10\n";
//         cout << "2. Burger - $8\n";
//         cout << "3. Salad - $5\n";
//         cout << "Enter your choice (1-3): ";
//         cin >> choice;
//         cout << "Enter quantity: ";
//         cin >> quantity;
//
//         switch (choice) {
//             case 1:
//                 total = calculateTotal(10, quantity);
//                 break;
//             case 2:
//                 total = calculateTotal(8, quantity);
//                 break;
//             case 3:
//                 total = calculateTotal(5, quantity);
//                 break;
//             default:
//                 cout << "Invalid choice.\n";
//                 total = 0;
//         }
//
//         cout << "Total Bill: $" << total << endl;
//
//         cout << "Do you want to order again? (y/n): ";
//         cin >> continueOrdering;
//     } while (continueOrdering == 'y'  continueOrdering == 'Y');
//
//     return 0;
// }
//
// Problem_2
//
// #include <iostream>
// using namespace std;
//
// int calculateFee(int hours) {
//     if (hours <= 2)
//         return 0;
//     else if (hours <= 5)
//         return (hours - 2) * 2;
//     else
//         return (3 * 2) + (hours - 5) * 5;
// }
//
// int main() {
//     int hours;
//     char anotherUser;
//
//     do {
//         cout << "Enter number of hours parked: ";
//         cin >> hours;
//         int fee = calculateFee(hours);
//         cout << "Parking Fee: $" << fee << endl;
//
//         cout << "Process another user? (y/n): ";
//         cin >> anotherUser;
//     } while (anotherUser == 'y'  anotherUser == 'Y');
//
//     return 0;
// }
//
//
// Problem_3
//
// #include <iostream>
// using namespace std;
//
// float balance = 500;
//
// void deposit(float amount) {
//     balance += amount;
// }
//
// void withdraw(float amount) {
//     if (amount > balance) {
//         cout << "Insufficient Funds.\n";
//     } else {
//         balance -= amount;
//     }
// }
//
// void checkBalance() {
//     cout << "Current Balance: $" << balance << endl;
// }
//
// int main() {
//     int option;
//     float amount;
//     char continueTransaction;
//
//     do {
//         cout << "\nBank Menu:\n";
//         cout << "1. Deposit\n";
//         cout << "2. Withdraw\n";
//         cout << "3. Check Balance\n";
//         cout << "Enter your option (1-3): ";
//         cin >> option;
//
//         switch (option) {
//             case 1:
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 deposit(amount);
//                 break;
//             case 2:
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 withdraw(amount);
//                 break;
//             case 3:
//                 checkBalance();
//                 break;
//             default:
//                 cout << "Invalid option.\n";
//         }
// cout << "Do you want another transaction? (y/n): ";
//         cin >> continueTransaction;
//     } while (continueTransaction == 'y'  continueTransaction == 'Y');
//
//     return 0;
// }
//
//
// Problem_4
//
// #include <iostream>
// using namespace std;
//
// float calculateCost(int price, int tickets) {
//     return price * tickets;
// }
//
// int main() {
//     int choice, tickets;
//     float total;
//     char continueBooking;
//
//     do {
//         cout << "Movies:\n";
//         cout << "1. Movie A - $8\n";
//         cout << "2. Movie B - $10\n";
//         cout << "3. Movie C - $12\n";
//         cout << "Select a movie (1-3): ";
//         cin >> choice;
//         cout << "Enter number of tickets: ";
//         cin >> tickets;
//
//         switch (choice) {
//             case 1:
//                 total = calculateCost(8, tickets);
//                 break;
//             case 2:
//                 total = calculateCost(10, tickets);
//                 break;
//             case 3:
//                 total = calculateCost(12, tickets);
//                 break;
//             default:
//                 cout << "Invalid movie choice.\n";
//                 total = 0;
//         }
//
//         cout << "Total Cost: $" << total << endl;
//
//         cout << "Do you want to book another movie? (y/n): ";
//         cin >> continueBooking;
//     } while (continueBooking == 'y'  continueBooking == 'Y');
//
//     return 0;
// }
//
//
// Problem_5
//
// #include <iostream>
// using namespace std;
//
// float calculateFare(int price, int tickets) {
//     return price * tickets;
// }
//
// int main() {
//     string startCity, destinationCity;
//     int trainChoice, tickets;
//     float totalFare;
//     char continueBooking;
//
//     do {
//         cout << "Enter starting city: ";
//         cin >> startCity;
//         cout << "Enter destination city: ";
//         cin >> destinationCity;
//
//         cout << "Train Options:\n";
//         cout << "1. Train X - $15\n";
//         cout << "2. Train Y - $20\n";
//         cout << "3. Train Z - $25\n";
//         cout << "Select a train (1-3): ";
//         cin >> trainChoice;
//         cout << "Enter number of tickets: ";
//         cin >> tickets;
//
//         switch (trainChoice) {
//             case 1:
//                 totalFare = calculateFare(15, tickets);
//                 break;
//             case 2:
//                 totalFare = calculateFare(20, tickets);
//                 break;
//             case 3:
//                 totalFare = calculateFare(25, tickets);
//                 break;
//             default:
//                 cout << "Invalid train choice.\n";
//                 totalFare = 0;
//         }
//
//         cout << "Total Fare: $" << totalFare << endl;
//
//         cout << "Do you want to book another train? (y/n): ";
//         cin >> continueBooking;
//     } while (continueBooking == 'y'  continueBooking == 'Y');
//
//     return 0;
// }
//
// Problem_6
//
// #include <iostream>
// #include <cctype>
// using namespace std;
//
// bool checkPasswordStrength(string password) {
//     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
//     string specialChars = "!@#$%";
//
//     if (password.length() < 8)
//         return false;
//
//     for (int i = 0; i < password.length(); i++) {
//         if (isupper(password[i]))
//             hasUpper = true;
//         else if (islower(password[i]))
//             hasLower = true;
//         else if (isdigit(password[i]))
//             hasDigit = true;
//         else if (specialChars.find(password[i]) != string::npos)
//             hasSpecial = true;
//     }
//
//     return hasUpper && hasLower && hasDigit && hasSpecial;
// }
//
// int main() {
//     string password;
//
//     cout << "Enter password: ";
//     cin >> password;
//
//     if (checkPasswordStrength(password))
//         cout << "Strong Password" << endl;
//     else
//         cout << "Weak Password" << endl;
//
//     return 0;
// }
//
//
// Problem_7
//
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0)  (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (month < 1  month > 12  day < 1)
        return false;

    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (isLeapYear(year) && month == 2)
        return day <= 29;
    else
        return day <= daysInMonth[month];
}
void nextDate(int &day, int &month, int &year) {
    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (isLeapYear(year))
        daysInMonth[2] = 29;

    day++;

    if (day > daysInMonth[month]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

int main() {
    int day, month, year;
    char continueChecking;

    do {
        cout << "Enter date (day month year): ";
        cin >> day >> month >> year;

        if (isValidDate(day, month, year)) {
            nextDate(day, month, year);
            cout << "Next Date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid Date.\n";
        }

        cout << "Do you want to check another date? (y/n): ";
        cin >> continueChecking;
    } while (continueChecking == 'y' || continueChecking == 'Y');

    return 0;
}

