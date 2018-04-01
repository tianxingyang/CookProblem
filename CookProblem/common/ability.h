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
  //����������
  std::string name_;
  //������ֵ
  int value_;
  //���������ͣ�kAbilityTypeCook����kAbilityTypeCollect
  int ability_type_;
};
