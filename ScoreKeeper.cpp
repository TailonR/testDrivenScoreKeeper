#include "ScoreKeeper.h"
#include <cstdlib>
ScoreKeeper::ScoreKeeper() : _score("000:000")
{}

void ScoreKeeper::scoreTeamA1() 
{
	scoreDigitA3++;

	setScore();
}

void ScoreKeeper::scoreTeamA2() {}

void ScoreKeeper::scoreTeamA3() {}

void ScoreKeeper::scoreTeamB1() 
{
	scoreDigitB3++;

	setScore();
} 

void ScoreKeeper::scoreTeamB2() {}

void ScoreKeeper::scoreTeamB3() {}

void ScoreKeeper::setScore()
{
	_score.replace(0, 1, std::to_string(scoreDigitA1));
	_score.replace(1, 1, std::to_string(scoreDigitA2));
	_score.replace(2, 1, std::to_string(scoreDigitA3));
	_score.replace(4, 1, std::to_string(scoreDigitB1));
	_score.replace(5, 1, std::to_string(scoreDigitB2));
	_score.replace(6, 1, std::to_string(scoreDigitB3));

}

std::string ScoreKeeper::getScore() { return _score; }