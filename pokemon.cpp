#include <iostream>
using namespace std;

class Pokemon {
	public:
		string type1;
		string type2;
		string move1;
		string move2;
		string move3;
		string move4;
		string moves_list[4];
		Pokemon(string firstType, string secondType, string move1, string move2, string move3, string move4) 
		{
			type1 = firstType;
			type2 = secondType;
			moves_list[0] = move1;
			moves_list[1] = move2;
			moves_list[2] = move3;
			moves_list[3] = move4;
		}
		
		void setMaxHP(int maxHP) {
			max_hp = maxHP;
		}

		int getMaxHP() {
			return max_hp;
		}

		void setCurrentHP(int currentHP) {
			current_hp = currentHP;		
		}

		int getCurrentHP() {
			return current_hp;
		}

		void setAttack(int new_attack) {
			attack = new_attack;
		}

		int getAttack() {
			return attack;
		}

		void setDefense(int new_def) {
			defense = new_def;		
		}

		int getDefense() {
			return defense;
		}

		void setSpAttack(int new_sa) {
			spattack = new_sa;
		}

		int getSpAttack() {
			return spattack;
		}

		void setSpDefense(int new_sd) {
			spdefense = new_sd;
		}

		int getSpDefense() {
			return spdefense;
		}

		void setSpeed(int new_speed) {
			speed = new_speed;
		} 

		int getSpeed() {
			return speed;
		}

		void setNickname(string new_nm) {
			nickname = new_nm;
		}

		string getNickname() {
			return nickname;
		}

		void setSpecies(string new_species) {
			species = new_species;
		}

		string getSpecies() {
			return species;
		}
	private:
		string nickname;
		string species;
		int max_hp;
		int current_hp;
		int attack;
		int defense;
		int spattack;
		int spdefense;
		int speed;


};

int main() {
	Pokemon pikachu("Electric", "none", "Thundershock", "Quick Attack", "Volt Tackle", "Iron Tail");
	pikachu.setSpecies("Pikachu");
	pikachu.setMaxHP(30);
	pikachu.setCurrentHP(30);
	pikachu.setAttack(35);
	pikachu.setDefense(20);
	pikachu.setSpAttack(40);
	pikachu.setSpDefense(25);
	pikachu.setSpeed(50);
	pikachu.setNickname("Pika");
	cout << "Nickname: " << pikachu.getNickname() << endl;
	cout << "Species: " << pikachu.getSpecies() << endl;
	cout << "Type 1: " << pikachu.type1 << endl;
	if (pikachu.type2 != "none") {
		cout << "Type 2: " << pikachu.type2 << endl;
	}
	cout << "HP: " << pikachu.getCurrentHP() << " / " << pikachu.getMaxHP() << endl;
	cout << "Attack: " << pikachu.getAttack() << endl;
	cout << "Defense: " << pikachu.getDefense() << endl;
	cout << "Special Attack: " << pikachu.getSpAttack() << endl;
	cout << "Special Defense: " << pikachu.getSpDefense() << endl;
	cout << "Speed: " << pikachu.getSpeed() << endl;
	cout << "Moves: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << pikachu.moves_list[i] << endl;
	}
}
