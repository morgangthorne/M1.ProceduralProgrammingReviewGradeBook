// M1.ProceduralProgrammingReviewGradeBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//Global Const for number of tests
const int AmountOfTestsPerStudent = 5;

//Function Prototypes
int OpenFile(string filename);
void ReadThroughFile(string filename, string Names[], int Score[][AmountOfTestsPerStudent], int &NumberOfStudents);

int main()
{
    const int MaxStudents = 100;
    
    string filename = "StudentGrades.txt";
    string Names[MaxStudents];
    
    int Score[MaxStudents][AmountOfTestsPerStudent];
    int NumberOfStudents = 0;
    double Averages[MaxStudents];
 
    if (OpenFile(filename) == 1) {
        return 1;
    }

    ReadThroughFile(filename, Names, Score, NumberOfStudents);
}

int OpenFile(string filename) {
    ifstream inFile;
    inFile.open(filename);

    if (inFile.fail()) {
        cout << "Error opening file.\n";
        return 1;
    }
    inFile.close();

    return 0;
}

void ReadThroughFile(string filename, string Names[], int Score[][AmountOfTestsPerStudent], int& NumberOfStudents) {
    string line;

    ifstream inFile;
    inFile.open(filename);

    


}