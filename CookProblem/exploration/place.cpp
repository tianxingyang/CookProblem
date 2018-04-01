#include "place.h"

using namespace std;

Place::Place()
{
}

Place::~Place()
{
}

void Place::SetAttr(Ability ability, vector<Ability> ability_stage)
{
  ability_ = ability;
  ability_stage_.assign(ability_stage.begin(), ability_stage.end());
}
