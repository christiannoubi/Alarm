#pragma once;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "AlarmierbarImpl.h"

class Flutlicht : public AlarmierbarImpl {

private:
    int objektZaehler;
    int id;

public:
    Flutlicht() {

    }

    virtual void alarmieren() {

    }

    virtual string liefereName() {
        return name;
    }
};