subfloraEggRoom_MapScripts::
	.byte 0

subfloraGrotto_triggerEncounter::
	lockall
	faceplayer
	applymovement 1, subfloraGrotto_movement_pokemonSurprised
	waitmovement 1
	faceplayer

	msgbox subfloraGrotto_text_monAttacked, MSGBOX_AUTOCLOSE
	waitmessage
	
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
	switch VAR_RESULT
	case 0, subfloraGrotto_glirub
	case 1, subfloraGrotto_glirub
	case 2, subfloraGrotto_salivolt
	case 3, subfloraGrotto_salivolt
	case 4, subfloraGrotto_ursquish
	case 5, subfloraGrotto_ursquish
	case 6, subfloraGrotto_coofoal
	case 7, subfloraGrotto_coofoal
	case 8, subfloraGrotto_icopod
	case 9, subfloraGrotto_icopod
	end

subfloraGrotto_glirub::
	setwildbattle SPECIES_GLIRUB 7
	goto subfloraGrotto_battleOutcome
	end

subfloraGrotto_salivolt::
	setwildbattle SPECIES_SALIVOLT 7
	goto subfloraGrotto_battleOutcome
	end

subfloraGrotto_ursquish::
	setwildbattle SPECIES_TEDDIURSA 7
	goto subfloraGrotto_battleOutcome
	end

subfloraGrotto_coofoal::
	setwildbattle SPECIES_COOFOAL 7
	goto subfloraGrotto_battleOutcome
	end

subfloraGrotto_icopod::
	setwildbattle SPECIES_ICOPOD 7
	goto subfloraGrotto_battleOutcome
	end

subfloraGrotto_battleOutcome::
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, subfloraGrotto_pokemonFled
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, subfloraGrotto_pokemonFled
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, subfloraGrotto_pokemonCaught

subfloraGrotto_pokemonFled::
	msgbox subfloraGrotto_text_monFled, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

subfloraGrotto_pokemonCaught::
	releaseall
	end

subfloraGrotto_movement_pokemonSurprised::
	emote_exclamation_mark
	delay_16
	jump_in_place_up
	delay_4
	jump_in_place_right
	delay_4
	jump_in_place_down
	delay_4
	jump_in_place_left
	delay_4
	step_end

subfloraGrotto_text_monAttacked::
	.string "The Pokémon attacked!$"

subfloraGrotto_text_monFled::
	.string "The Pokémon fled…\p"
	.string "You don't think you'll see it again.$"
