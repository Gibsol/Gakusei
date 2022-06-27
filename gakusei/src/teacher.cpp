#include "../headers/teacher.hpp"

namespace Gakusei {

Teacher::Teacher() : name("none"), subject("none"), age(0), experience(0), salary(0.0) {}
Teacher::Teacher(std::string cname, std::string csubject, int cage, int cexperience, double csalary) {
    name = cname;
    subject = csubject;
    age = cage;
    experience = cexperience;
    salary = csalary;
}

std::string Teacher::get_name() { return name; }
std::string Teacher::get_subject() { return subject; }
int Teacher::get_age() { return age; }
int Teacher::get_experience() { return experience; }
double Teacher::get_salary() { return salary; }

// 's' stands for "set"
void Teacher::get_name(std::string sname) { name = sname; }
void Teacher::set_subject(std::string ssubject) { subject = ssubject; }
void Teacher::get_age(int sage) { age = sage; }
void Teacher::get_experience(int sexperience) { experience = sexperience; }
void Teacher::get_salary(double ssalary){ salary = ssalary; }

}
