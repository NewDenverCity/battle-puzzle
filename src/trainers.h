#ifndef trainers_h
#define trainers_h

#include <pokeagb/pokeagb.h>
#include "battle_load.h"

const struct CustomTrainerPokemon EnemyTeam[6] = 
{
    {SPECIES_BULBASAUR, 8, 0, {0, 0, 0, 0}, ITEM_NONE, NATURE_HARDY, {0, 0, 0, 0, 0, 0}},
    {SPECIES_IVYSAUR, 16, 1, {0, 0, 0, 0}, ITEM_NONE, NATURE_LONELY, {0, 0, 0, 0, 0, 0}},
    {SPECIES_VENUSAUR, 32, 2, {0, 0, 0, 0}, ITEM_NONE, NATURE_BRAVE, {0, 0, 0, 0, 0, 0}},
    {SPECIES_CHARMANDER, 8, 3, {0, 0, 0, 0}, ITEM_NONE, NATURE_ADAMANT, {0, 0, 0, 0, 0, 0}},
    {SPECIES_CHARMELEON, 16, 4, {0, 0, 0, 0}, ITEM_NONE, NATURE_NAUGHTY, {0, 0, 0, 0, 0, 0}},
    {SPECIES_CHARIZARD, 32, 5, {0, 0, 0, 0}, ITEM_NONE, NATURE_BOLD, {0, 0, 0, 0, 0, 0}}
};

const struct CustomTrainerPokemon Team1[1] = 
{
    {SPECIES_BULBASAUR, 8, 0, {0, 0, 0, 0}, ITEM_NONE, NATURE_HARDY, {0, 0, 0, 0, 0, 0}}
};

const struct CustomTrainerPokemon Team2[2] =
{
    {SPECIES_BULBASAUR, 8, 0, {0, 0, 0, 0}, ITEM_NONE, NATURE_HARDY, {0, 0, 0, 0, 0, 0}},
    {SPECIES_IVYSAUR, 16, 1, {0, 0, 0, 0}, ITEM_NONE, NATURE_LONELY, {0, 0, 0, 0, 0, 0}}
};

const struct PointerTableStruct PointerTable[2] = 
{
	{Team1, 1},
	{Team2, 2}
};

#endif /* trainers_h */
