#ifndef LOAD_POKEMON_H
#define LOAD_POKEMON_H

#include <pokeagb/pokeagb.h>

struct CustomTrainerPokemon {
	enum PokemonSpecies species;
	u8 level;
	u8 ivs;
	u16 move[4];
	enum Item held_item;
	enum PokemonNature nature;
	u8 ev[6];
};

struct PointerTableStruct {
	struct CustomTrainerPokemon *pkmn;
	u8 pokenumber;
};

#endif /* LOAD_POKEMON_H */
