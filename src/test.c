#include <pokeagb/pokeagb.h>

u8 main_thing() {
	u32 i = rand();
	u8 nature = get_nature_from_pid(i);
	return nature;
};