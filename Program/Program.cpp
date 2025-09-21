#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
    Game game;

    while (game.State())
    {
        game.Input();
        game.Update();
        game.Render();
    }

    return 0;
}

