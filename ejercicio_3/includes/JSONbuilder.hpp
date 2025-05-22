#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "DataGenerator.hpp"
using namespace std;

class JSONbuilder{
private:
    vector<string> processedData;
public:
    void addInfo(const string& d);

    void  buildJSON(ostream& out);

    void showJSON();
};