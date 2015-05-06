#include "Game.h"


Game::Game(){
	int const cap = 4;
	for (int k = 0; k < capGuessBoxes; k++){
		for (int i = 0; i < 4; i++){
			this->colors[k][i] = "";
		}
	}
}

Game::~Game(){

}

void Game::showGuessBoxes(sf::RectangleShape guessBoxes[]){
	return b.createGuessBoxes(guessBoxes);
}

void Game::showCorrectionBox(sf::RectangleShape correctionBoxes[]){
	return b.createCorrectionBoxes(correctionBoxes);
}

void Game::showAnswerCircles(sf::CircleShape answerCircles[]){
	return b.createColorSpaces(answerCircles);
}

void Game::showCorrectionCircles(sf::CircleShape correctionCircles[]){
	return b.createCorrectonCircles(correctionCircles);
}

void Game::setPlayersName(string playersName){
	this->playersName = playersName;
}

string Game::getPlayersName(){
	return this->playersName;
}

void Game::setColors(int nrOfGuess, int nr, string color1, string color2, string color3, string color4){
	colors[nrOfGuess][nr] = color1;
	nr++;
	colors[nrOfGuess][nr] = color2;
	nr++;
	colors[nrOfGuess][nr] = color3;
	nr++;
	colors[nrOfGuess][nr] = color4;
	nr++;
}

string Game::getColors(int i){
	return colors[i][i];
}

void Game::setFilledColor(int nr, sf::Color color){
	b.setColorAnswer(nr, color);
}
