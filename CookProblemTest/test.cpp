#include <fstream>

#include "pch.h"

using namespace std;

TEST(CookMgrTest, InitTest)
{
    ifstream json_config("config/config.json", ios::binary);

    EXPECT_TRUE(true);
}