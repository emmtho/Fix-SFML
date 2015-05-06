#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
	Game g;
	int capGuessBoxes = 10;
	sf::RenderWindow window(sf::VideoMode(350, 650), "Mastermind");
	sf::CircleShape c1(10.f);
	sf::CircleShape c2(10.f);
	sf::CircleShape c3(10.f);
	sf::CircleShape c4(10.f);
	sf::RectangleShape correctionBox[10];
	sf::CircleShape circleAnswers[40];
	sf::RectangleShape guessBoxes[10];
	sf::CircleShape correctionCircles[40];

	sf::RectangleShape rectangle;
	sf::RectangleShape rectangleBlack;
	sf::RectangleShape colorBox;
	

	sf::Text text;


	g.setPlayersName("Emma");
	text.setPosition(10, 600);
	text.setString(g.getPlayersName());
	text.setColor(sf::Color::Black);

	rectangle.setSize(sf::Vector2f(245, 50));
	rectangle.setPosition(75, 0);
	rectangle.setOutlineColor(sf::Color::Black);
	rectangle.setOutlineThickness(-1);

	rectangleBlack.setSize(sf::Vector2f(245, 50));
	rectangleBlack.setPosition(75, 0);
	rectangleBlack.setFillColor(sf::Color::Black);

	colorBox.setSize(sf::Vector2f(245, 50));
	colorBox.setPosition(75, 600);
	colorBox.setOutlineColor(sf::Color::Black);
	colorBox.setOutlineThickness(-1);


	c1.setFillColor(sf::Color::Red);
	c1.setPosition(105, 615);

	c2.setFillColor(sf::Color::Blue);
	c2.setPosition(160, 615);

	c3.setFillColor(sf::Color::Green);
	c3.setPosition(210, 615);

	c4.setFillColor(sf::Color::Yellow);
	c4.setPosition(265, 615);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(168, 177, 181));

		window.draw(rectangle);
		window.draw(rectangleBlack);
		window.draw(colorBox);

		g.showGuessBoxes(guessBoxes);
		g.showCorrectionBox(correctionBox);
		g.showAnswerCircles(circleAnswers);
		g.showCorrectionCircles(correctionCircles);

		for (int i = 0; i < capGuessBoxes; i++){
			window.draw(guessBoxes[i]);
		}

		for (int i = 0; i < capGuessBoxes; i++){
			window.draw(correctionBox[i]);
		}

		for (int i = 0; i < 40; i++){
			window.draw(circleAnswers[i]);
		}

		for (int i = 0; i < 40; i++){
			window.draw(correctionCircles[i]);
		}

		window.draw(text);
		window.draw(c1);
		window.draw(c2);
		window.draw(c3);
		window.draw(c4);
		window.display();
	}

	g.setColors(0,0, "Red", "Yellow", "Yellow", "Blue");
	int lastAnswer = 1;
	while (g.getColors(0) != g.getColors(lastAnswer), lastAnswer++){
		//Man klickar fram fyra färger. 
		//De sätts i den ordningen man klickat på dom i guess rutorna
		//Man sätter dom i arrayn.
		
		//while-lopen börjar om.
		int answer = 0;
		if (sf::Mouse::getPosition(window).x > c1.getGlobalBounds().left
			&& sf::Mouse::getPosition(window).x < c1.getGlobalBounds().left
			+ c1.getGlobalBounds().width &&
			sf::Mouse::getPosition(window).y > c1.getGlobalBounds().top
			&& sf::Mouse::getPosition(window).y < c1.getGlobalBounds().top
			+ c1.getGlobalBounds().height
			&& sf::Mouse::isButtonPressed(sf::Mouse::Left)
		){
			g.setFilledColor(answer, c1.getFillColor());
			answer++;
		}
		if (sf::Mouse::getPosition(window).x > c2.getGlobalBounds().left
			&& sf::Mouse::getPosition(window).x < c2.getGlobalBounds().left
			+ c2.getGlobalBounds().width &&
			sf::Mouse::getPosition(window).y > c2.getGlobalBounds().top
			&& sf::Mouse::getPosition(window).y < c2.getGlobalBounds().top
			+ c2.getGlobalBounds().height
			&& sf::Mouse::isButtonPressed(sf::Mouse::Left)
			){
			g.setFilledColor(answer, c1.getFillColor());
			answer++;
		}
		if (sf::Mouse::getPosition(window).x > c3.getGlobalBounds().left
			&& sf::Mouse::getPosition(window).x < c3.getGlobalBounds().left
			+ c3.getGlobalBounds().width &&
			sf::Mouse::getPosition(window).y > c3.getGlobalBounds().top
			&& sf::Mouse::getPosition(window).y < c3.getGlobalBounds().top
			+ c3.getGlobalBounds().height
			&& sf::Mouse::isButtonPressed(sf::Mouse::Left)
			){
			g.setFilledColor(answer, c1.getFillColor());
			answer++;
		}
		if (sf::Mouse::getPosition(window).x > c4.getGlobalBounds().left
			&& sf::Mouse::getPosition(window).x < c4.getGlobalBounds().left
			+ c4.getGlobalBounds().width &&
			sf::Mouse::getPosition(window).y > c4.getGlobalBounds().top
			&& sf::Mouse::getPosition(window).y < c4.getGlobalBounds().top
			+ c4.getGlobalBounds().height
			&& sf::Mouse::isButtonPressed(sf::Mouse::Left)
			){
			g.setFilledColor(answer, c1.getFillColor());
			answer++;
		}
	}

	

	return 0;
}