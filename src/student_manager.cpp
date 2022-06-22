#include "student_manager.h"

StudentManager::StudentManager() : name("none"), year(0), gpa(0), age(0) {
    std::cerr << "Set the student's parameteres, please";
}

// 'c' stands for "constructor"
StudentManager::StudentManager(std::string cname, int cyear, int cgpa, int cage) {
    name = cname;
    year = cyear;
    gpa = cgpa;
    age = cage;
}

// 's' stands for "set"
void StudentManager::set_name(std::string sname) { name = sname; }
void StudentManager::set_year(int syear) { year = syear; }
void StudentManager::set_gpa(int sgpa) { gpa = sgpa; }
void StudentManager::set_age(int sage) { age = sage; }
