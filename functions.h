#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sys\stat.h>
#include <dirent.h>
#include<io.h>
#include <conio.h> //take getCh() from this library
using namespace std;

struct Course
{
    string StartDate, EndDate, ID, Name, TeacherName, Day1, Day2, Time1, Time2;
    int NumberOfCredits, MaxNumOfStudent;
};

struct Student
{
    string no, ID, LastName, FirstName, Username, Password, Gender, Email, Class;
};

struct Node
{
    Student student;
    Node *next;
};

void start();
void ExtractStudentInfoFromCSVFileAndTurnToSLL(Node *&pHead);
void openCSVFileFromUserInput();
void loginSection();
void ExtractStudentInfoFromCSVFileAndTurnToSLL(Node *&pHead);
bool validateUser(string username, string password, Node *pHead, Student &curStudent);
void StudentLoginSection(Node *pStudentSLL);
void AcademicStaffLoginSection();
void displayStudentInfo(Student curStudent, Node *pStudentSLL);
void writeCSVFile(Node *pStudentSLL);
void updatePasswordChangeToCSVFile(Student curStudent, Node *&pStudentSLL);
void changePassword(Student &curStudent);
void createNewDirectory();
void ListAllFileNames(string address);
string removeType(string s);
void listOFYear(string initStrPath);
void DeleteFileIfExist(const char* path);
