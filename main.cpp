#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace pl;
using namespace sf;

int main() {

	RenderWindow window(VideoMode(1000, 500), "SFML works");
;
	RectangleShape shape;

	Player player;

	shape.setSize(Vector2f(50,100));
	shape.setFillColor(Color::Red);
	
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		//Close button click checking
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		player.Move();


		shape.setPosition(player.get_x_pos(), player.get_y_pos());


		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}