#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game {
	public:
		Game(); 
		~Game(); 

		void run(); 

	private: 
		void init(); 
		void mainLoop(); 
		void cleanup(); 

		sf::RenderWindow window; 
};

#endif // GAME_H
