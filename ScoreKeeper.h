#ifndef SCOREKEEPER_H
#define SCOREKEEPER_H

#include <string>

class ScoreKeeper
{
public:
	ScoreKeeper();
	void scoreTeamA1();
	void scoreTeamA2();
	void scoreTeamA3();
	void scoreTeamB1();
	void scoreTeamB2();
	void scoreTeamB3();
	std::string getScore();

private:
	std::string _score;
};

#endif // !SCOREKEEPER_H
