#pragma once;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Detektor.h"


class DetektorImpl : public Detektor {

protected:
     std::vector<Alarmierbar*> empfaenger;
     std::string name;
     virtual void alarmieren() {

    }
public:
    DetektorImpl(std::string name) {
        this->name = name;
    }
    DetektorImpl() {

    }

    virtual~DetektorImpl() {

    }
    virtual void anschliessen(Alarmierbar& alarmierbar) {

    }
};