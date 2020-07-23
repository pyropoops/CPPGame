//
// Created by saifs on 23/07/2020.
//

#include "Player.h"

Player::Player(RenderWindow *window, const char *texturePath) : texture(window->loadTexture(texturePath)), x(50.0),
                                                                y(50.0), currentFrame(), window(window) {
}

double Player::getX() { return x; }

double Player::getY() { return y; }

SDL_Rect Player::getCurrentFrame() { return currentFrame; }

void Player::render() {
    SDL_Rect dst;
    dst.x = x;
    dst.y = y;
    dst.w = currentFrame.w;
    dst.h = currentFrame.h;

    SDL_RenderCopy(window->getRenderer(), texture, &currentFrame, &dst);
}