#ifndef DEF_DOCTOR
#define DEF_DOCTOR

#include <string>

#include "person.hpp"


class doctor : public person
{
public:


//Methods

private:
//Variable
    string _blood_group;
    int _security_number;
    int _telephon_number;
//Class methods
    //setters
    void set_blood_group(string blood_group);
    void set_security_number(int security_number);
    void set_telephon(int telephon_number);
    //getters
    string get_blood_group();
    int get_security_number();
    int get_telephon();
};


#endif
