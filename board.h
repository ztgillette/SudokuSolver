//
// Created by Zach Gillette on 10/25/23.
//

#ifndef SFMLTUTORIAL_BOARD_H
#define SFMLTUTORIAL_BOARD_H

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Board {
public:
    explicit Board(sf::RenderWindow *win, float w=1550.0, sf::Color c=sf::Color::Blue);
    void draw();
    void generateRandomBoard();

private:

    //sfml
    sf::RenderWindow* window;

    //grid of numbers
    int grid[9][9];

    //dimensions
    float board_width;
    float heavy_line_width;
    float light_line_width;
    float square_width;

    //artistic
    sf::Color color;

};

#endif//SFMLTUTORIAL_BOARD_H
