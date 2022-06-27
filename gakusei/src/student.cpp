#include "../headers/student.hpp"

namespace Gakusei {

Student::Student() : name("none"), grade('n'), gpa(0.0), year(0), age(0) {
    std::cerr << "Set the student's parameteres, please";
}

// 'c' stands for "constructor"
Student::Student(std::string cname, double cgpa, int cyear, int cage) {
    name = cname;
    gpa = cgpa;
    year = cyear;
    age = cage;
}

std::string Student::get_name() { return name; }
char Student::get_grade() { return grade;}
double Student::get_gpa() { return gpa; }
int Student::get_year() { return year; }
int Student::get_age() { return age; }

// 's' stands for "set"
void Student::set_name(std::string sname) { name = sname; }
void Student::set_grade(char sgrade) { grade = sgrade; }
void Student::set_gpa(double sgpa) { gpa = sgpa; }
void Student::set_year(int syear) { year = syear; }
void Student::set_age(int sage) { age = sage; }

void Student::show_info() {
    std::cout << "This student's info:\n"
        << get_name() << std::endl
        << get_year() << std::endl
        << get_gpa()  << std::endl
        << get_age() << std::endl << std::endl;
}

char Student::calc_grade(double calgpa) { // 'cal' stands for "calculate"
    if(calgpa <= 4.0 && calgpa > 3.0) { grade = 'A'; }
    else if(calgpa <= 3.0 && calgpa > 2.0) { grade = 'B'; }
    else if(calgpa <= 2.0 && calgpa > 1.0) { grade = 'C'; }
    else if(calgpa <= 1.0 && calgpa >= 0) { grade = 'F'; }
    else throw "Invalid gpa entered!";

    return grade;
}
    
}
