#include "../gakusei/src/group.cpp" 

class SchoolBand : public gakusei::Group {
private:
    std::string genre;
public:
    std::string get_genre();

    void set_genre(std::string);
};

std::string SchoolBand::get_genre() { return genre; }
void SchoolBand::set_genre(std::string sgenre) { genre = sgenre; }

int main() {
    SchoolBand band;

    band.set_group_name("Metallica fork");
    band.set_genre("Metal");

    band.add_people("John");
    band.add_people("Ivan");
    band.add_people("Tatsuya");

    // band.get_n_people();

    return 0;
}