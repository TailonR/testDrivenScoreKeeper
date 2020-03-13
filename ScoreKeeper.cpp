#include "ScoreKeeper.h"

ScoreKeeper::ScoreKeeper() : _score("000:000")
{}

void ScoreKeeper::scoreTeamA1() {}

void ScoreKeeper::scoreTeamA2() {}

void ScoreKeeper::scoreTeamA3() {}

void ScoreKeeper::scoreTeamB1() {}

void ScoreKeeper::scoreTeamB2() {}

void ScoreKeeper::scoreTeamB3() {}

std::string ScoreKeeper::getScore() { return _score; }