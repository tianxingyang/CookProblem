#pragma once

#include <map>
#include <string>

#include "json/json.h"
#include "uncopyable.h"

template <typename T, typename Mem>
class FooMgr : private Uncopyable
{
public:
  FooMgr() {}
  virtual ~FooMgr() {}

public:
  static T& Instance()
  {
    static T t_instance;
    return t_instance;
  }

  virtual void Init(Json::Value) {}

  std::map<std::string, Mem>& GetMem() { return name_to_member_map_; }

protected:
  std::map<std::string, Mem> name_to_member_map_;
};
