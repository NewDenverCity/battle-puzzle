#include <pokeagb/pokeagb.h>
#include "battle_load.h"
#include "trainers.h"

#define FLAG 0x230

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
			for (u8 j = 0; j < 6; j++) {
				u8 ev_set = EnemyTeam[i].ev[j];
				pokemon_setattr(&party_opponent[i], (REQUEST_HP_EV + j), &ev_set);
			}
			recalculate_stats(&party_opponent[i]);
		}
	}
}
