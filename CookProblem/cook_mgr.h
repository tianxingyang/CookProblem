#pragma once

#include <map>
#include <string>

#include "cook.h"

class CookMgr
{
public:
    CookMgr();
    ~CookMgr();

private:
    std::map<std::string, Cook> name_to_cook_map_;
};

