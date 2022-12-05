#include <iostream>
#include <string>
#include "profile.h"
#include "network.h"
#include "social3.h"

int main(){
    std::cout << "\nTask A\n";
    Profile p1("marco", "Marco"); 
    std::cout << "Profile p1(\"marco\", \"Marco\")\n";   
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi");
    std::cout << "p1.setDisplayName(\"Marco Rossi\")\n";   
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco Rossi (@marco)

    std::cout << "\nTask B\n";
    Network nw;
    std::cout << "nw.addUser(\"mario\", \"Mario\")\n"; 
    std::cout << std::boolalpha << nw.addUser("mario", "Mario") << std::endl;     // true (1)
    std::cout << "nw.addUser(\"luigi\", \"Luigi\")\n"; 
    std::cout << std::boolalpha << nw.addUser("luigi", "Luigi") << std::endl;     // true (1)

    std::cout << "nw.addUser(\"mario\", \"Mario2\")\n"; 
    std::cout << std::boolalpha << nw.addUser("mario", "Mario2") << std::endl;    // false (0)

    std::cout << "\nTask C\n";
    Social3 social;
    social.addUser("mario", "Mario");
    social.addUser("luigi", "Luigi");
    social.addUser("yoshi", "Yoshi");

    social.follow("yoshi", "mario");
    social.follow("luigi", "mario");
    social.follow("mario", "luigi");
    social.follow("luigi", "yoshi");

    std::cout << "social.printDot()\n";
    social.printDot();

    return 0;
}