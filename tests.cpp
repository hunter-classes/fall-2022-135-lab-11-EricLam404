#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"
#include "social3.h"

TEST_CASE("TASK A"){
    Profile p1("marco", "Marco"); 
    CHECK((p1.getUsername() == "marco" && p1.getFullName() == "Marco (@marco)"));

    p1.setDisplayName("Marco Rossi"); 
    CHECK((p1.getUsername() == "marco" && p1.getFullName() == "Marco Rossi (@marco)"));
}

TEST_CASE("TASK B"){
    Network nw;
    CHECK(nw.addUser("mario", "Mario") == true);
    CHECK(nw.addUser("mario", "Mario2") == false);
}

TEST_CASE("Task C tests"){
	Social3 social;
	
	social.addUser("mario", "Mario");
    social.addUser("luigi", "Luigi");
    social.addUser("yoshi", "Yoshi");

	CHECK(social.follow("mario", "luigi") == true);
	CHECK(social.follow("mario", "sam") == false);
}