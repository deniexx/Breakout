#pragma once

#include "SFML/Graphics/Color.hpp"

// implemented powerups
enum POWERUPS
{
    bigPaddle,
    smallPaddle,
    fastBall,
    slowBall,
    fireBall,
    none
};

// Window settings
constexpr unsigned int WINDOW_WIDTH = 800;
constexpr unsigned int WINDOW_HEIGHT = 600;
constexpr const char* WINDOW_TITLE = "Game";

// Paddle settings
constexpr float PADDLE_WIDTH = 150.0f;
constexpr float PADDLE_HEIGHT = 20.0f;
constexpr float PADDLE_SPEED = 300.0f;

// Ball settings
constexpr float BALL_RADIUS = 10.0f;
constexpr float BALL_SPEED = 400.0f;

// Brick settings
constexpr float BRICK_WIDTH = 75.0f;
constexpr float BRICK_HEIGHT = 20.0f;
constexpr float BRICK_PADDING = 5.0f;
constexpr int BRICK_ROWS = 5;
constexpr int BRICK_COLUMNS = 10;

// Power-up settings
constexpr float POWERUP_RADIUS = 15.0f;
constexpr float POWERUP_SPEED = 150.0f;

// UI settings
constexpr float UI_LIFE_RADIUS = 15.0f;
constexpr float UI_LIFE_PADDING = 20.0f;

// Other game settings
constexpr float PAUSE_TIME_BUFFER = 0.5f;
constexpr float POWERUP_FREQUENCY = 7.5f;
constexpr int INITIAL_LIVES = 3;

// Colour Palette
const sf::Color ballEffectsColour = sf::Color(100, 100, 200, 255); // blue-ish?
const sf::Color paddleEffectsColour = sf::Color(255, 250, 205); // lemon chiffon -- very fancy.
const sf::Color extraBallEffectsColour = sf::Color(41, 110, 1); // metallic green

// Network settings
constexpr short SCORE_UPDATE = 121;
constexpr short SCORE_REQUEST = 122;
constexpr short SCORE_RESULT = 123;

constexpr unsigned short PORT = 28000;
constexpr const char SERVER_IP[] = "127.0.0.1";

typedef std::pair<std::string, int> LeaderboardEntry;


