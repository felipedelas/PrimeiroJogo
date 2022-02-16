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
public:
	Game();//construtor
	virtual ~Game();//destrutor

	//funçoes
	void update();
	void render();
};