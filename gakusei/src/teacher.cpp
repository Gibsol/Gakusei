#include "../headers/teacher.hpp"

namespace gakusei {
Teacher::Teacher() : 
    name("none"),
    education("none"),
    age(0),
    salary(0.0)
{}
Teacher::Teacher(std::string cname, std::string ceducation, int cage, double csalary) : 
    name(cname),
    education(ceducation),
    age(cage),
    salary(csalary)
{}

Teacher::~Teacher() {}

std::string Teacher::get_name() { return name; }
std::string Teacher::get_education() { return education; }
int Teacher::get_age() { return age; }
double Teacher::get_salary() { return salary; }

// 's' stands for "set"
void Teacher::set_name(std::string sname) { name = sname; }
void Teacher::set_education(std::string seducation) { education = seducation; }
void Teacher::set_age(int sage) { age = sage; }
void Teacher::set_salary(double ssalary){ salary = ssalary; }
}