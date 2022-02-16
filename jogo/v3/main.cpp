#include <iostream>
#include "Game.h"

/*--------------------------------------------------------------------------------------------*/

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Primeiro Jogo");   
    sf::Event ev;
    
    //Loop do jogo
    while (window.isOpen())
    {
        while (window.pollEvent(ev)) {
            switch (ev.type)
            {
            case sf::Event::Closed:window.close(); break;
            case sf::Event::KeyPressed:
                if (ev.key.code == sf::Keyboard::Escape)
                {
                    window.close(); break;
                }

            }

            //Update
            //Renderizar
            window.clear(sf::Color::Red);//Limpa o frame antigo
            window.display();//Desenha o jogo
        }
    }



    return 0;
}