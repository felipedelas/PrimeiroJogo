#pragma once
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
class Game {
private:
	void InicializarVariaveis();
	void InicializarJanela();
	sf::RenderWindow* window;
	sf::Event ev;
public:
	Game();//construtor
	virtual ~Game();//destrutor

	//fun�oes
	void update();
	void render();
	const bool running() const;
	void teste();
};