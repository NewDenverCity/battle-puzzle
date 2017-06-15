#include <pokeagb/pokeagb.h>
#include "battle_load.h"

#define FLAG 0x230

void battle_load_hack(u16 trainerid) {
	if ((flag_check(FLAG)) == true) {
		flag_set(FLAG);
		for (u8 i = 0; i < 6; i++) {
			do {
				u32 generated_pid = rand() | (rand << 0x10);
			} while (EnemyTeam->nature = (get_nature_from_pid(generated_pid)));
		}
	}
}

const struct CustomTrainerPokemon EnemyTeam =
{
	SPECIES_CHARMELEON, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, ITEM_NONE, NATURE_LONELY, 0, 0, 0, 0, 0, 0
};