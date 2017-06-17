include <pokeagb/pokeagb.h>
#include "battle_load.h"

#define FLAG 0x230

extern const struct CustomTrainerPokemon EnemyTeam[6] =
{
	{SPECIES_BULBASAUR, 8, 0, [0], ITEM_NONE, NATURE_HARDY, 0, 0, 0, 0, 0, 0}, /* i changed the struct */
	{SPECIES_IVYSAUR, 16, 1, 0, 0, 0, 0, ITEM_NONE, NATURE_LONELY, 0, 0, 0, 0, 0, 0},
	{SPECIES_VENUSAUR, 32, 2, 0, 0, 0, 0, ITEM_NONE, NATURE_BRAVE, 0, 0, 0, 0, 0, 0},
	{SPECIES_CHARMANDER, 8, 3, 0, 0, 0, 0, ITEM_NONE, NATURE_ADAMANT, 0, 0, 0, 0, 0, 0},
	{SPECIES_CHARMELEON, 16, 4, 0, 0, 0, 0, ITEM_NONE, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0},
	{SPECIES_CHARIZARD, 32, 5, 0, 0, 0, 0, ITEM_NONE, NATURE_BOLD, 0, 0, 0, 0, 0, 0}
};

void battle_load_hack(u16 trainerid) {
	u32 generated_pid;
	if ((flag_check(FLAG)) == true) {
		flag_set(FLAG);
		for (u8 i = 0; i < 6; i++) {
			do {
				generated_pid = rand() | (rand() << 0x10);
			} while (EnemyTeam[i].nature == (get_nature_from_pid(generated_pid)));
			pokemon_make_full(&party_opponent[i], EnemyTeam[i].species, EnemyTeam[i].level, EnemyTeam[i].ivs, true, generated_pid, 0, 0);
			for (u8 j = 0; j < 4; j++) {
				u16 move_thing = EnemyTeam[i].move[j];
				pokemon_setattr(&party_opponent[i], (REQUEST_MOVE1 + j), &move_thing);
			}
			pokemon_restore_pp(&party_opponent[i]);
		}
	}
}
