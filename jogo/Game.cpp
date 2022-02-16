#include "Game.h"

void Game::InicializarVariaveis()
{
	this->window = nullptr;
}

void Game::InicializarJanela()
{
	this->window = new sf::RenderWindow(sf::VideoMode(500, 500), "Primeiro Jogo");
}

Game::Game()
{
	this->InicializarVariaveis();
	this->InicializarJanela();
}

Game::~Game()
{
	delete this->window;
}

void Game::update()
{
}

void Game::render()
{
}

const bool Game::running() const
{
	return this->window->isOpen();
}

void Game::teste()
{
}
