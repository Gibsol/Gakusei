#include "student_manager.h"

StudentManager::StudentManager() : name("none"), grade('n'), gpa(0.0), year(0), age(0) {
    std::cerr << "Set the student's parameteres, please";
}

// 'c' stands for "constructor"
StudentManager::StudentManager(std::string cname, double cgpa, int cyear, int cage) {
    name = cname;
    gpa = cgpa;
    year = cyear;
    age = cage;
}

std::string StudentManager::get_name() { return name; }
char StudentManager::get_grade() { return grade;}
double StudentManager::get_gpa() { return gpa; }
int StudentManager::get_year() { return year; }
int StudentManager::get_age() { return age; }

// 's' stands for "set"
void StudentManager::set_name(std::string sname) { name = sname; }
void StudentManager::set_grade(char sgrade) { grade = sgrade; }
void StudentManager::set_gpa(double sgpa) { gpa = sgpa; }
void StudentManager::set_year(int syear) { year = syear; }
void StudentManager::set_age(int sage) { age = sage; }

void StudentManager::show_info() {
    std::cout << "This student's info:\n"
        << get_name() << std::endl
        << get_year() << std::endl
        << get_gpa()  << std::endl
        << get_age() << std::endl << std::endl;
}

char StudentManager::calc_grade(double calgpa) { // 'cal' stands for "calculate"
    if(calgpa <= 4.0 && calgpa > 3.0) { grade = 'A'; }
    else if(calgpa <= 3.0 && calgpa > 2.0) { grade = 'B'; }
    else if(calgpa <= 2.0 && calgpa > 1.0) { grade = 'C'; }
    else if(calgpa <= 1.0 && calgpa >= 0) { grade = 'F'; }
    else throw "Invalid gpa entered!";

    return grade;
}