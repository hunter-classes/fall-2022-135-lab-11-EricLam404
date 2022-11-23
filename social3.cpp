#include <iostream>
#include "social3.h"


Social3::Social3() {
    numUsers = 0;
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            following[i][j] = false;
        }
    }
}

bool Social3::validateUsername(std::string usrn){
    for(int i = 0; i < usrn.length(); i++){
        if(!isalpha(usrn[i])){
            return false;
        }
    }
    return true;
}

int Social3::findID(std::string usrn){
    for(int i = 0; i < 20; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}

bool Social3::addUser(std::string usrn, std::string dspn){
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

bool Social3::follow(std::string usrn1, std::string usrn2){
    int id1 = findID(usrn1);
    int id2 = findID(usrn2);
    if(id1 != -1 && id2 != -1){
        following[id1][id2] = true;
        return true;
    }
    else {
        return false;
    }
}

void Social3::printDot(){
    std::cout << "digraph {\n";
    for(int i = 0; i < 20; i++){
        if(profiles[i].getUsername() != ""){
            std::cout << "\"@" << profiles[i].getUsername() <<"\" \n"; 
        }
    }
    std::cout << "\n";
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(following[i][j]){
                std::cout << "  \"@" << profiles[i].getUsername() <<"\" -> \"@" << profiles[j].getUsername() <<"\"\n"; 
            }
        }
    }
    std::cout << "}\n";
}