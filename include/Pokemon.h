#pragma once
#include <string>
#include <unordered_map>
#include Move.h
#include <array>

class Pokemon {
	private:
		string name;
		unordered_map<string, int> stats;
		int level;
		array<Move, 4> moves;
		string type;
	public:
		Pokemon(const std::string& name, int level, unordered_map<string, int> stats, array<Move, 4> moves, string type);
		void perform_move(Move move);






}
