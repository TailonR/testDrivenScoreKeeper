#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "ScoreKeeper.h"

TEST_CASE("Start of game -- score is 0 to 0")
{
	ScoreKeeper mark;
	CHECK(mark.getScore() == "000:000");
}