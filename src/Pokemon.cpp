#pragma once
#include <Pokemon.h>

Pokemon::Pokemon(const std::string& name, int level, unordered_map<string, int> stats, array<Move, 4> moves);

void perform_move(Move move) {
	if move.move_category == "physical":



}
