#pragma once
#include <string>
#include <vector>
#include <map>

enum AbilityType
{
  kAbilityTypeCook = 1,
  kAbilityTypeCollect = 2,
};

class Ability
{
public:
  Ability();
  Ability(std::string name, int value, int ability_type) : name_(name), value_(value), ability_type_(ability_type){}
  ~Ability();
  bool operator==(const Ability& rhs);

public:
  void SetAbilityType(AbilityType ability_type);

private:
  //能力的名字
  std::string name_;
  //能力的值
  int value_;
  //能力的类型，kAbilityTypeCook或者kAbilityTypeCollect
  int ability_type_;
};
