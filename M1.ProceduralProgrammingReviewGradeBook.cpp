// M1.ProceduralProgrammingReviewGradeBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int OpenFile();

int main()
{
    string filename;

    OpenFile();

    cout << "Hello World!\n";
}

int OpenFile() {
    string filename = "StudentGrades.txt";

    ifstream inFile;

    inFile.open(filename);

    if (inFile.fail()) {
        cout << "Error opening file.\n";
        return 1;
    }

    char c;
    while (inFile.get(c))
        cout << c;

    inFile.close();

}