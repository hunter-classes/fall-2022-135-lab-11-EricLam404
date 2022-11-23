#pragma once
#include "social3.h"
#include "profile.h"

class Social3{
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    bool following[MAX_USERS][MAX_USERS]; 

    int findID (std::string usrn);
public:
    Social3();
    bool addUser(std::string usrn, std::string dspn);
    bool follow(std::string usrn1, std::string usrn2);
    void printDot();
    
    bool validateUsername(std::string usrn);
};
