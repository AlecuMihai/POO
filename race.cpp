#include "race.h"

Race::Race() = default;

Race::Race(const std::string& name, const std::string& proficiency, int health_points, int mana_points):
        _name(name),
        _proficiency(proficiency),
        _health_points(health_points),
        _mana_points(mana_points){ }

std::string Race::get_race_name() const {
    return this -> _name;
}

std::string Race::get_race_proficiency() {
    return this -> _proficiency;
}

int Race::get_health_points() const {
    return this -> _health_points;
}

int Race::get_mana_points() const {
    return this -> _mana_points;
}

Human::Human(): Race("Human", "Swords", 100, 100){}

Orc::Orc(): Race("Orc", "Maces", 150, 25) {}

Elf::Elf(): Race("Elf", "Bows", 75, 125) {}
