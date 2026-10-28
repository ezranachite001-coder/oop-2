
#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title, author;
    int copies;

public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter number of copies: ";
        cin >> copies;
        cin.ignore();
    }

    void borrowBook()
    {
        string bookTitle;

        cout << "Enter title of book to borrow: ";
        getline(cin, bookTitle);

        if (bookTitle == title)
        {
            if (copies > 0)
            {
                copies--;
                cout << "Book borrowed successfully!" << endl;
            }
            else
            {
                cout << "No copies available!" << endl;
            }
        }
        else
        {
            cout << "Book not found!" << endl;
        }
    }

    void displayDetails()
    {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copies << endl;
    }
};

int main()
{
    Book b1;

    b1.inputDetails();
    b1.borrowBook();
    b1.displayDetails();

    return 0;
}
