#include "../gakusei/src/teacher.cpp"

class Math_teacher : public gakusei::Teacher {
private:

public:
    Math_teacher();
    ~Math_teacher();
};

Math_teacher::Math_teacher() {
    
}

Math_teacher::~Math_teacher() {
}


int main() {
    gakusei::Teacher a;

    std::cout << a.get_name();

    return 0;
}
