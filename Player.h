#pragma once
namespace pl {
	class Player
	{
	public:
		int get_x_pos() {
			return x_pos;
		}
		int get_y_pos() {
			return y_pos;
		}
		void set_x_pos(int pos) {
			x_pos = pos;
		}
		void set_y_pos(int pos) {
			y_pos = pos;
		}

		void Move();
		void Print();

	private:
		int x_pos = 100;
		int y_pos = 100;
	};
}
