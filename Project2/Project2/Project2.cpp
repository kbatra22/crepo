#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book1 = "C++ Programming";
    string book2 = "Database Systems";
    string book3 = "Software Testing";

    int id1 = 101;
    int id2 = 102;
    int id3 = 103;

    bool borrowed1 = false;
    bool borrowed2 = false;
    bool borrowed3 = false;

    int choice;
    int id;
    int days;

    cout << "====================================" << endl;
    cout << "       LIBRARY MANAGEMENT SYSTEM    " << endl;
    cout << "====================================" << endl;

    cout << "\n1. Display Books" << endl;
    cout << "2. Borrow Book" << endl;
    cout << "3. Return Book" << endl;
    cout << "4. Calculate Overdue Fee" << endl;
    cout << "5. Add Book" << endl;
    cout << "6. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nAVAILABLE BOOKS" << endl;

        cout << id1 << " - " << book1;

        if (borrowed1 == true)
            cout << " - Borrowed";
        else
            cout << " - Available";

        cout << endl;

        cout << id2 << " - " << book2;

        if (borrowed2 == true)
            cout << " - Borrowed";
        else
            cout << " - Available";

        cout << endl;

        cout << id3 << " - " << book3;

        if (borrowed3 == true)
            cout << " - Borrowed";
        else
            cout << " - Available";

        cout << endl;
    }

    if (choice == 2)
    {
        cout << "\nEnter Book ID: ";
        cin >> id;

        if (id == 101)
        {
            borrowed1 = true;
            cout << "Book borrowed successfully." << endl;
        }

        if (id == 102)
        {
            borrowed2 = true;
            cout << "Book borrowed successfully." << endl;
        }

        if (id == 103)
        {
            borrowed3 = true;
            cout << "Book borrowed successfully." << endl;
        }
    }

    if (choice == 3)
    {
        cout << "\nEnter Book ID: ";
        cin >> id;

        if (id == 101)
        {
            borrowed1 = false;
            cout << "Book returned successfully." << endl;
        }

        if (id == 102)
        {
            borrowed2 = false;
            cout << "Book returned successfully." << endl;
        }

        if (id == 103)
        {
            borrowed3 = false;
            cout << "Book returned successfully." << endl;
        }
    }

    if (choice == 4)
    {
        cout << "\nEnter number of overdue days: ";
        cin >> days;

        double fee = days * 2;

        cout << "Overdue Fee = $" << fee << endl;
    }

    if (choice == 5)
    {
        string newbook;
        int newid;

        cout << "\nEnter new Book ID: ";
        cin >> newid;

        cout << "Enter Book Name: ";
        cin >> newbook;

        cout << "Book added successfully." << endl;
    }

    if (choice == 6)
    {
        cout << "\nThank you for using the Library Management System." << endl;
    }

    return 0;
}