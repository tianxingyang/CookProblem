#include "cook_mgr.h"

CookMgr::CookMgr()
{
}


CookMgr::~CookMgr()
{
}



void CookMgr::Init(Json::Value cooks)
{
  for (auto cook_json_value : cooks)
  {
    auto temp_collect_abilities_vector = new std::vector<Ability>();
    for (auto collect_ability : cook_json_value["collect_ability"])
    {
      auto temp_colllect_ability = new Ability(
        collect_ability["name"].asString(),
        collect_ability["value"].asInt(),
        kAbilityTypeCollect
      );
      temp_collect_abilities_vector->push_back(*temp_colllect_ability);
      delete temp_colllect_ability;
    }
    auto temp_cook_abiliies_vector = new std::vector<Ability>();
    for (auto cook_ability : cook_json_value["cook_ability"])
    {
      auto temp_cook_ability = new Ability(
        cook_ability["name"].asString(),
        cook_ability["value"].asInt(),
        kAbilityTypeCook
      );
      temp_cook_abiliies_vector->push_back(*temp_cook_ability);
      delete temp_cook_ability;
    }
    auto temp_cook = new Cook();
    temp_cook->SetAttr(cook_json_value["name"].asString(), *temp_collect_abilities_vector, *temp_cook_abiliies_vector);
    name_to_member_map_.insert(make_pair(cook_json_value["name"].asString(), *temp_cook));
    delete temp_cook;
  }
}
