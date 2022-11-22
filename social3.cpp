#include <iostream>
#include "social3.h"

bool validateUsername(std::string usrn){
    for(int i = 0; i < usrn.length(); i++){
        if(!isalpha(usrn[i])){
            return false;
        }
    }
    return true;
}

Network::Network() {
    numUsers = 0;
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            following[i][j] = false;
        }
    }
}

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

bool Network::follow(std::string usrn1, std::string usrn2){
    int id1 = findID(usrn1);
    int id2 = findID(usrn2);
    if(id1 != -1 && id2 != -1){
        following[id1][id2] == true;
    }
}

void printDot(){
    
}