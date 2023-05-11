#include "Player.h"
#include <iostream>
#include "conio.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;
using namespace pl;


void Player::Move() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		// left key is pressed: move our character
		set_x_pos(get_x_pos() - 1);
		cout << get_x_pos() << "\t" << get_y_pos() << endl;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		set_x_pos(get_x_pos() + 1);
		cout << get_x_pos() << "\t" << get_y_pos() << endl;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		set_y_pos(get_y_pos() - 1);
		cout << get_x_pos() << "\t" << get_y_pos() << endl;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		set_y_pos(get_y_pos() + 1);
		cout << get_x_pos() << "\t" << get_y_pos() << endl;
	}
}

void Player::Print() {
	cout << "Works" << endl;
}
