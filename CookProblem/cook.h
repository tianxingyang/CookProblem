#pragma once

#include <string>
#include <vector>
#include <map>

#include "ability.h"

class Cook
{
public:
    Cook();
    Cook(std::string name, std::vector<Ability> collect_ability, std::vector<Ability> cook_ability) 
        : name_(name), collect_ability_(collect_ability), cook_ability_(cook_ability) {}
    ~Cook();

    void Init();

private:
    std::string name_;
    std::vector<Ability> collect_ability_;
    std::vector<Ability> cook_ability_;

    std::map<std::string, int> collect_ability_name_to_val_map;
    std::map<std::string, int> cook_ability_name_to_val_map;
};
