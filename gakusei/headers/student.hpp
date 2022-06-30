#ifndef GAKUSEI_HPP 
#define GAKUSEI_HPP 


#include <iostream>

namespace gakusei {

class Student {
private:
    std::string name;
    char grade;
    double gpa;
    int year; // The year of admission
    int age;
public:
    Student();
    Student(std::string, double, int, int);

    std::string get_name();
    char get_grade();
    double get_gpa();
    int get_year();
    int get_age();

    void set_name(std::string);
    void set_grade(char);
    void set_gpa(double);
    void set_year(int);
    void set_age(int);

    char calc_grade(double);
    void show_info();
};

}


#endif
