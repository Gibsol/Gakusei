#ifndef SENSEI_HPP 
#define SENSEI_HPP 


#include <iostream>

namespace gakusei {

class Teacher { 
private:
    std::string name;
    std::string education;
    int age;
    double salary;
public:
    Teacher();
    Teacher(std::string, std::string, int, double);
    ~Teacher();
    
    std::string get_name();
    std::string get_education();
    int get_age();
    double get_salary();

    void set_name(std::string);
    void set_education(std::string);
    void set_age(int);
    void set_salary(double);
};

}


#endif
