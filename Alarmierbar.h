#pragma once;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


class Alarmierbar {

public:

    virtual  void  alarmieren () = 0;
    virtual  string liefereName () const = 0;
    virtual bool istAlarmiert() const = 0;
    virtual void alarmZuruecksetzen() = 0;
    virtual ~Alarmierbar() {

     }
};
