#ifndef OTHER_WORKERS_HPP 
#define OTHER_WORKERS_HPP 


#include <iostream>

namespace gakusei {
class Other {
private:
    std::string name;
    int age;
    double salary;
public:
    Other();
    Other(std::string, int, int, double);
    ~Other();

    std::string get_name();
    int get_age();
    double get_salary();

    void set_name(std::string);
    void set_age(int);
    void set_salary(double);
};
}


#endif