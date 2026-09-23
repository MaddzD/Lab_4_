#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variables required by Part I
    string foodName;
    char itemCode;
    int quantity;
    double unitPrice;
    char isMember;

    // 1. Get Information from User
    cout << "Enter Food Name: ";
    getline(cin, foodName);

    cout << "Enter Item Code: ";
    cin >> itemCode;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    cout << "Is Member (y/n): ";
    cin >> isMember;

    double subtotal = quantity * unitPrice;

    // 2. Format the Receipt
    cout << "\n--- RECEIPT ---" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Item"
         << right << setw(10) << "Code"
         << setw(10) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;

    cout << left << setw(15) << foodName
         << right << setw(10) << itemCode
         << setw(10) << quantity
         << setw(10) << unitPrice
         << setw(10) << subtotal << endl;

    return 0;
}
