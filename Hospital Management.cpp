//
// Created by Pratik Giri on 16-11-2024.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to hold patient details
struct Patient {
    int id;
    string name;
    int age;
    string gender;
    string disease;
};

// Class for Hospital Management
class Hospital {
private:
    vector<Patient> patients;
    int patientID;

public:
    Hospital() : patientID(1) {} // Constructor initializing ID

    // Add a new patient
    void addPatient() {
        Patient p;
        p.id = patientID++;
        cout << "Enter Patient Name: ";
        cin.ignore();
        getline(cin, p.name);
        cout << "Enter Age: ";
        cin >> p.age;
        cout << "Enter Gender: ";
        cin.ignore();
        getline(cin, p.gender);
        cout << "Enter Disease: ";
        getline(cin, p.disease);

        patients.push_back(p);
        cout << "Patient added successfully! ID: " << p.id << endl;
    }

    // View all patients
    void viewPatients() {
        if (patients.empty()) {
            cout << "No patients found.\n";
            return;
        }
        cout << "Patient List:\n";
        for (const auto& p : patients) {
            cout << "ID: " << p.id
                 << ", Name: " << p.name
                 << ", Age: " << p.age
                 << ", Gender: " << p.gender
                 << ", Disease: " << p.disease << endl;
        }
    }

    // Search patient by ID
    void searchPatient() {
        int id;
        cout << "Enter Patient ID to search: ";
        cin >> id;

        for (const auto& p : patients) {
            if (p.id == id) {
                cout << "Patient Found: \n";
                cout << "ID: " << p.id
                     << ", Name: " << p.name
                     << ", Age: " << p.age
                     << ", Gender: " << p.gender
                     << ", Disease: " << p.disease << endl;
                return;
            }
        }
        cout << "Patient with ID " << id << " not found.\n";
    }

    // Delete a patient by ID
    void deletePatient() {
        int id;
        cout << "Enter Patient ID to delete: ";
        cin >> id;

        for (auto it = patients.begin(); it != patients.end(); ++it) {
            if (it->id == id) {
                patients.erase(it);
                cout << "Patient with ID " << id << " deleted successfully.\n";
                return;
            }
        }
        cout << "Patient with ID " << id << " not found.\n";
    }
};

// Main Menu
int main() {
    Hospital hospital;
    int choice;

    do {
        cout << "\n--- Hospital Management System ---\n";
        cout << "1. Add Patient\n";
        cout << "2. View Patients\n";
        cout << "3. Search Patient\n";
        cout << "4. Delete Patient\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hospital.addPatient();
                break;
            case 2:
                hospital.viewPatients();
                break;
            case 3:
                hospital.searchPatient();
                break;
            case 4:
                hospital.deletePatient();
                break;
            case 5:
                cout << "Exiting system...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
