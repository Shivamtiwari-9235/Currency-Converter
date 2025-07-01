#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

vector<Contact> contacts;

void addContact() {
    Contact c;
    cout << "Enter name: ";
    getline(cin, c.name);
    cout << "Enter phone number: ";
    getline(cin, c.phone);
    contacts.push_back(c);
    cout << "Contact added!\n";
}

void displayContacts() {
    if (contacts.empty()) {
        cout << "No contacts found.\n";
        return;
    }
    cout << "Contacts List:\n";
    for (int i = 0; i < contacts.size(); ++i) {
        cout << i + 1 << ". " << contacts[i].name << " - " << contacts[i].phone << "\n";
    }
}

void searchContact() {
    cout << "Enter name to search: ";
    string searchName;
    getline(cin, searchName);
    bool found = false;
    for (const auto& c : contacts) {
        if (c.name == searchName) {
            cout << "Found: " << c.name << " - " << c.phone << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found.\n";
    }
}

void deleteContact() {
    cout << "Enter name to delete: ";
    string delName;
    getline(cin, delName);
    for (int i = 0; i < contacts.size(); ++i) {
        if (contacts[i].name == delName) {
            contacts.erase(contacts.begin() + i);
            cout << "Contact deleted!\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

int main() {
    while (true) {
        cout << "Contact Management System\n";
        cout << "1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Delete Contact\n5. Exit\n";
        cout << "Enter your choice: ";
        string choice;
        getline(cin, choice);

        if (choice == "1") {
            addContact();
        } else if (choice == "2") {
            displayContacts();
        } else if (choice == "3") {
            searchContact();
        } else if (choice == "4") {
            deleteContact();
        } else if (choice == "5") {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
