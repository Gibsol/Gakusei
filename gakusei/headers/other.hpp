#ifndef OTHER_WORKERS_HPP 
#define OTHER_WORKERS_HPP 


#include <iostream>

class Other {
private:
    std::string name;
    int experience;
    int age;
    double salary;
public:
    Other();
    Other(std::string, int, int, double);

    std::string get_name();
    int get_experience();
    int get_age();
    double get_salary();

    void set_name(std::string);
    void set_experience(int);
    void set_age(int);
    void set_salary(double);
};



#endif