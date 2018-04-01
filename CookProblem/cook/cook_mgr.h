#pragma once

#include <map>
#include <vector>
#include <string>

#include "common/uncopyable.h"
#include "common/json/json.h"
#include "common/foo_mgr.h"

#include "cook.h"

class CookMgr : public FooMgr<CookMgr, Cook>
{
public:
  CookMgr();
  ~CookMgr();

public:
  void Init(Json::Value cooks);
  static bool IsTrue() { return 1 == 1; }
};
