#ifndef BOARD_H
#define BOARD_H
#include <SFML/Graphics.hpp>

using namespace std;

class Board{
private:
	int capGuessBoxes = 10;
	sf::CircleShape correctionCircles[40];

public:
	Board();
	~Board();
	void createGuessBoxes(sf::RectangleShape guessBoxes[]);
	void createCorrectionBoxes(sf::RectangleShape correctionBoxes[]);
	void createColorSpaces(sf::CircleShape circleAnswers[]);
	void setColorAnswer(int i,sf::Color color);
	void createCorrectonCircles(sf::CircleShape correctionCircles[]);
};

#endif