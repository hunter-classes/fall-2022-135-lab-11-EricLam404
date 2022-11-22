#include <iostream>
#include "network.h"

bool validateUsername(std::string usrn){
    for(int i = 0; i < usrn.length(); i++){
        if(!isalpha(usrn[i])){
            return false;
        }
    }
    return true;
}

Network::Network() : numUsers(0) {}

int Network::findID(std::string usrn){
    for(int i = 0; i < 20; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}

bool Network::addUser(std::string usrn, std::string dspn){
    if(findID(usrn) == -1 && validateUsername(usrn) && numUsers < 20){
        Profile newUser(usrn, dspn);
        profiles[numUsers] = newUser;
        numUsers++;
        return true;
    }
    else {
        return false;
    }
}