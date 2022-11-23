#include <iostream>
#include "social3.h"

int main(){
    std::cout << "\nTask C\n";
    Social3 nw;
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("yoshi", "mario");
    nw.follow("luigi", "mario");
    nw.follow("mario", "luigi");
    nw.follow("luigi", "yoshi");

    nw.printDot();
}