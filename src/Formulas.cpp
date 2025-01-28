#pragma once
#include <../include/formulas.h>
#include <../include/typechart.h>
#include <cmath>
#include <random>
#include <map>
#include <string>
using namespace std;



int calc_rand() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distrib(217, 255);
	return distrib(gen) / 255;

}
float damage_calc(Pokemon& poke, Move& move, Pokemon& target) {
//	Used Gen 1s DMG Calc for simplicity
	
	static const std::map<std::pair<std::string, std::string>, float> typechart = getTypeChart();
	float STAB = (poke.type1 == move.move_type || poke.type2 == move.move_type) ? 1.5f : 1.0f;
	float A_D = 0.0f;
	float level_factor = ((2.0f * poke.level) / 5.0f) + 2.0f;

	if (move.move_category == "Physical") {
		A_D = poke.stats["Attack"] / target.stats["Defense"];
	}
	else {
		A_D = poke.stats["Special Attack"] / target.stats["Special Defense"];
	}

	float effect = get_effectiveness(move, target, typechart);
	float base_dmg = level_factor * move.stage_dmg_value * A_D;
	float final_dmg_calc = ((base_dmg / 50) + 2) * STAB * calc_rand() * effect;	
	return final_dmg_calc;


}

// Check if move is buff in battle before calling
void buff_calc(Pokemon& poke, Move& move) {
	float buff = 1.0f + (0.5f * move.stage_dmg_value);
	if (move.buff_type == "Attack") {
		poke.stats["Attack"] *= buff;
	} else if (move.buff_type == "Defense") {
		poke.stats["Defense"] *= buff;
	} else if (move.buff_type == "Special Attack") {
		poke.stats["Special Attack"] *= buff;
	} else if (move.buff_type == "Special Defense") {
		poke.stats["Special Defense"] *= buff;
	} else {
		poke.stats["Speed"] *= buff;
	}
}

float get_effectiveness(Move& move, Pokemon& target, std::map<std::pair<string, string>, float> typechart) {
	float effect_1 = typechart[{move.type, target.type1}];
	float effect_2 = (!target.type2.empty()) ? typechart[{move.type, target.type2}] : 1.0f;

	return effect_1 * effect_2;


} 
	


	
