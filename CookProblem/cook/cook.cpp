#include "common/ability.h"

#include "cook.h"

using namespace std;

Cook::Cook()
{
}

Cook::~Cook()
{
}

void Cook::SetAttr(string name, vector<Ability> collect_ability, vector<Ability> cook_ability)
{
  name_ = name;
  collect_ability_.assign(collect_ability.begin(), collect_ability.end());
  cook_ability_.assign(cook_ability.begin(), cook_ability.end());
}
