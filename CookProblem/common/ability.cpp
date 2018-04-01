#include "ability.h"



Ability::Ability()
{
}


Ability::~Ability()
{
}

bool Ability::operator==(const Ability & rhs)
{
  if (rhs.name_ == this->name_ && rhs.ability_type_ == this->ability_type_ && rhs.value_ == this->value_)
  {
    return true;
  }
  return false;
}

void Ability::SetAbilityType(AbilityType ability_type)
{
  ability_type_ = ability_type;
}
