# pragma once
# include <string>


class Item {
	public:
		Item(string name, string type, int effect_val);
		use_item(Item item);

	
	private:
		string name;
		string type;
		int effect_val;




}
