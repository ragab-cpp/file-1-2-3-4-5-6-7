#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ��� ��� students.txt �� ��� ������� (append) ��� �� ��� ��� �������� ������� ��� ����� ���� ����
    ofstream outFile("students.txt", ios::app);

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char choice;
    char name[20];
    int id;
    float grade;

    do {
        
        cout << "Enter student name: ";
        cin >> ws;
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        outFile << name << ", " << id << ", " << grade << " $" << endl;

        cout << "Do you want to add more records? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    outFile.close();
    cout << "Records saved successfully to students.txt" << endl;

    return 0;
}
