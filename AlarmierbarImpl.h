#pragma once;
#include <iostream>
#include <sstream>
#include <vector>
#include "Alarmierbar.h"
using namespace std;


class AlarmierbarImpl : public Alarmierbar {


private:
    bool alarm;

public:
     AlarmierbarImpl() {

     }

    virtual void alarmieren (){

     }

    virtual bool istAlarmiert() {

     }

    virtual void alarmZuruecksetzen() {

     }
};