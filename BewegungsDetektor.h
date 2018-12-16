#pragma once;
#include <iostream>
#include "DetektorImpl.h"

class BewegungsDetektor : public DetektorImpl{

public:
    BewegungsDetektor (std::string name) {
        this->name = name;
    }
    BewegungsDetektor() {
    }

    virtual void ausloesen() {

    }
};