#include "Board.h"
#include <SFML/Graphics.hpp>


Board::Board(){

}

Board::~Board(){

}

void Board::createGuessBoxes(sf::RectangleShape guessBoxes[]){
		guessBoxes[0].setSize(sf::Vector2f(245, 50));
		guessBoxes[0].setPosition(75, 525);
		guessBoxes[0].setOutlineColor(sf::Color::Black);
		guessBoxes[0].setOutlineThickness(-1);

		guessBoxes[1].setSize(sf::Vector2f(245, 50));
		guessBoxes[1].setPosition(75, 475);
		guessBoxes[1].setOutlineColor(sf::Color::Black);
		guessBoxes[1].setOutlineThickness(-1);

		guessBoxes[2].setSize(sf::Vector2f(245, 50));
		guessBoxes[2].setPosition(75, 425);
		guessBoxes[2].setOutlineColor(sf::Color::Black);
		guessBoxes[2].setOutlineThickness(-1);

		guessBoxes[3].setSize(sf::Vector2f(245, 50));
		guessBoxes[3].setPosition(75, 375);
		guessBoxes[3].setOutlineColor(sf::Color::Black);
		guessBoxes[3].setOutlineThickness(-1);

		guessBoxes[4].setSize(sf::Vector2f(245, 50));
		guessBoxes[4].setPosition(75, 325);
		guessBoxes[4].setOutlineColor(sf::Color::Black);
		guessBoxes[4].setOutlineThickness(-1);

		guessBoxes[5].setSize(sf::Vector2f(245, 50));
		guessBoxes[5].setPosition(75, 275);
		guessBoxes[5].setOutlineColor(sf::Color::Black);
		guessBoxes[5].setOutlineThickness(-1);

		guessBoxes[6].setSize(sf::Vector2f(245, 50));
		guessBoxes[6].setPosition(75, 225);
		guessBoxes[6].setOutlineColor(sf::Color::Black);
		guessBoxes[6].setOutlineThickness(-1);

		guessBoxes[7].setSize(sf::Vector2f(245, 50));
		guessBoxes[7].setPosition(75, 175);
		guessBoxes[7].setOutlineColor(sf::Color::Black);
		guessBoxes[7].setOutlineThickness(-1);

		guessBoxes[8].setSize(sf::Vector2f(245, 50));
		guessBoxes[8].setPosition(75, 125);
		guessBoxes[8].setOutlineColor(sf::Color::Black);
		guessBoxes[8].setOutlineThickness(-1);

		guessBoxes[9].setSize(sf::Vector2f(245, 50));
		guessBoxes[9].setPosition(75, 75);
		guessBoxes[9].setOutlineColor(sf::Color::Black);
		guessBoxes[9].setOutlineThickness(-1);

}

void Board::createCorrectionBoxes(sf::RectangleShape correctionBoxes[]){

	correctionBoxes[0].setSize(sf::Vector2f(50, 50));
	correctionBoxes[0].setPosition(25, 525);
	correctionBoxes[0].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[0].setOutlineColor(sf::Color::Black);
	correctionBoxes[0].setOutlineThickness(-1);

	correctionBoxes[1].setSize(sf::Vector2f(50, 50));
	correctionBoxes[1].setPosition(25, 475);
	correctionBoxes[1].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[1].setOutlineColor(sf::Color::Black);
	correctionBoxes[1].setOutlineThickness(-1);

	correctionBoxes[2].setSize(sf::Vector2f(50, 50));
	correctionBoxes[2].setPosition(25, 425);
	correctionBoxes[2].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[2].setOutlineColor(sf::Color::Black);
	correctionBoxes[2].setOutlineThickness(-1);

	correctionBoxes[3].setSize(sf::Vector2f(50, 50));
	correctionBoxes[3].setPosition(25, 375);
	correctionBoxes[3].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[3].setOutlineColor(sf::Color::Black);
	correctionBoxes[3].setOutlineThickness(-1);

	correctionBoxes[4].setSize(sf::Vector2f(50, 50));
	correctionBoxes[4].setPosition(25, 325);
	correctionBoxes[4].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[4].setOutlineColor(sf::Color::Black);
	correctionBoxes[4].setOutlineThickness(-1);

	correctionBoxes[5].setSize(sf::Vector2f(50, 50));
	correctionBoxes[5].setPosition(25, 275);
	correctionBoxes[5].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[5].setOutlineColor(sf::Color::Black);
	correctionBoxes[5].setOutlineThickness(-1);

	correctionBoxes[6].setSize(sf::Vector2f(50, 50));
	correctionBoxes[6].setPosition(25, 225);
	correctionBoxes[6].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[6].setOutlineColor(sf::Color::Black);
	correctionBoxes[6].setOutlineThickness(-1);

	correctionBoxes[7].setSize(sf::Vector2f(50, 50));
	correctionBoxes[7].setPosition(25, 175);
	correctionBoxes[7].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[7].setOutlineColor(sf::Color::Black);
	correctionBoxes[7].setOutlineThickness(-1);

	correctionBoxes[8].setSize(sf::Vector2f(50, 50));
	correctionBoxes[8].setPosition(25, 125);
	correctionBoxes[8].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[8].setOutlineColor(sf::Color::Black);
	correctionBoxes[8].setOutlineThickness(-1);

	correctionBoxes[9].setSize(sf::Vector2f(50, 50));
	correctionBoxes[9].setPosition(25, 75);
	correctionBoxes[9].setFillColor(sf::Color(207, 212, 214));
	correctionBoxes[9].setOutlineColor(sf::Color::Black);
	correctionBoxes[9].setOutlineThickness(-1);

}

void Board::createColorSpaces(sf::CircleShape circleAnswers[]){
	circleAnswers[0].setRadius(10.f);
	circleAnswers[0].setOutlineColor(sf::Color::Black);
	circleAnswers[0].setOutlineThickness(-1);
	circleAnswers[0].setPosition(105, 540);

	circleAnswers[1].setRadius(10.f);
	circleAnswers[1].setOutlineColor(sf::Color::Black);
	circleAnswers[1].setOutlineThickness(-1);
	circleAnswers[1].setPosition(105, 490);

	circleAnswers[2].setRadius(10.f);
	circleAnswers[2].setOutlineColor(sf::Color::Black);
	circleAnswers[2].setOutlineThickness(-1);
	circleAnswers[2].setPosition(105, 440);

	circleAnswers[3].setRadius(10.f);
	circleAnswers[3].setOutlineColor(sf::Color::Black);
	circleAnswers[3].setOutlineThickness(-1);
	circleAnswers[3].setPosition(105, 390);

	circleAnswers[4].setRadius(10.f);
	circleAnswers[4].setOutlineColor(sf::Color::Black);
	circleAnswers[4].setOutlineThickness(-1);
	circleAnswers[4].setPosition(105, 340);

	circleAnswers[5].setRadius(10.f);
	circleAnswers[5].setOutlineColor(sf::Color::Black);
	circleAnswers[5].setOutlineThickness(-1);
	circleAnswers[5].setPosition(105, 290);

	circleAnswers[6].setRadius(10.f);
	circleAnswers[6].setOutlineColor(sf::Color::Black);
	circleAnswers[6].setOutlineThickness(-1);
	circleAnswers[6].setPosition(105, 240);

	circleAnswers[7].setRadius(10.f);
	circleAnswers[7].setOutlineColor(sf::Color::Black);
	circleAnswers[7].setOutlineThickness(-1);
	circleAnswers[7].setPosition(105, 190);

	circleAnswers[8].setRadius(10.f);
	circleAnswers[8].setOutlineColor(sf::Color::Black);
	circleAnswers[8].setOutlineThickness(-1);
	circleAnswers[8].setPosition(105, 140);

	circleAnswers[9].setRadius(10.f);
	circleAnswers[9].setOutlineColor(sf::Color::Black);
	circleAnswers[9].setOutlineThickness(-1);
	circleAnswers[9].setPosition(105, 90);

	circleAnswers[10].setRadius(10.f);
	circleAnswers[10].setOutlineColor(sf::Color::Black);
	circleAnswers[10].setOutlineThickness(-1);
	circleAnswers[10].setPosition(160, 540);

	circleAnswers[11].setRadius(10.f);
	circleAnswers[11].setOutlineColor(sf::Color::Black);
	circleAnswers[11].setOutlineThickness(-1);
	circleAnswers[11].setPosition(160, 490);

	circleAnswers[12].setRadius(10.f);
	circleAnswers[12].setOutlineColor(sf::Color::Black);
	circleAnswers[12].setOutlineThickness(-1);
	circleAnswers[12].setPosition(160, 440);

	circleAnswers[13].setRadius(10.f);
	circleAnswers[13].setOutlineColor(sf::Color::Black);
	circleAnswers[13].setOutlineThickness(-1);
	circleAnswers[13].setPosition(160, 390);

	circleAnswers[14].setRadius(10.f);
	circleAnswers[14].setOutlineColor(sf::Color::Black);
	circleAnswers[14].setOutlineThickness(-1);
	circleAnswers[14].setPosition(160, 340);

	circleAnswers[15].setRadius(10.f);
	circleAnswers[15].setOutlineColor(sf::Color::Black);
	circleAnswers[15].setOutlineThickness(-1);
	circleAnswers[15].setPosition(160, 290);

	circleAnswers[16].setRadius(10.f);
	circleAnswers[16].setOutlineColor(sf::Color::Black);
	circleAnswers[16].setOutlineThickness(-1);
	circleAnswers[16].setPosition(160, 240);

	circleAnswers[17].setRadius(10.f);
	circleAnswers[17].setOutlineColor(sf::Color::Black);
	circleAnswers[17].setOutlineThickness(-1);
	circleAnswers[17].setPosition(160, 190);

	circleAnswers[18].setRadius(10.f);
	circleAnswers[18].setOutlineColor(sf::Color::Black);
	circleAnswers[18].setOutlineThickness(-1);
	circleAnswers[18].setPosition(160, 140);

	circleAnswers[19].setRadius(10.f);
	circleAnswers[19].setOutlineColor(sf::Color::Black);
	circleAnswers[19].setOutlineThickness(-1);
	circleAnswers[19].setPosition(160, 90);

	circleAnswers[20].setRadius(10.f);
	circleAnswers[20].setOutlineColor(sf::Color::Black);
	circleAnswers[20].setOutlineThickness(-1);
	circleAnswers[20].setPosition(210, 540);

	circleAnswers[21].setRadius(10.f);
	circleAnswers[21].setOutlineColor(sf::Color::Black);
	circleAnswers[21].setOutlineThickness(-1);
	circleAnswers[21].setPosition(210, 490);

	circleAnswers[22].setRadius(10.f);
	circleAnswers[22].setOutlineColor(sf::Color::Black);
	circleAnswers[22].setOutlineThickness(-1);
	circleAnswers[22].setPosition(210, 440);

	circleAnswers[23].setRadius(10.f);
	circleAnswers[23].setOutlineColor(sf::Color::Black);
	circleAnswers[23].setOutlineThickness(-1);
	circleAnswers[23].setPosition(210, 390);

	circleAnswers[24].setRadius(10.f);
	circleAnswers[24].setOutlineColor(sf::Color::Black);
	circleAnswers[24].setOutlineThickness(-1);
	circleAnswers[24].setPosition(210, 340);

	circleAnswers[25].setRadius(10.f);
	circleAnswers[25].setOutlineColor(sf::Color::Black);
	circleAnswers[25].setOutlineThickness(-1);
	circleAnswers[25].setPosition(210, 290);

	circleAnswers[26].setRadius(10.f);
	circleAnswers[26].setOutlineColor(sf::Color::Black);
	circleAnswers[26].setOutlineThickness(-1);
	circleAnswers[26].setPosition(210, 240);

	circleAnswers[27].setRadius(10.f);
	circleAnswers[27].setOutlineColor(sf::Color::Black);
	circleAnswers[27].setOutlineThickness(-1);
	circleAnswers[27].setPosition(210, 190);

	circleAnswers[28].setRadius(10.f);
	circleAnswers[28].setOutlineColor(sf::Color::Black);
	circleAnswers[28].setOutlineThickness(-1);
	circleAnswers[28].setPosition(210, 140);

	circleAnswers[29].setRadius(10.f);
	circleAnswers[29].setOutlineColor(sf::Color::Black);
	circleAnswers[29].setOutlineThickness(-1);
	circleAnswers[29].setPosition(210, 90);

	circleAnswers[30].setRadius(10.f);
	circleAnswers[30].setOutlineColor(sf::Color::Black);
	circleAnswers[30].setOutlineThickness(-1);
	circleAnswers[30].setPosition(265, 540);

	circleAnswers[31].setRadius(10.f);
	circleAnswers[31].setOutlineColor(sf::Color::Black);
	circleAnswers[31].setOutlineThickness(-1);
	circleAnswers[31].setPosition(265, 490);

	circleAnswers[32].setRadius(10.f);
	circleAnswers[32].setOutlineColor(sf::Color::Black);
	circleAnswers[32].setOutlineThickness(-1);
	circleAnswers[32].setPosition(265, 440);

	circleAnswers[33].setRadius(10.f);
	circleAnswers[33].setOutlineColor(sf::Color::Black);
	circleAnswers[33].setOutlineThickness(-1);
	circleAnswers[33].setPosition(265, 390);

	circleAnswers[34].setRadius(10.f);
	circleAnswers[34].setOutlineColor(sf::Color::Black);
	circleAnswers[34].setOutlineThickness(-1);
	circleAnswers[34].setPosition(265, 340);

	circleAnswers[35].setRadius(10.f);
	circleAnswers[35].setOutlineColor(sf::Color::Black);
	circleAnswers[35].setOutlineThickness(-1);
	circleAnswers[35].setPosition(265, 290);

	circleAnswers[36].setRadius(10.f);
	circleAnswers[36].setOutlineColor(sf::Color::Black);
	circleAnswers[36].setOutlineThickness(-1);
	circleAnswers[36].setPosition(265, 240);

	circleAnswers[37].setRadius(10.f);
	circleAnswers[37].setOutlineColor(sf::Color::Black);
	circleAnswers[37].setOutlineThickness(-1);
	circleAnswers[37].setPosition(265, 190);

	circleAnswers[38].setRadius(10.f);
	circleAnswers[38].setOutlineColor(sf::Color::Black);
	circleAnswers[38].setOutlineThickness(-1);
	circleAnswers[38].setPosition(265, 140);

	circleAnswers[39].setRadius(10.f);
	circleAnswers[39].setOutlineColor(sf::Color::Black);
	circleAnswers[39].setOutlineThickness(-1);
	circleAnswers[39].setPosition(265, 90);
}

void Board::setColorAnswer(int nr, sf::Color color){
	correctionCircles[nr].setFillColor(color);
}

void Board::createCorrectonCircles(sf::CircleShape correctionCircles[]){
	correctionCircles[0].setRadius(6.f);
	correctionCircles[0].setPosition(35, 555);
	correctionCircles[0].setOutlineColor(sf::Color::Black);
	correctionCircles[0].setOutlineThickness(-1);

	correctionCircles[1].setRadius(6.f);
	correctionCircles[1].setPosition(35, 505);
	correctionCircles[1].setOutlineColor(sf::Color::Black);
	correctionCircles[1].setOutlineThickness(-1);

	correctionCircles[2].setRadius(6.f);
	correctionCircles[2].setPosition(35, 455);
	correctionCircles[2].setOutlineColor(sf::Color::Black);
	correctionCircles[2].setOutlineThickness(-1);

	correctionCircles[3].setRadius(6.f);
	correctionCircles[3].setPosition(35, 405);
	correctionCircles[3].setOutlineColor(sf::Color::Black);
	correctionCircles[3].setOutlineThickness(-1);

	correctionCircles[4].setRadius(6.f);
	correctionCircles[4].setPosition(35, 355);
	correctionCircles[4].setOutlineColor(sf::Color::Black);
	correctionCircles[4].setOutlineThickness(-1);

	correctionCircles[5].setRadius(6.f);
	correctionCircles[5].setPosition(35, 305);
	correctionCircles[5].setOutlineColor(sf::Color::Black);
	correctionCircles[5].setOutlineThickness(-1);

	correctionCircles[6].setRadius(6.f);
	correctionCircles[6].setPosition(35, 255);
	correctionCircles[6].setOutlineColor(sf::Color::Black);
	correctionCircles[6].setOutlineThickness(-1);

	correctionCircles[7].setRadius(6.f);
	correctionCircles[7].setPosition(35, 205);
	correctionCircles[7].setOutlineColor(sf::Color::Black);
	correctionCircles[7].setOutlineThickness(-1);

	correctionCircles[8].setRadius(6.f);
	correctionCircles[8].setPosition(35, 155);
	correctionCircles[8].setOutlineColor(sf::Color::Black);
	correctionCircles[8].setOutlineThickness(-1);

	correctionCircles[9].setRadius(6.f);
	correctionCircles[9].setPosition(35, 105);
	correctionCircles[9].setOutlineColor(sf::Color::Black);
	correctionCircles[9].setOutlineThickness(-1);

	correctionCircles[10].setRadius(6.f);
	correctionCircles[10].setPosition(54, 555);
	correctionCircles[10].setOutlineColor(sf::Color::Black);
	correctionCircles[10].setOutlineThickness(-1);

	correctionCircles[11].setRadius(6.f);
	correctionCircles[11].setPosition(54, 505);
	correctionCircles[11].setOutlineColor(sf::Color::Black);
	correctionCircles[11].setOutlineThickness(-1);

	correctionCircles[12].setRadius(6.f);
	correctionCircles[12].setPosition(54, 455);
	correctionCircles[12].setOutlineColor(sf::Color::Black);
	correctionCircles[12].setOutlineThickness(-1);

	correctionCircles[13].setRadius(6.f);
	correctionCircles[13].setPosition(54, 405);
	correctionCircles[13].setOutlineColor(sf::Color::Black);
	correctionCircles[13].setOutlineThickness(-1);

	correctionCircles[14].setRadius(6.f);
	correctionCircles[14].setPosition(54, 355);
	correctionCircles[14].setOutlineColor(sf::Color::Black);
	correctionCircles[14].setOutlineThickness(-1);

	correctionCircles[15].setRadius(6.f);
	correctionCircles[15].setPosition(54, 305);
	correctionCircles[15].setOutlineColor(sf::Color::Black);
	correctionCircles[15].setOutlineThickness(-1);

	correctionCircles[16].setRadius(6.f);
	correctionCircles[16].setPosition(54, 255);
	correctionCircles[16].setOutlineColor(sf::Color::Black);
	correctionCircles[16].setOutlineThickness(-1);

	correctionCircles[17].setRadius(6.f);
	correctionCircles[17].setPosition(54, 205);
	correctionCircles[17].setOutlineColor(sf::Color::Black);
	correctionCircles[17].setOutlineThickness(-1);

	correctionCircles[18].setRadius(6.f);
	correctionCircles[18].setPosition(54, 155);
	correctionCircles[18].setOutlineColor(sf::Color::Black);
	correctionCircles[18].setOutlineThickness(-1);

	correctionCircles[19].setRadius(6.f);
	correctionCircles[19].setPosition(54, 105);
	correctionCircles[19].setOutlineColor(sf::Color::Black);
	correctionCircles[19].setOutlineThickness(-1);

	correctionCircles[20].setRadius(6.f);
	correctionCircles[20].setPosition(35, 535);
	correctionCircles[20].setOutlineColor(sf::Color::Black);
	correctionCircles[20].setOutlineThickness(-1);

	correctionCircles[21].setRadius(6.f);
	correctionCircles[21].setPosition(35, 485);
	correctionCircles[21].setOutlineColor(sf::Color::Black);
	correctionCircles[21].setOutlineThickness(-1);

	correctionCircles[22].setRadius(6.f);
	correctionCircles[22].setPosition(35, 435);
	correctionCircles[22].setOutlineColor(sf::Color::Black);
	correctionCircles[22].setOutlineThickness(-1);

	correctionCircles[23].setRadius(6.f);
	correctionCircles[23].setPosition(35, 385);
	correctionCircles[23].setOutlineColor(sf::Color::Black);
	correctionCircles[23].setOutlineThickness(-1);

	correctionCircles[24].setRadius(6.f);
	correctionCircles[24].setPosition(35, 335);
	correctionCircles[24].setOutlineColor(sf::Color::Black);
	correctionCircles[24].setOutlineThickness(-1);

	correctionCircles[25].setRadius(6.f);
	correctionCircles[25].setPosition(35, 285);
	correctionCircles[25].setOutlineColor(sf::Color::Black);
	correctionCircles[25].setOutlineThickness(-1);

	correctionCircles[26].setRadius(6.f);
	correctionCircles[26].setPosition(35, 235);
	correctionCircles[26].setOutlineColor(sf::Color::Black);
	correctionCircles[26].setOutlineThickness(-1);

	correctionCircles[27].setRadius(6.f);
	correctionCircles[27].setPosition(35, 185);
	correctionCircles[27].setOutlineColor(sf::Color::Black);
	correctionCircles[27].setOutlineThickness(-1);

	correctionCircles[28].setRadius(6.f);
	correctionCircles[28].setPosition(35, 135);
	correctionCircles[28].setOutlineColor(sf::Color::Black);
	correctionCircles[28].setOutlineThickness(-1);

	correctionCircles[29].setRadius(6.f);
	correctionCircles[29].setPosition(35, 85);
	correctionCircles[29].setOutlineColor(sf::Color::Black);
	correctionCircles[29].setOutlineThickness(-1);

	correctionCircles[30].setRadius(6.f);
	correctionCircles[30].setPosition(54, 535);
	correctionCircles[30].setOutlineColor(sf::Color::Black);
	correctionCircles[30].setOutlineThickness(-1);

	correctionCircles[31].setRadius(6.f);
	correctionCircles[31].setPosition(54, 485);
	correctionCircles[31].setOutlineColor(sf::Color::Black);
	correctionCircles[31].setOutlineThickness(-1);

	correctionCircles[32].setRadius(6.f);
	correctionCircles[32].setPosition(54, 435);
	correctionCircles[32].setOutlineColor(sf::Color::Black);
	correctionCircles[32].setOutlineThickness(-1);

	correctionCircles[33].setRadius(6.f);
	correctionCircles[33].setPosition(54, 385);
	correctionCircles[33].setOutlineColor(sf::Color::Black);
	correctionCircles[33].setOutlineThickness(-1);

	correctionCircles[34].setRadius(6.f);
	correctionCircles[34].setPosition(54, 335);
	correctionCircles[34].setOutlineColor(sf::Color::Black);
	correctionCircles[34].setOutlineThickness(-1);

	correctionCircles[35].setRadius(6.f);
	correctionCircles[35].setPosition(54, 285);
	correctionCircles[35].setOutlineColor(sf::Color::Black);
	correctionCircles[35].setOutlineThickness(-1);

	correctionCircles[36].setRadius(6.f);
	correctionCircles[36].setPosition(54, 235);
	correctionCircles[36].setOutlineColor(sf::Color::Black);
	correctionCircles[36].setOutlineThickness(-1);

	correctionCircles[37].setRadius(6.f);
	correctionCircles[37].setPosition(54, 185);
	correctionCircles[37].setOutlineColor(sf::Color::Black);
	correctionCircles[37].setOutlineThickness(-1);

	correctionCircles[38].setRadius(6.f);
	correctionCircles[38].setPosition(54, 135);
	correctionCircles[38].setOutlineColor(sf::Color::Black);
	correctionCircles[38].setOutlineThickness(-1);

	correctionCircles[39].setRadius(6.f);
	correctionCircles[39].setPosition(54, 85);
	correctionCircles[39].setOutlineColor(sf::Color::Black);
	correctionCircles[39].setOutlineThickness(-1);
}