//
// Created by saifs on 23/07/2020.
//

#ifndef GAME_GAMELOOPHANDLER_H
#define GAME_GAMELOOPHANDLER_H


class GameLoopHandler {
public:
    GameLoopHandler();
    void EarlyUpdate();
    void Update();
    void LateUpdate();
    void render();
    void start();
    void stop();
    bool isRunning() const;
private:
    long deltaTime;
    bool running;
};


#endif //GAME_GAMELOOPHANDLER_H
