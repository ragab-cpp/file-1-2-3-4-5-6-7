#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    ofstream out("grades.txt");

    int x;

    for(int i = 0; i < 5; i++)  
    {
        cout << "Enter grade: ";
        cin >> x;
        out << x << endl;
    }

    out.close();

    ifstream in("grades.txt"); 

    cout << "\nGrades before deletion:\n";

    while(in >> x) 
    {
        cout << x << endl; 
    }

    in.close();

    int del;

    cout << "\nEnter grade to delete: ";
    cin >> del; 

    in.open("grades.txt");
    ofstream temp("temp.txt");
    while(in >> x)
    {
        if(x != del)
        {
            temp << x << endl;
        }
    }

    in.close();
    temp.close();

    if(remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0)
    {
        cout << "\nGrade deleted successfully!\n";
    }
    else
    {
        cout << "\nError replacing file!\n";
    }

    in.open("grades.txt");

    cout << "\nGrades after deletion:\n";

    while(in >> x)
    {
        cout << x << endl;
    }

    in.close();

    return 0;
}
