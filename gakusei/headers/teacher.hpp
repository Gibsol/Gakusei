#ifndef SENSEI_HPP 
#define SENSEI_HPP 


#include <iostream>

namespace Gakusei {

class Teacher { 
private:
    std::string name;
    std::string subject;
    int age;
    int experience;
    double salary;
public:
    Teacher();
    Teacher(std::string, std::string, int, int, double);
    
    std::string get_name();
    std::string get_subject();
    int get_age();
    int get_experience();
    double get_salary();

    void get_name(std::string);
    void set_subject(std::string);
    void get_age(int);
    void get_experience(int);
    void get_salary(double);
};

}



#endif
