#pragma once;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "DetektorImpl.h"

class GeraeuschDetektor : public DetektorImpl{

public:
    GeraeuschDetektor(std::string name) {
           this->name = name;
    }

    virtual void ausloesen() {

    }
};
