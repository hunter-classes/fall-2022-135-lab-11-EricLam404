#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"

TEST_CASE("TASK A"){
    Profile p1("marco", "Marco"); 

    std::cout << p1.getUsername() << "\n";
    std::cout << p1.getFullName() << "\n";

    CHECK((p1.getUsername() == "marco" && p1.getFullName() == "Marco (@marco)"));
}