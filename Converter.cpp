#include <iostream>
using namespace std;

int main() {
    
    double inr;

    
    int choice;

    
    cout << "Welcome to Currency Converter!\n";
    cout << "Enter amount in Indian Rupees (INR): ";
    cin >> inr;

    
    cout << "\nChoose the currency to convert to:\n";
    cout << "1. US Dollar (USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. British Pound (GBP)\n";
    cout << "4. Japanese Yen (JPY)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    
    if (choice == 1) {
        cout << "Amount in USD = " << inr * 0.012 << endl;
    } else if (choice == 2) {
        cout << "Amount in EUR = " << inr * 0.011 << endl;
    } else if (choice == 3) {
        cout << "Amount in GBP = " << inr * 0.0095 << endl;
    } else if (choice == 4) {
        cout << "Amount in JPY = " << inr * 1.73 << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
