#pragma once

#include <string>
#include <vector>
#include <map>

#include "common/ability.h"

class Cook
{
public:
  Cook();
  Cook(std::string name, std::vector<Ability> collect_ability, std::vector<Ability> cook_ability) 
    : name_(name), collect_ability_(collect_ability), cook_ability_(cook_ability) {}
  ~Cook();

public:
  void SetAttr(std::string name, std::vector<Ability> collect_ability, std::vector<Ability> cook_ability);

private:
  std::string name_;
  std::vector<Ability> collect_ability_;
  std::vector<Ability>::iterator collect_ability_iter_;
  std::vector<Ability> cook_ability_;
  std::vector<Ability>::iterator cook_ability_iter_;
};
