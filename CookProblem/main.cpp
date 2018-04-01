#pragma warning(disable : 4996)

#include <fstream>

#include "common/json/json.h"

#include "cook/cook_mgr.h"

using namespace std;
using namespace Json;

int main()
{
  ifstream json_config("config/config.json", ios::binary);
  if (json_config.is_open() == false)
  {
    return -1;
  }

  Reader reader;
  Value root;
  if (reader.parse(json_config, root) == false)
  {
    return -1;
  }

  CookMgr::Instance().Init(root["cooks"]);
  auto cooks = CookMgr::Instance().GetMem();

  for (auto cook : cooks)
  {

  }

  return 0;
}
