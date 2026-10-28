
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string student_name;
    int admission_number, fee_balance;

public:
    void inputDetails()
    {
        cout << "Enter Student name: ";
        getline(cin, student_name);

        cout << "Enter admission number: ";
        cin >> admission_number;

        cout << "Enter fee balance: ";
        cin >> fee_balance;
    }

    void makePayment()
    {
        int payment_done;

        cout << "Enter amount you wish to pay: ";
        cin >> payment_done;

        if (payment_done > 0 && payment_done <= fee_balance)
        {
            fee_balance -= payment_done;
            cout << "Payment successful!" << endl;
        }
        else
        {
            cout << "Invalid amount!" << endl;
        }
    }

    void displayDetails()
    {
        cout << "\nStudent Name: " << student_name << endl;
        cout << "Admission Number: " << admission_number << endl;
        cout << "Remaining Balance: " << fee_balance << endl;
    }
};

int main()
{
    Student s1;

    s1.inputDetails();
    s1.makePayment();
    s1.displayDetails();

    return 0;
}
