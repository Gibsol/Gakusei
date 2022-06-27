// A brief example of working with this library

#include <vector>
#include "../src/student.cpp"

using namespace Gakusei;

int main() {
    std::vector<Student> grads;
    auto* st1 = new Student("john", 2.0, 2020, 45);

    if(st1->get_gpa() >=3.0) { grads.push_back(*st1); }
    st1->calc_grade(st1->get_gpa());

    std::cout << st1->get_grade();

    delete st1;

    return 0;
}
