#pragma once
#include <string>




class Trainer {
	public:
		Trainer(string name, int num_pokes, char[] poke_list);
		send_pokemon(Pokemon &new_poke);
		callback_pokemon(Pokemon &field_poke);
		action(string action); // Use item, fight (no flee)
				       // Fight should go into pokemons moves

	private:
		string name;
		int num_pokes;
		char[] poke_list;
};
