//
// Created by saifs on 23/07/2020.
//

#include "GameLoopHandler.h"
#include <SDL_events.h>

GameLoopHandler::GameLoopHandler() : deltaTime(0.0), running(false) {
}

void GameLoopHandler::start() {
    running = true;
    SDL_Event event;
    while (isRunning()) {
        EarlyUpdate();
        Update();
        LateUpdate();
        render();
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                stop();
            }
        }
    }
}

void GameLoopHandler::stop() {
    running = false;
}

bool GameLoopHandler::isRunning() const {
    return running;
}

void GameLoopHandler::EarlyUpdate() {
    // Initialize/Early Update - Usually called first. Place any initialization code needed before updating and drawing here.
}

void GameLoopHandler::Update() {
    // Main game loop update logic. Including: movement, AI, and animation updates
}

void GameLoopHandler::LateUpdate() {
    // Any logic relying on data calculations in the update method will go here. (i.e. collision logic)
}

void GameLoopHandler::render() {
    // Any drawing and rendering logic goes here.
}