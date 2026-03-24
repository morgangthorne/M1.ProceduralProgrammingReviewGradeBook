// M1.ProceduralProgrammingReviewGradeBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int OpenFile();

int main()
{

    OpenFile();

    
}

int OpenFile() {
    string filename = "StudentGrades.txt";

    ifstream inFile;

    inFile.open(filename);

    if (inFile.fail()) {
        cout << "Error opening file.\n";
        return 1;
    }
}

void ReadThroughFile() {
    vector<string> names;
    vector<int> grades;

    string name;
    string line;

    int grade;
    
    ifstream inFile;

    getline(inFile, line);

    names.push_back(name);
    grades.push_back(grade);






}