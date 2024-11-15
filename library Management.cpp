
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store book details
struct Book {
    int id;
    string title;
    string author;
};

// Structure to store member details
struct Member {
    int memberId;
    string name;
    string email;
};

// Library Management Class
class Library {
private:
    vector<Book> books;
    vector<Member> members;
    int bookIdCounter = 1;
    int memberIdCounter = 1;

public:
    // Add a new book
    void addBook(string title, string author) {
        Book book = {bookIdCounter++, title, author};
        books.push_back(book);
        cout << "Book added successfully! ID: " << book.id << endl;
    }

    // Display all books
    void displayBooks() {
        if (books.empty()) {
            cout << "No books available in the library." << endl;
            return;
        }
        cout << "Books in Library:" << endl;
        for (const auto& book : books) {
            cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << endl;
        }
    }

    // Remove a book by ID
    void removeBook(int id) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->id == id) {
                books.erase(it);
                cout << "Book with ID " << id << " removed successfully!" << endl;
                return;
            }
        }
        cout << "Book with ID " << id << " not found!" << endl;
    }

    // Register a new member
    void registerMember(string name, string email) {
        Member member = {memberIdCounter++, name, email};
        members.push_back(member);
        cout << "Member registered successfully! ID: " << member.memberId << endl;
    }

    // Display all members
    void displayMembers() {
        if (members.empty()) {
            cout << "No members registered yet." << endl;
            return;
        }
        cout << "Library Members:" << endl;
        for (const auto& member : members) {
            cout << "ID: " << member.memberId << ", Name: " << member.name << ", Email: " << member.email << endl;
        }
    }
};

// Main function
int main() {
    Library library;
    int choice;

    while (true) {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Remove Book" << endl;
        cout << "4. Register Member" << endl;
        cout << "5. Display Members" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string title, author;
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter book author: ";
                getline(cin, author);
                library.addBook(title, author);
                break;
            }
            case 2:
                library.displayBooks();
                break;
            case 3: {
                int id;
                cout << "Enter book ID to remove: ";
                cin >> id;
                library.removeBook(id);
                break;
            }
            case 4: {
                string name, email;
                cout << "Enter member name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter member email: ";
                getline(cin, email);
                library.registerMember(name, email);
                break;
            }
            case 5:
                library.displayMembers();
                break;
            case 6:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
