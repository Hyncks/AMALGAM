#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::run() {
	init(); 
	mainLoop(); 
	cleanup(); 
}

void Game::init() {
	window.create(sf::VideoMode(800, 600), "AMALGAM"); 
	// Initialization code
}

void Game::mainLoop() {
	while (window.isOpen()) {
		sf::Event event; 
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close(); 
			}
		}
		window.clear();

		window.display();
	}
}

void Game::cleanup() {
	// Cleanup code
}