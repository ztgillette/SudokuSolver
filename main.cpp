#include "board.h"

int main()
{
    // Create the main window
    int boardWidth = 2000;
    int boardHeight = 1600;
    sf::RenderWindow window(sf::VideoMode(boardWidth, boardHeight), "Sudoku");

    // Create new board
    Board board(&window, boardHeight);
    board.generateRandomBoard();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear(sf::Color(173, 216, 230));

        // Draw the sprite
        board.draw();

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}