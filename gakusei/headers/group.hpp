#ifndef GROUP_HPP
#define GROUP_HPP

#include <iostream>
#include <vector>

namespace gakusei {
class Group{
private:
    std::string group_name;
    static std::vector<int> n_people; // number of people in the group
    std::vector<std::string> people;
public:
    Group();
    Group(std::string);

    ~Group();

    std::string get_group_name();
    int get_n_people(); 
    std::vector<std::string> get_people();

    void set_group_name(std::string);
    void add_people(std::string);
};
}


#endif
