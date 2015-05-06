#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include <SFML/Graphics.hpp>
using namespace std;

class Game{
private:
	Board b;
	static const int capGuessBoxes = 10;
	string playersName;
	string colors[capGuessBoxes][4];
public:
	Game();
	~Game();
	void showGuessBoxes(sf::RectangleShape guessBoxes[]);
	void showCorrectionBox(sf::RectangleShape correctionBoxes[]);
	void showAnswerCircles(sf::CircleShape answerCircles[]);
	void showCorrectionCircles(sf::CircleShape correctionCircles[]);
	void setPlayersName(string playersName);
	string getPlayersName();
	void setColors(int nrOfGuess, int nr, string color1, string color2, string color3, string color4);
	string getColors(int i);
	void setFilledColor(int nr, sf::Color color);
};

#endif