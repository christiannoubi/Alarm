#pragma once;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Alarmierbar.h"

using namespace std;

class Detektor : public Alarmierbar{

public:

    virtual void anschliessen (Alarmierbar& alarmierbar) = 0;

    virtual void ausloesen() = 0;

    virtual ~Detektor() {

    }
};