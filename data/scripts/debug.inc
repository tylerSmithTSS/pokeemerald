Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_CheckWeekDay_Text:
	.string "Aaaaah, yes!\l"
	.string "{STR_VAR_1}s are made for dads!\l"
	.string "And dad's car!$"

Debug_CheatStart::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	givemon SPECIES_PELIPPER, 100, ITEM_CLEANSE_TAG
	setmonmove 0, 1, 19
	setmonmove 0, 2, 57
	givemon SPECIES_TREECKO, 20, ITEM_NONE
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	@ setflag FLAG_SYS_NATIONAL_DEX
	@ special EnableNationalPokedex
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
	setflag FLAG_RECEIVED_BIKE
	giveitem ITEM_MACH_BIKE
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setvar VAR_ROUTE116_STATE, 2
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	@ additem ITEM_MAX_REPEL, 10
	@ giveitem ITEM_EON_TICKET
	@ setflag FLAG_SYS_HAS_EON_TICKET
	@ setvar VAR_DISTRIBUTE_EON_TICKET, 0
	@ giveitem ITEM_MYSTIC_TICKET
	@ setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	@ setflag FLAG_RECEIVED_MYSTIC_TICKET
	@ giveitem ITEM_AURORA_TICKET
	@ setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	@ setflag FLAG_RECEIVED_AURORA_TICKET
	setflag FLAG_BADGE06_GET @ Badge for flying filed move
	@ setweather WEATHER_VOLCANIC_ASH
	@ doweather
	giveitem ITEM_WAILMER_PAIL
	setflag FLAG_RECEIVED_WAILMER_PAIL
	giveitem ITEM_POKEBLOCK_CASE
	setflag FLAG_RECEIVED_POKEBLOCK_CASE
	giveitem ITEM_DEVON_SCOPE
	setflag FLAG_RECEIVED_DEVON_SCOPE
	giveitem ITEM_HM01
	setflag FLAG_RECEIVED_HM01
	giveitem ITEM_HM02
	setflag FLAG_RECEIVED_HM02
	giveitem ITEM_HM03
	setflag FLAG_RECEIVED_HM03
	giveitem ITEM_HM04
	setflag FLAG_RECEIVED_HM04
	giveitem ITEM_HM05
	setflag FLAG_RECEIVED_HM05
	giveitem ITEM_HM06
	setflag FLAG_RECEIVED_HM06
	giveitem ITEM_HM07
	setflag FLAG_RECEIVED_HM07
	giveitem ITEM_HM08
	setflag FLAG_RECEIVED_HM08
	closemessage
	release
	end

Debug_Script_1::
	end

Debug_Script_2::
	end

Debug_Script_3::
	end

Debug_Script_4::
	end

Debug_Script_5::
	end

Debug_Script_6::
	end

Debug_Script_7::
	end

Debug_Script_8::
	end
