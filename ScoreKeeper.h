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
	void setScore();
	int scoreDigitA1 = 0;
	int scoreDigitA2 = 0;
	int scoreDigitA3 = 0;
	int scoreDigitB1 = 0;
	int scoreDigitB2 = 0;
	int scoreDigitB3 = 0;
};

#endif // !SCOREKEEPER_H
