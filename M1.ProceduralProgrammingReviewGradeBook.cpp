// M1.ProceduralProgrammingReviewGradeBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

int OpenFile(string filename);
void ReadThroughFile(string filename);

//Global Const for number of tests
const int AmountOfTestsPerStudent = 5;

int main()
{
    const int MaxStudents = 100;
    
    string filename = "StudentGrades.txt";
    string Names[MaxStudents];
    
    int Score[MaxStudents][AmountOfTestsPerStudent];
    int NumberOfStudents = 0;
    double Averages[MaxStudents];
 
    OpenFile(filename);

    ReadThroughFile(filename);
}

int OpenFile(string filename) {
    ifstream inFile;
    inFile.open(filename);

    if (inFile.fail()) {
        cout << "Error opening file.\n";
        return 1;
    }
    inFile.close();
}

void ReadThroughFile(string filename) {
    vector<string> names;
    vector<int> grades;

    string name;
    string line;

    int grade;
    
    ifstream inFile;
    inFile.open(filename);

    while (getline(inFile, line)) {
        stringstream ss(line);
        ss >> name;

        for (int i = 0; i < AmountOfTestsPerStudent; i++) {
            stringstream ss(line);
            ss >> grade;
        }
    }

}