#include <iostream>
#include <string>
#include <string_view>

struct Monster
{
    enum Type
    {
        ogre,
        dragon,
        orc,
        giantSpider,
        slime
    };
    std::string name;
    int health;
    Type type;
};

constexpr std::string_view getMonsterType(const Monster& monster)
{
    switch(monster.type)
    {
        case Monster::Type::ogre:
            return "Ogre";
        case Monster::Type::dragon:
            return "Dragon";
        case Monster::Type::orc:
            return "Orc";
        case Monster::Type::giantSpider:
            return "Giant Spider";
        case Monster::Type::slime:
            return "Slime";
    }
}

void printMonster(const Monster& monster)
{
    std::cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.health << " health." << std::endl;
}

int main()
{
    printMonster(Monster{ .type{Monster::ogre}, .name{"Torg"}, .health{145}});
    printMonster(Monster{ .type{Monster::slime}, .name{"Blurp"}, .health{23}});

    return 0;
}
