#pragma once

#include <vector>

#include "common/ability.h"

class Place
{
public:
  Place();
  ~Place();

public:
  void SetAttr(Ability ability, std::vector<Ability> ability_stage);

private:
  Ability ability_;
  std::vector<Ability> ability_stage_;
};

