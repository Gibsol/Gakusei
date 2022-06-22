#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <iostream>

class StudentManager {
private:
    std::string name;
    int year;
    int gpa;
    int age;
public:
    StudentManager();
    StudentManager(std::string, int, int, int);

    void set_name(std::string);
    void set_year(int);
    void set_gpa(int);
    void set_age(int);
};


#endif
