#pragma once
#include <string>

class Move {
	public:
		Move(string name, int ppnum, string move_category, enum move_type, int stage_dmg_val, string description);


	private:
		string name;
		int ppnum;
		string move_category;
		enum move_type;
		int stage_dmg_value;
		string description;
}
