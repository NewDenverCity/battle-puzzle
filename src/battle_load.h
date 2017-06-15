#ifndef LOAD_POKEMON_H
#define LOAD_POKEMON_H

#include <pokeagb/pokeagb.h>

struct CustomTrainerPokemon {
	enum PokemonSpecies species;
	u8 level;
	u8 ivs;
	u16 attack1;
	u16 attack2;
	u16 attack3;
	u16 attack4;
	u8 pp1;
	u8 pp2;
	u8 pp3;
	u8 pp4;
	enum Item held_item;
	enum PokemonNature nature;
	u8 hpev;
	u8 atkev;
	u8 defev;
	u8 speev;
	u8 spatkev;
	u8 spdefev;
};

#endif /* LOAD_POKEMON_H */
