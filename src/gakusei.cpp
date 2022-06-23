#include "../headers/gakusei.h"

Gakusei::Gakusei() : name("none"), grade('n'), gpa(0.0), year(0), age(0) {
    std::cerr << "Set the student's parameteres, please";
}

// 'c' stands for "constructor"
Gakusei::Gakusei(std::string cname, double cgpa, int cyear, int cage) {
    name = cname;
    gpa = cgpa;
    year = cyear;
    age = cage;
}

std::string Gakusei::get_name() { return name; }
char Gakusei::get_grade() { return grade;}
double Gakusei::get_gpa() { return gpa; }
int Gakusei::get_year() { return year; }
int Gakusei::get_age() { return age; }

// 's' stands for "set"
void Gakusei::set_name(std::string sname) { name = sname; }
void Gakusei::set_grade(char sgrade) { grade = sgrade; }
void Gakusei::set_gpa(double sgpa) { gpa = sgpa; }
void Gakusei::set_year(int syear) { year = syear; }
void Gakusei::set_age(int sage) { age = sage; }

void Gakusei::show_info() {
    std::cout << "This student's info:\n"
        << get_name() << std::endl
        << get_year() << std::endl
        << get_gpa()  << std::endl
        << get_age() << std::endl << std::endl;
}

char Gakusei::calc_grade(double calgpa) { // 'cal' stands for "calculate"
    if(calgpa <= 4.0 && calgpa > 3.0) { grade = 'A'; }
    else if(calgpa <= 3.0 && calgpa > 2.0) { grade = 'B'; }
    else if(calgpa <= 2.0 && calgpa > 1.0) { grade = 'C'; }
    else if(calgpa <= 1.0 && calgpa >= 0) { grade = 'F'; }
    else throw "Invalid gpa entered!";

    return grade;
}
    