#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "ScoreKeeper.h"

TEST_CASE("Start of game -- score is 0 to 0")
{
	ScoreKeeper mark;
	CHECK(mark.getScore() == "000:000");
}

TEST_CASE("Teams scored 1 points")
{
	ScoreKeeper mark;
	mark.scoreTeamB1();
	CHECK(mark.getScore() == "000:001");
	mark.scoreTeamA1();
	CHECK(mark.getScore() == "001:001");
	
	mark.scoreTeamB1();
	CHECK(mark.getScore() == "001:002");
	mark.scoreTeamA1();
	CHECK(mark.getScore() == "002:002");
	
	mark.scoreTeamA1();
	CHECK(mark.getScore() == "003:002");
	mark.scoreTeamB1();
	CHECK(mark.getScore() == "003:003");
}

TEST_CASE("Teams scored 2 points")
{
	ScoreKeeper mark;
	mark.scoreTeamB2();
	CHECK(mark.getScore() == "000:002");
	mark.scoreTeamA2();
	CHECK(mark.getScore() == "002:002");
	
	mark.scoreTeamB2();
	CHECK(mark.getScore() == "002:004");
	mark.scoreTeamA2();
	CHECK(mark.getScore() == "004:004");
	
	mark.scoreTeamA2();
	CHECK(mark.getScore() == "006:004");
	mark.scoreTeamB2();
	CHECK(mark.getScore() == "006:006");
}