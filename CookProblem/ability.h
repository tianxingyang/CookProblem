#pragma once
#include <string>
#include <vector>
#include <map>

class Ability
{
public:
    Ability();
    ~Ability();

private:
    std::string name_;
    std::vector<int> stage_;
    int value_;
};
