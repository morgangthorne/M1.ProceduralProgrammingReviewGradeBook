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
    string filename;

    OpenFile();

    
}

int OpenFile() {
    vector<string> names;
    vector<int> grades;
    
    string name;
    string line;

    int grade;
    
    string filename = "StudentGrades.txt";

    ifstream inFile;

    inFile.open(filename);

    if (inFile.fail()) {
        cout << "Error opening file.\n";
        return 1;
    }

    getline(inFile, line);

        names.push_back(name);
        grades.push_back(grade);
    


    inFile.close();
}