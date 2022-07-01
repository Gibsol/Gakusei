#include "../headers/group.hpp"

namespace gakusei {
Group::Group() :
    group_name("none")
{}
Group::Group(std::string cgroup_name) :
    group_name(cgroup_name)
{}

Group::~Group()
{}

std::string Group::get_group_name() { return group_name; }

int Group::get_n_people() { return n_people.size(); }

void Group::set_group_name(std::string sgroup_name) { group_name = sgroup_name; }

void Group::add_people(std::string s_people) {
    people.push_back(s_people);
    int i;
    n_people.push_back(i++);
}
}
