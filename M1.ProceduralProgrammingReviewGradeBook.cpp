// M1.ProceduralProgrammingReviewGradeBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//Global Const for number of tests
const int AmountOfTestsPerStudent = 5;

//Function Prototypes
int OpenFile(string filename);
void ReadThroughFile(string filename, string Names[], int Score[][AmountOfTestsPerStudent], int &NumberOfStudents);
void CalculateAverages(int score[][AmountOfTestsPerStudent], double Averages[], int NumberOfStudents);
char GetLetterGrade(double avg);
void PrintReport(string Names[], double Averages[], int NumberOfStudents);


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

    CalculateAverages(Score, Averages, NumberOfStudents);

    PrintReport(Names, Averages, NumberOfStudents);

    return 0;
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
    ifstream inFile(filename);

    while (inFile >> Names[NumberOfStudents]) {
        for (int i = 0; i < AmountOfTestsPerStudent; i++) {
            inFile >> Score[NumberOfStudents][i];
        }
        NumberOfStudents++;
    }
    inFile.close();
}

void CalculateAverages(int score[][AmountOfTestsPerStudent], double Averages[], int NumberOfStudents) {
    for (int i = 0; i < NumberOfStudents; i++) {
        int sum = 0;

        for (int j = 0; j < AmountOfTestsPerStudent; j++) {
            sum += score[i][j];
        }

        Averages[i] = (double)sum / AmountOfTestsPerStudent;
    }
}

char GetLetterGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

void PrintReport(string Names[], double Averages[], int NumberOfStudents) {
    cout << left << setw(15) << "Name" << setw(10) << "Average" << setw(10) << "Grade" << endl;
    cout << "-----------------------------------\n";

    for (int i = 0; i < NumberOfStudents; i++) {
        cout << left << setw(15) << Names[i] << setw(10) << fixed << setprecision(2) << Averages[i]
            << setw(10) << GetLetterGrade(Averages[i]) << endl;
    }
}