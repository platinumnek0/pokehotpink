# 1 "data/maps/beaston_pokemonLab/scripts.pory"

# 2 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_pokemonLab_MapScripts::
# 3 "data/maps/beaston_pokemonLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, beaston_lab_onWarp
# 4 "data/maps/beaston_pokemonLab/scripts.pory"
	.byte 0
# 5 "data/maps/beaston_pokemonLab/scripts.pory"

# 6 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_onWarp::
# 7 "data/maps/beaston_pokemonLab/scripts.pory"
    map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, beaston_lab_Intro
# 8 "data/maps/beaston_pokemonLab/scripts.pory"
    .2byte 0

beaston_lab_notebooks1::
# 12 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 13 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks1_Text_0, MSGBOX_YESNO
# 14 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_rubber
# 15 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_rubber::
# 18 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_rubber_Text_0
# 19 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_notebooks_close
	return


beaston_lab_notebooks2::
# 23 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 24 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks2_Text_0, MSGBOX_YESNO
# 25 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_evo_croconut
# 26 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
# 27 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_notebooks_evo_croconut::
# 30 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_evo_croconut_Text_0, MSGBOX_YESNO
# 31 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_evo_skrappup
# 32 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_evo_skrappup::
# 35 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_evo_skrappup_Text_0, MSGBOX_YESNO
# 36 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_evo_kitfisk
# 37 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_evo_kitfisk::
# 40 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_evo_kitfisk_Text_0
# 41 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_notebooks_close
	return


beaston_lab_notebooks_close::
# 44 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_close_Text_0
# 45 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_notebooks3::
# 49 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 50 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks3_Text_0, MSGBOX_YESNO
# 51 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_nullType
# 52 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_nullType::
# 55 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_nullType_Text_0
# 56 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_notebooks_close
	return


beaston_lab_Intro::
# 60 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 61 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 62 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 63 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp
# 64 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 65 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_lookAround
# 66 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 67 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_Intro_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 69 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_standAround
# 70 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 71 "data/maps/beaston_pokemonLab/scripts.pory"
	release
# 72 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 75 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp:
# 76 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 76 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 76 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 76 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_lookAround:
# 80 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_right
# 81 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 82 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 83 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 84 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
# 85 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 86 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
# 87 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_8
# 88 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 90 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_standAround:
# 91 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 91 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 92 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_quigley_dialogue::
# 96 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq beaston_lab_quigley_dialogue_1
# 104 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_dialogue_Text_1, MSGBOX_NPC
	return

beaston_lab_quigley_dialogue_1:
# 98 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_dialogue_Text_0, MSGBOX_NPC
# 99 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 100 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, lookDown
	return


beaston_lab_quigley_stopExit_left::
# 109 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 110 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 111 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 113 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_left
# 114 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 115 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 116 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 117 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_left
# 118 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 119 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 120 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_quigley_stopExit_middle::
# 123 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 124 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 125 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 127 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_middle
# 128 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 129 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 130 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 131 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_middle
# 132 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 133 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 134 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_quigley_stopExit_right::
# 137 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 138 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 139 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 141 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_right
# 142 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 143 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 144 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 145 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_right
# 146 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 147 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 148 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 150 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_left:
# 151 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 151 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 151 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 151 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 153 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_middle:
# 154 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 155 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 155 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 155 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 155 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 157 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_right:
# 158 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 158 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 159 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 159 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 159 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 159 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_left:
# 162 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 162 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 162 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 162 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 163 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 165 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_middle:
# 166 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 166 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 166 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 166 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 167 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 168 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 170 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_right:
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 172 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 172 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 173 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_pokeballs_left::
# 177 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 178 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, beaston_lab_croconut
# 179 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 180 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, beaston_lab_player_comeAround_left_side
# 181 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_left_top
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_pokeballs_middle::
# 185 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 186 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, beaston_lab_skrappup
# 187 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 188 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, beaston_lab_player_comeAround_middle_bottom
# 189 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_middle_top
# 190 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_pokeballs_right::
# 193 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 194 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, beaston_lab_kitfisk
# 195 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 196 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, beaston_lab_player_comeAround_right_bottom
# 197 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, beaston_lab_player_comeAround_right_side
# 198 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_right_top
# 199 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_professor_intro::
# 203 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_intro_Text_0, MSGBOX_YESNO
# 204 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_professor_help_no
# 205 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_intro_Text_1
# 206 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_starter_choice
	return


beaston_lab_professor_help_no::
# 209 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_help_no_Text_0, MSGBOX_AUTOCLOSE
# 210 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 211 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_starter_choice
	return


beaston_lab_professor_starter_choice::
# 214 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_0
# 215 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_moveAway
# 216 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_1
# 217 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 218 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 219 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 221 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 223 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_moveAway:
# 224 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 224 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 225 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 226 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 228 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_shuffle:
# 229 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
# 229 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_professor_appear::
# 233 "data/maps/beaston_pokemonLab/scripts.pory"
	clearflag FLAG_UNUSED_0x024
# 234 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 235 "data/maps/beaston_pokemonLab/scripts.pory"
	addobject 5
# 236 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_DOOR
# 237 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_walkUp
# 238 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 239 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_faceDown
# 240 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_appear_Text_0, MSGBOX_AUTOCLOSE
# 241 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 242 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_frantic
# 243 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 244 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_appear_Text_1, MSGBOX_AUTOCLOSE
# 245 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
	return


# 247 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_walkUp:
# 248 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 248 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 248 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 248 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 248 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 249 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 250 "data/maps/beaston_pokemonLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 252 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_frantic:
# 253 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
# 254 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 255 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_right
# 256 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 257 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_player_comeAround_left_side::
# 261 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_left_side
# 262 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 264 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_left_side:
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 266 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 266 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 267 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_left_top::
# 270 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_left_top
# 271 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 273 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_left_top:
# 274 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 275 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 275 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 275 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 276 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 276 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 277 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_middle_bottom::
# 280 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_middle_bottom
# 281 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 283 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_middle_bottom:
# 284 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_middle_top::
# 287 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_middle_top
# 288 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 290 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_middle_top:
# 291 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 291 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 292 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 292 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 292 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 293 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 293 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 294 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_right_bottom::
# 297 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_bottom
# 298 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 300 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_bottom:
# 301 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 302 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_right_side::
# 305 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_side
# 306 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 308 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_side:
# 309 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 310 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 310 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 311 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_right_top::
# 314 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_top
# 315 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 317 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_top:
# 318 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 319 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 319 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 320 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 320 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 321 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 323 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_faceDown:
# 324 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_croconut::
# 328 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 329 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_CROCONUT, 10, 3
# 330 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_CROCONUT, CRY_MODE_NORMAL
# 331 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_croconut_Text_0
# 332 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_croconut_Text_1, MSGBOX_YESNO
# 333 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_croconut
# 334 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 335 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_croconut::
# 338 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 339 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_croconut_Text_0, MSGBOX_AUTOCLOSE
# 340 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 341 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_CROCONUT, 5
# 342 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 343 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 344 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 345 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 346 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 347 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_croconut_Text_1, MSGBOX_AUTOCLOSE
# 348 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 349 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 350 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, beaston_lab_choseCroconut_WalkAroundLeft
# 351 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseCroconut_WalkAroundTop
# 352 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 353 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_croconut
# 354 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 355 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 356 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 357 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveCroconut
# 358 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 359 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 360 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 361 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 362 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


beaston_lab_skrappup::
# 365 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 366 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_SKRAPPUP, 10, 3
# 367 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_SKRAPPUP, CRY_MODE_NORMAL
# 368 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_skrappup_Text_0
# 369 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_skrappup_Text_1, MSGBOX_YESNO
# 370 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_skrappup
# 371 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 372 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_skrappup::
# 375 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 376 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_skrappup_Text_0, MSGBOX_AUTOCLOSE
# 377 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 378 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_SKRAPPUP, 5
# 379 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 380 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 381 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 382 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 383 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 384 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_skrappup_Text_1, MSGBOX_AUTOCLOSE
# 385 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 386 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 387 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseSkrappup_WalkAroundTop
# 388 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 389 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_skrappup
# 390 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 391 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 392 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 393 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveSkrappup
# 394 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 395 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 396 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 397 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 398 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


beaston_lab_kitfisk::
# 401 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 402 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_KITFISK, 10, 3
# 403 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_KITFISK, CRY_MODE_NORMAL
# 404 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_kitfisk_Text_0
# 405 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_kitfisk_Text_1, MSGBOX_YESNO
# 406 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_kitfisk
# 407 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 408 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_kitfisk::
# 411 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 412 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_kitfisk_Text_0, MSGBOX_AUTOCLOSE
# 413 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 414 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_KITFISK, 5
# 415 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 416 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 417 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 418 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 419 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 420 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_kitfisk_Text_1, MSGBOX_AUTOCLOSE
# 421 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 422 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 423 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, beaston_lab_choseKitfisk_WalkAroundRight
# 424 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseKitfisk_WalkAroundTop
# 425 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 426 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_kitfisk
# 427 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 428 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 429 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 430 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveKitfisk
# 431 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 432 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 433 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 434 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 435 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


# 438 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseCroconut_facingRight:
# 439 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 439 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 440 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 442 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseCroconut_facingDown:
# 443 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 444 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 444 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 445 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 447 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseSkrappup_facingDown:
# 448 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 448 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 449 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 449 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 450 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 450 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

# 452 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseKitfisk_facingLeft:
# 453 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 453 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 454 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

# 456 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseKitfisk_facingDown:
# 457 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 458 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 458 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 459 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

beaston_lab_choseCroconut_WalkAroundLeft::
# 463 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseCroconut_facingRight
# 464 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseCroconut_WalkAroundTop::
# 467 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseCroconut_facingDown
# 468 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseSkrappup_WalkAroundTop::
# 471 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseSkrappup_facingDown
# 472 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseKitfisk_WalkAroundRight::
# 475 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseKitfisk_facingLeft
# 476 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseKitfisk_WalkAroundTop::
# 479 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseKitfisk_facingDown
# 480 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_nicknameStarter::
# 484 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lookDown
# 485 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_nicknameStarter_Text_0, MSGBOX_YESNO
# 486 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq beaston_lab_nicknameStarter_2
# 491 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq beaston_lab_nicknameStarter_3
beaston_lab_nicknameStarter_1:
# 495 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
# 496 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_battleSetup
	return

beaston_lab_nicknameStarter_2:
# 488 "data/maps/beaston_pokemonLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 489 "data/maps/beaston_pokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto beaston_lab_nicknameStarter_1

beaston_lab_nicknameStarter_3:
# 493 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_nicknameStarter_Text_1, MSGBOX_AUTOCLOSE
	goto beaston_lab_nicknameStarter_1


# 499 "data/maps/beaston_pokemonLab/scripts.pory"
lookDown:
# 500 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_battleSetup::
# 504 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_0, MSGBOX_AUTOCLOSE
# 505 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_frantic
# 506 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 507 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, playerSurprise
# 508 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_1, MSGBOX_AUTOCLOSE
# 509 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 510 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 511 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_2, MSGBOX_AUTOCLOSE
# 512 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 513 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 514 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_3
# 515 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 516 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 517 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_4
	return


# 520 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_shuffle:
# 521 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 521 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 524 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_croconut:
# 525 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 526 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 528 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_skrappup:
# 529 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 530 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 530 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 532 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_kitfisk:
# 533 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 534 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 534 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 534 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 537 "data/maps/beaston_pokemonLab/scripts.pory"
look_left:
# 538 "data/maps/beaston_pokemonLab/scripts.pory"
	face_left
	step_end

# 540 "data/maps/beaston_pokemonLab/scripts.pory"
look_down:
# 541 "data/maps/beaston_pokemonLab/scripts.pory"
	face_down
	step_end

# 543 "data/maps/beaston_pokemonLab/scripts.pory"
look_right:
# 544 "data/maps/beaston_pokemonLab/scripts.pory"
	face_right
	step_end

beaston_lab_quigleyBattle::
# 548 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 549 "data/maps/beaston_pokemonLab/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, beaston_lab_quigleyBattle_Text_0, beaston_lab_quigleyBattle_Text_1, beaston_lab_PostQuigleyBattle
	return


beaston_lab_PostQuigleyBattle::
# 552 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 553 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_down
# 554 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_PostQuigleyBattle_Text_0, MSGBOX_AUTOCLOSE
# 555 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 556 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 557 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_PostQuigleyBattle_Text_1, MSGBOX_AUTOCLOSE
# 558 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
	return


# 561 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveCroconut:
# 562 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 562 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 562 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 563 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 565 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveSkrappup:
# 566 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 566 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 566 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 568 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveKitfisk:
# 569 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 570 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 571 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 571 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 573 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leave:
# 574 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 574 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 574 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_cokbern_AfterBattle::
# 578 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 579 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 1
# 580 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 581 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_EXIT
# 582 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 583 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 584 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 585 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_1, MSGBOX_AUTOCLOSE
# 586 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 587 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_headToDesk
# 588 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 589 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_2, MSGBOX_AUTOCLOSE
# 590 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq beaston_lab_cokbern_AfterBattle_2
beaston_lab_cokbern_AfterBattle_1:
# 607 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq beaston_lab_cokbern_AfterBattle_5
beaston_lab_cokbern_AfterBattle_4:
# 624 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq beaston_lab_cokbern_AfterBattle_8
beaston_lab_cokbern_AfterBattle_7:
# 641 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 5
# 642 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 643 "data/maps/beaston_pokemonLab/scripts.pory"
	addobject 6
# 644 "data/maps/beaston_pokemonLab/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
# 645 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return

beaston_lab_cokbern_AfterBattle_2:
# 592 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 593 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 594 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 595 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 596 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 597 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 598 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 599 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 600 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 601 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 602 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 603 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 604 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_center
# 605 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
	goto beaston_lab_cokbern_AfterBattle_1

beaston_lab_cokbern_AfterBattle_5:
# 609 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 610 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 611 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 612 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 613 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 614 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 615 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabTwoLeft
# 616 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 617 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 618 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 619 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 620 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 621 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_left
# 622 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
	goto beaston_lab_cokbern_AfterBattle_4

beaston_lab_cokbern_AfterBattle_8:
# 626 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabTwoLeft
# 627 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 628 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 629 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 630 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 631 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 632 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 633 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 634 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 635 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 636 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 637 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 638 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_left
# 639 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
	goto beaston_lab_cokbern_AfterBattle_7


# 648 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_headToDesk:
# 649 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 649 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 650 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 650 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 650 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 650 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 651 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
	step_end

beaston_lab_cokbern_idle::
# 655 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 656 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_idle_Text_0, MSGBOX_NPC
# 657 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_up
# 658 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 660 "data/maps/beaston_pokemonLab/scripts.pory"
look_up:
# 661 "data/maps/beaston_pokemonLab/scripts.pory"
	face_up
	step_end

beaston_lab_cokbern_busy::
# 665 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_busy_Text_0, MSGBOX_SIGN
	return


# 667 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_grabLeft:
# 668 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 669 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 669 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 671 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_grabTwoLeft:
# 672 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 672 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 673 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 673 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 676 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_finish_center:
# 677 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 679 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_finish_left:
# 680 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 681 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

beaston_lab_preventExit_middle::
# 685 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 686 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 687 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 688 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 689 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 690 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_middle
# 691 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 692 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_walkUp_middle
# 693 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_walkUp_middle
# 694 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 695 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_preventExit_left::
# 699 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 700 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 701 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 702 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 703 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 704 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_left
# 705 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 706 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkUp_left
# 707 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp_left
# 708 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 709 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_preventExit_right::
# 713 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 714 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 715 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 716 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 717 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 718 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_right
# 719 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 720 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkUp_right
# 721 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp_right
# 722 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 723 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 727 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_preventExit_surprise:
# 728 "data/maps/beaston_pokemonLab/scripts.pory"
	emote_exclamation_mark
# 729 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 732 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_middle:
# 733 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 733 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 733 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 735 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_left:
# 736 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 737 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 737 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 737 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 739 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_right:
# 740 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 741 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 741 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 741 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 744 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_walkUp_middle:
# 745 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 745 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 745 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 747 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkUp_left:
# 748 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 748 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 749 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 750 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 752 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkUp_right:
# 753 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 753 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 754 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 755 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 758 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp_left:
# 759 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 759 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 759 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 760 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 761 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

# 763 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp_right:
# 764 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 764 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 764 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 765 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 766 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_notebooks1_Text_0:
# 13 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "It's a stack of notebooks labeled\n“Rubber Type Notes.” Read it?$"

beaston_lab_notebooks_rubber_Text_0:
# 18 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to a random page.\p…\pWe've been able to single out this\nfabled 20th type based on the\lproperties of some Pokémon.\pPokémon with this type seem to be very\nresistant to electricity, and unfazed\lby water.\pTheir attacks are effective on Pokémon\nwith the Electric type. Because of\lthis, and how many have stretchy,\lbouncy bodies, we have dubbed this\ltype “Rubber.”$"

beaston_lab_notebooks2_Text_0:
# 24 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "It's a stack of notebooks labeled\n“Evo Schematics.” Read it?$"

beaston_lab_notebooks_evo_croconut_Text_0:
# 30 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to a random page.\p…\pA drawing of a reptilian Pokémon covered\nin bones fills the page. Various arrows\lpoint to it, with text reading…\p“Fire-type”\p“Skull face”\p“Saurian”.\pContinue reading?$"

beaston_lab_notebooks_evo_skrappup_Text_0:
# 35 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to the next page.\p…\pA drawing of a canine but fish-like\nPokémon fills the page. Various arrows\lpoint to it, with text reading…\p“Water-type”\p“Hydrodynamic fins”\p“Inflatable mane”\pContinue reading?$"

beaston_lab_notebooks_evo_kitfisk_Text_0:
# 40 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to the next page.\p…\pA drawing of a fierce-looking feline\nPokémon fills the page. Various arrows\lpoint to it, with text reading…\p“Grass-type”\p“Camouflage stripes”\p“Cattail”$"

beaston_lab_notebooks_close_Text_0:
# 44 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You close the notebook.$"

beaston_lab_notebooks3_Text_0:
# 50 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "It's a stack of notebooks labeled\n“Null Type Notes.” Read it?$"

beaston_lab_notebooks_nullType_Text_0:
# 55 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to a random page.\p…\pIt was thought for decades that Infinity\nEnergy only manifested in 18 discrete\lforms.\pThese forms, different wavelengths of\nenergy, are what the layperson knows\las Pokémon types.\pHowever, it seems there may be more\ntypes than once thought-\lmy research has shown that certain\lattacks, once thought to lack any\lInfinity Energy altogether, instead\lare imbued with a 19th form of energy.\pThis “new type” seems not to react with\nany others. As such, I will call it\lthe “Null type” for the time being.\pIf channeled properly, I believe this\ntype may have the potential for\limmense damage in battle…$"

beaston_lab_Intro_Text_0:
# 67 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "looks like dad's busy\pi guess just chill til he comes back$"

beaston_lab_quigley_dialogue_Text_0:
# 98 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "fuck of$"

beaston_lab_quigley_dialogue_Text_1:
# 104 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "idk when dad's gonna be back so just\ndon't mess with anything$"

beaston_lab_quigley_stopExit_left_Text_0:
# 111 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "hey dude no$"

beaston_lab_quigley_stopExit_left_Text_1:
# 115 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "we gotta wait for dad$"

beaston_lab_professor_intro_Text_0:
# 203 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "so ur {PLAYER} huh\psweet\pi bet quigley already told u but i've\nheard a lot abt u and i think u would\lmake a good help\pnow i won't force u but i do wanna say\nif u wanna come along u get a partner\lmon as a gift\pi'm studying pokemon genetics and how\nthey're related, it'll be a huge help\lif u can log me info on more mons\pso what do u say$"

beaston_lab_professor_intro_Text_1:
# 205 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "freakin sweet lewis$"

beaston_lab_professor_help_no_Text_0:
# 209 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "aw, well, i'll still let u take a partner mon$"

beaston_lab_professor_starter_choice_Text_0:
# 214 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "quigley move so {PLAYER} can pick a mon$"

beaston_lab_professor_starter_choice_Text_1:
# 216 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "fine$"

beaston_lab_professor_starter_choice_Text_2:
# 219 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "alright kid now pick a mon$"

beaston_lab_professor_appear_Text_0:
# 240 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "oh shit i forgot$"

beaston_lab_professor_appear_Text_1:
# 244 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "this place is a mess, sorry\pwhy don't u come on and introduce\nurself$"

beaston_lab_croconut_Text_0:
# 331 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Grass-type Croconut! This\neasygoing Pokémon likes lying in the\lsun.$"

beaston_lab_croconut_Text_1:
# 332 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Say, is Croconut your choice for your\nPokémon partner?$"

beaston_lab_chose_croconut_Text_0:
# 339 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Croconut it is!$"

beaston_lab_chose_croconut_Text_1:
# 347 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Croconut!$"

beaston_lab_skrappup_Text_0:
# 368 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Fire-type Skrappup! This high-\nenergy Pokémon is very loyal!$"

beaston_lab_skrappup_Text_1:
# 369 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Is Skrappup the Pokémon you'd like as\nyour first partner?$"

beaston_lab_chose_skrappup_Text_0:
# 376 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Skrappup it is!$"

beaston_lab_chose_skrappup_Text_1:
# 384 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Skrappup!$"

beaston_lab_kitfisk_Text_0:
# 404 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Water-type Kitfisk! This sneaky\nPokémon has a keen hunter's instinct!$"

beaston_lab_kitfisk_Text_1:
# 405 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Would you like to choose Kitfisk as\nyour partner Pokémon?$"

beaston_lab_chose_kitfisk_Text_0:
# 412 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Kitfisk it is!$"

beaston_lab_chose_kitfisk_Text_1:
# 420 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Kitfisk!$"

beaston_lab_nicknameStarter_Text_0:
# 485 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Now, would you like to give your new\npartner a nickname?$"

beaston_lab_nicknameStarter_Text_1:
# 493 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "I see. Well, I suppose you can always\ngive it one later, if you'd like.$"

beaston_lab_battleSetup_Text_0:
# 504 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Hmm…$"

beaston_lab_battleSetup_Text_1:
# 508 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah!\p{PLAYER}, since you have your own\nPokémon now, how about challenging\lQuigley to a battle?\pI'd offer myself, but, ah…\nI don't seem to have any Pokémon with\lme.$"

beaston_lab_battleSetup_Text_2:
# 511 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Hey! You never told me I'd be BATTLING\n{PLAYER}!$"

beaston_lab_battleSetup_Text_3:
# 514 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Now, now, Quigley.\pIt's just one battle so {PLAYER} can\nlearn the ropes. I'm sure you'd want\lthem to do the same if you were in\ltheir shoes.$"

beaston_lab_battleSetup_Text_4:
# 517 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "…fine.\p{PLAYER}, you're lucky I only have one mon on me.$"

beaston_lab_quigleyBattle_Text_0:
# 549 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Well… here goes.$"

beaston_lab_quigleyBattle_Text_1:
# 549 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Sigh… about what I expected.$"

beaston_lab_PostQuigleyBattle_Text_0:
# 554 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Aha! You're a natural, {PLAYER}!\pNow, what was I going to say…\pAh, right.\pMy niece, Stella, lives in the next town\nover. I'm sure you two are familiar\lwith each other.\pI'd like for you to bring her back\nhere.$"

beaston_lab_PostQuigleyBattle_Text_1:
# 557 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ugh… of course you ask {PLAYER} to do\nit.\pWhatever. I'm going home.$"

beaston_lab_cokbern_AfterBattle_Text_0:
# 582 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, that Quigley…\pHe can be a bit of a handful at times.$"

beaston_lab_cokbern_AfterBattle_Text_1:
# 585 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "I'll be waiting here for you and Stella,\n{PLAYER}.\pI have something special in store for\nyou two.\pFor now, though, I'll be busy logging my\nrecent findings.$"

beaston_lab_cokbern_AfterBattle_Text_2:
# 589 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Suppose I should take care of these as\nwell.$"

beaston_lab_cokbern_idle_Text_0:
# 656 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "go on kid pick a mon any mon$"

beaston_lab_cokbern_busy_Text_0:
# 665 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "He seems too busy writing things down\nto talk…$"

beaston_lab_preventExit_middle_Text_0:
# 688 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "wait bro don't leave$"
