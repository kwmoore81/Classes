#pragma once

class HighScores
{
private:
		int highScores[3]{ 0 , 0 , 0 };

public:

	void setHighScore1(int highScore[1]);
	int getHighScore1();
	void setHighScore2(int highScore[2]);
	int getHighScore2();
	void setHighScore3(int highScore[3]);
	int getHighScore3();
	int highScoreAvg();
};