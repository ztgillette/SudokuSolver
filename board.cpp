//
// Created by Zach Gillette on 10/25/23.
//

#ifndef SFMLTUTORIAL_BOARD_CPP
#define SFMLTUTORIAL_BOARD_CPP

#include "board.h"
#include <random>

Board::Board(sf::RenderWindow* win, float w, sf::Color c) : window(win), board_width(w-100), light_line_width(1.0), heavy_line_width(4.0), color(c) {

    for(int i=0;i<9;++i) {
        for(int j=0;j<9;++j) {
            // -1 value means cell is empty, 1-9 are normal digits
            grid[i][j] = -1;
        }
    }

    square_width = (board_width - (4*heavy_line_width + 6*light_line_width))/9;

}

void Board::draw() {

    sf::RectangleShape background(sf::Vector2f(board_width, board_width));
    background.setFillColor(sf::Color::Green);
    background.setPosition(50.f, 50.f);

    //draw the squares
    for(int i=0;i<9;++i) {
        for(int j=0;j<9;++j) {
            //rip gonna have to make a square class
        }
    }


    (*window).draw(background);

}

void Board::generateRandomBoard() {

    for(int i=0;i<9;++i) {
        for(int j=0;j<9;++j) {
            //odds a given square has a value or not
            std::default_random_engine engine(std::random_device{}());
            std::uniform_int_distribution<int> distribution(1, 30);
            int random_integer = distribution(engine);

            if(random_integer > 9 || random_integer < 1) random_integer = -1;
            grid[i][j] = random_integer;
        }
    }
}

#endif//SFMLTUTORIAL_BOARD_CPP


