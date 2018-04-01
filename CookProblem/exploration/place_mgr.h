#pragma once

#include "common/foo_mgr.h"
#include "common/json/json.h"

#include "place.h"

class PlaceMgr : public FooMgr<PlaceMgr, Place>
{
public:
  PlaceMgr();
  ~PlaceMgr();

public:
  void Init(Json::Value places);
};

