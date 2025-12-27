# 1 "data/maps/beaston_pokemonLab/scripts.pory"

# 2 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_pokemonLab_MapScripts::
# 3 "data/maps/beaston_pokemonLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, beaston_lab_onWarp
# 4 "data/maps/beaston_pokemonLab/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, beaston_lab_HidePokeballs
# 5 "data/maps/beaston_pokemonLab/scripts.pory"
	.byte 0
# 6 "data/maps/beaston_pokemonLab/scripts.pory"

# 7 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_onWarp::
# 8 "data/maps/beaston_pokemonLab/scripts.pory"
    map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, beaston_lab_Intro
# 9 "data/maps/beaston_pokemonLab/scripts.pory"
    .2byte 0

beaston_lab_HidePokeballs::
# 12 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_gt beaston_lab_HidePokeballs_2
beaston_lab_HidePokeballs_1:
	end

beaston_lab_HidePokeballs_2:
# 14 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_1
# 15 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_2
# 16 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_3
	goto beaston_lab_HidePokeballs_1


beaston_lab_notebooks1::
# 22 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 23 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks1_Text_0, MSGBOX_YESNO
# 24 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_rubber
# 25 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_rubber::
# 28 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_rubber_Text_0
# 29 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_notebooks_close
	return


beaston_lab_notebooks2::
# 33 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 34 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks2_Text_0, MSGBOX_YESNO
# 35 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_evo_croconut
# 36 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
# 37 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_notebooks_evo_croconut::
# 40 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_evo_croconut_Text_0, MSGBOX_YESNO
# 41 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_evo_skrappup
# 42 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_evo_skrappup::
# 45 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_evo_skrappup_Text_0, MSGBOX_YESNO
# 46 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_evo_kitfisk
# 47 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_evo_kitfisk::
# 50 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_evo_kitfisk_Text_0
# 51 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_notebooks_close
	return


beaston_lab_notebooks_close::
# 54 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_close_Text_0
# 55 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_notebooks3::
# 59 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 60 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks3_Text_0, MSGBOX_YESNO
# 61 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_notebooks_nullType
# 62 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_notebooks_close
	return


beaston_lab_notebooks_nullType::
# 65 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_notebooks_nullType_Text_0
# 66 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_notebooks_close
	return


beaston_lab_Intro::
# 70 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 71 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 72 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_BEASTON
# 73 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp
# 74 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 75 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_lookAround
# 76 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 77 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 78 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_Intro_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 80 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 81 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_standAround
# 82 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 83 "data/maps/beaston_pokemonLab/scripts.pory"
	release
# 84 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 87 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp:
# 88 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 88 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 88 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 88 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_lookAround:
# 92 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_right
# 93 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 94 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 95 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 96 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
# 97 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 98 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
# 99 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_8
# 100 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 102 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_standAround:
# 103 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 103 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 104 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_quigley_dialogue::
# 108 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 109 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq beaston_lab_quigley_dialogue_2
# 117 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_dialogue_Text_1, MSGBOX_NPC
beaston_lab_quigley_dialogue_1:
# 119 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
	return

beaston_lab_quigley_dialogue_2:
# 111 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_dialogue_Text_0, MSGBOX_NPC
# 112 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 113 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, lookDown
	goto beaston_lab_quigley_dialogue_1


beaston_lab_quigley_stopExit_left::
# 123 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 124 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 125 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 126 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 128 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_left
# 129 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 130 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 131 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 132 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_left
# 133 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 134 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 135 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 136 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_quigley_stopExit_middle::
# 139 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 140 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 141 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 142 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 143 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 144 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_middle
# 145 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 146 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 147 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 148 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_middle
# 149 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 150 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 151 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 152 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_quigley_stopExit_right::
# 155 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 156 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 157 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 158 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 159 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 160 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_right
# 161 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 162 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 163 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 164 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_right
# 165 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 166 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 167 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 168 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 170 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_left:
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 171 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_middle:
# 174 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 175 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 175 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 175 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 175 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 177 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_right:
# 178 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 178 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 179 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 179 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 179 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 179 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 181 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_left:
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 183 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 185 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_middle:
# 186 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 186 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 186 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 186 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 187 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 188 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 190 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_right:
# 191 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 191 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 191 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 191 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 192 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 192 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 193 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_pokeballs_left::
# 197 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 198 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, beaston_lab_croconut
# 199 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 200 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, beaston_lab_player_comeAround_left_side
# 201 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_left_top
# 202 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_pokeballs_middle::
# 205 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 206 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, beaston_lab_skrappup
# 207 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 208 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, beaston_lab_player_comeAround_middle_bottom
# 209 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_middle_top
# 210 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_pokeballs_right::
# 213 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 214 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, beaston_lab_kitfisk
# 215 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 216 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, beaston_lab_player_comeAround_right_bottom
# 217 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, beaston_lab_player_comeAround_right_side
# 218 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_right_top
# 219 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_professor_intro::
# 223 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 224 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_intro_Text_0, MSGBOX_YESNO
# 225 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_professor_help_no
# 226 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_intro_Text_1
# 227 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_starter_choice
	return


beaston_lab_professor_help_no::
# 230 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_help_no_Text_0, MSGBOX_AUTOCLOSE
# 231 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 232 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_starter_choice
	return


beaston_lab_professor_starter_choice::
# 235 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_0
# 236 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_moveAway
# 237 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 238 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 239 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_1
# 240 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 241 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 242 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 243 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 244 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_2, MSGBOX_AUTOCLOSE
# 245 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 246 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 247 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 249 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_moveAway:
# 250 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 250 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 251 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 252 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 254 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_shuffle:
# 255 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
# 255 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_professor_appear::
# 259 "data/maps/beaston_pokemonLab/scripts.pory"
	setobjectxyperm 5, 15, 16
# 260 "data/maps/beaston_pokemonLab/scripts.pory"
	clearflag FLAG_HIDE_AMANITA_LAB
# 261 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 262 "data/maps/beaston_pokemonLab/scripts.pory"
	addobject 5
# 263 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_DOOR
# 264 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_walkUp
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 266 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_faceDown
# 267 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_appear_Text_0
# 268 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_appear_Text_1, MSGBOX_AUTOCLOSE
# 269 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 270 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_frantic
# 271 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 272 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_appear_Text_0
# 273 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_appear_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
	return


# 276 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_walkUp:
# 277 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 277 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 277 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 277 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 277 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 278 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 279 "data/maps/beaston_pokemonLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 281 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_frantic:
# 282 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
# 283 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 284 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_right
# 285 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 286 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_player_comeAround_left_side::
# 290 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_left_side
# 291 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 293 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_left_side:
# 294 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 294 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 295 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 295 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 296 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_left_top::
# 299 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_left_top
# 300 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 302 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_left_top:
# 303 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 304 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 304 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 304 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 305 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 305 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 306 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_middle_bottom::
# 309 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_middle_bottom
# 310 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 312 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_middle_bottom:
# 313 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_middle_top::
# 316 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_middle_top
# 317 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 319 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_middle_top:
# 320 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 320 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 321 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 321 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 321 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 322 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 322 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 323 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_right_bottom::
# 326 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_bottom
# 327 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 329 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_bottom:
# 330 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 331 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_right_side::
# 334 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_side
# 335 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 337 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_side:
# 338 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 339 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 339 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 340 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_right_top::
# 343 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_top
# 344 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 346 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_top:
# 347 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 348 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 348 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 349 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 349 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 350 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 352 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_faceDown:
# 353 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_croconut::
# 357 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 358 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_CROCONUT, 10, 3
# 359 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_CROCONUT, CRY_MODE_NORMAL
# 360 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 361 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_croconut_Text_0
# 362 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_croconut_Text_1, MSGBOX_YESNO
# 363 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_croconut
# 364 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 365 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_croconut::
# 368 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 369 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_croconut_Text_0, MSGBOX_AUTOCLOSE
# 370 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 371 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_CROCONUT, 5
# 372 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 373 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 374 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_1
# 375 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 376 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 377 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 378 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_croconut_Text_1, MSGBOX_AUTOCLOSE
# 379 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 380 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 381 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, beaston_lab_choseCroconut_WalkAroundLeft
# 382 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseCroconut_WalkAroundTop
# 383 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 384 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_croconut
# 385 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 386 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 387 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 388 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveCroconut
# 389 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 390 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 391 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 392 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 393 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


beaston_lab_skrappup::
# 396 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 397 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_SKRAPPUP, 10, 3
# 398 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_SKRAPPUP, CRY_MODE_NORMAL
# 399 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 400 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_skrappup_Text_0
# 401 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_skrappup_Text_1, MSGBOX_YESNO
# 402 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_skrappup
# 403 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 404 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_skrappup::
# 407 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 408 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_skrappup_Text_0, MSGBOX_AUTOCLOSE
# 409 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 410 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_SKRAPPUP, 5
# 411 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 412 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 413 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_2
# 414 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 415 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 416 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 417 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_skrappup_Text_1, MSGBOX_AUTOCLOSE
# 418 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 419 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 420 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseSkrappup_WalkAroundTop
# 421 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 422 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_skrappup
# 423 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 424 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 425 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 426 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveSkrappup
# 427 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 428 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 429 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 430 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 431 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


beaston_lab_kitfisk::
# 434 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 435 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_KITFISK, 10, 3
# 436 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_KITFISK, CRY_MODE_NORMAL
# 437 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 438 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_kitfisk_Text_0
# 439 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_kitfisk_Text_1, MSGBOX_YESNO
# 440 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_kitfisk
# 441 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 442 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_kitfisk::
# 445 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 446 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_kitfisk_Text_0, MSGBOX_AUTOCLOSE
# 447 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 448 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_KITFISK, 5
# 449 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 450 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 451 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_3
# 452 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 453 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 454 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 455 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_kitfisk_Text_1, MSGBOX_AUTOCLOSE
# 456 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 457 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 458 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, beaston_lab_choseKitfisk_WalkAroundRight
# 459 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseKitfisk_WalkAroundTop
# 460 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 461 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_kitfisk
# 462 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 463 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 464 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 465 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveKitfisk
# 466 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 467 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 468 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 469 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 470 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


# 473 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseCroconut_facingRight:
# 474 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 474 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 475 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 477 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseCroconut_facingDown:
# 478 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 479 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 479 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 480 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 482 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseSkrappup_facingDown:
# 483 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 483 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 484 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 484 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 485 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 485 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

# 487 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseKitfisk_facingLeft:
# 488 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 488 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 489 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

# 491 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseKitfisk_facingDown:
# 492 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 493 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 493 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 494 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

beaston_lab_choseCroconut_WalkAroundLeft::
# 498 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseCroconut_facingRight
# 499 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseCroconut_WalkAroundTop::
# 502 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseCroconut_facingDown
# 503 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseSkrappup_WalkAroundTop::
# 506 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseSkrappup_facingDown
# 507 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseKitfisk_WalkAroundRight::
# 510 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseKitfisk_facingLeft
# 511 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseKitfisk_WalkAroundTop::
# 514 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseKitfisk_facingDown
# 515 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_nicknameStarter::
# 519 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 520 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lookDown
# 521 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_nicknameStarter_Text_0, MSGBOX_YESNO
# 522 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq beaston_lab_nicknameStarter_2
# 527 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq beaston_lab_nicknameStarter_3
beaston_lab_nicknameStarter_1:
# 531 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
# 532 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_battleSetup
	return

beaston_lab_nicknameStarter_2:
# 524 "data/maps/beaston_pokemonLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 525 "data/maps/beaston_pokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto beaston_lab_nicknameStarter_1

beaston_lab_nicknameStarter_3:
# 529 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_nicknameStarter_Text_1, MSGBOX_AUTOCLOSE
	goto beaston_lab_nicknameStarter_1


# 535 "data/maps/beaston_pokemonLab/scripts.pory"
lookDown:
# 536 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_battleSetup::
# 540 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_0, MSGBOX_AUTOCLOSE
# 541 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_frantic
# 542 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 543 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, playerSurprise
# 544 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_1, MSGBOX_AUTOCLOSE
# 545 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 546 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 547 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 548 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_2, MSGBOX_AUTOCLOSE
# 549 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 550 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 551 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 552 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_3
# 553 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 554 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 555 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 556 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_4
	return


# 559 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_shuffle:
# 560 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 560 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 563 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_croconut:
# 564 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 565 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 567 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_skrappup:
# 568 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 569 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 569 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 571 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_kitfisk:
# 572 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 573 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 573 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 573 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 576 "data/maps/beaston_pokemonLab/scripts.pory"
look_left:
# 577 "data/maps/beaston_pokemonLab/scripts.pory"
	face_left
	step_end

# 579 "data/maps/beaston_pokemonLab/scripts.pory"
look_down:
# 580 "data/maps/beaston_pokemonLab/scripts.pory"
	face_down
	step_end

# 582 "data/maps/beaston_pokemonLab/scripts.pory"
look_right:
# 583 "data/maps/beaston_pokemonLab/scripts.pory"
	face_right
	step_end

beaston_lab_quigleyBattle::
# 587 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 588 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 589 "data/maps/beaston_pokemonLab/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, beaston_lab_quigleyBattle_Text_0
# 590 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_PostQuigleyBattle
	return


beaston_lab_PostQuigleyBattle::
# 593 "data/maps/beaston_pokemonLab/scripts.pory"
	special HealPlayerParty
# 594 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 595 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_down
# 596 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 597 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_PostQuigleyBattle_Text_0, MSGBOX_AUTOCLOSE
# 598 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 599 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 600 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateQuigley
# 601 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_PostQuigleyBattle_Text_1, MSGBOX_AUTOCLOSE
# 602 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
	return


# 605 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveCroconut:
# 606 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 606 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 606 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 607 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 609 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveSkrappup:
# 610 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 610 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 610 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 612 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveKitfisk:
# 613 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 614 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 615 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 615 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 617 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leave:
# 618 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 618 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 618 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_cokbern_AfterBattle::
# 622 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 623 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 1
# 624 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_LAB
# 625 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_EXIT
# 626 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 627 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 628 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 629 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 630 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_1, MSGBOX_AUTOCLOSE
# 631 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 632 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_headToDesk
# 633 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 634 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_2, MSGBOX_AUTOCLOSE
# 635 "data/maps/beaston_pokemonLab/scripts.pory"
	switch VAR_STARTER_MON
# 637 "data/maps/beaston_pokemonLab/scripts.pory"
	case 1, beaston_lab_cokbern_AfterBattle_3
# 652 "data/maps/beaston_pokemonLab/scripts.pory"
	case 2, beaston_lab_cokbern_AfterBattle_4
# 667 "data/maps/beaston_pokemonLab/scripts.pory"
	case 3, beaston_lab_cokbern_AfterBattle_5
beaston_lab_cokbern_AfterBattle_1:
# 683 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 684 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 685 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return

beaston_lab_cokbern_AfterBattle_3:
# 638 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 639 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 640 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 641 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_3
# 642 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 643 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 644 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 645 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 646 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 647 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_2
# 648 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 649 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 650 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_center
	goto beaston_lab_cokbern_AfterBattle_1

beaston_lab_cokbern_AfterBattle_4:
# 653 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 654 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 655 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 656 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_3
# 657 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 658 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 659 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabTwoLeft
# 660 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 661 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 662 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_1
# 663 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 664 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 665 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_left
	goto beaston_lab_cokbern_AfterBattle_1

beaston_lab_cokbern_AfterBattle_5:
# 668 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabTwoLeft
# 669 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 670 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 671 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_2
# 672 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 673 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 674 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 675 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 676 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 677 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_TEMP_1
# 678 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 679 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 680 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_left
	goto beaston_lab_cokbern_AfterBattle_1


# 688 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_headToDesk:
# 689 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 689 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 690 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 690 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 690 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 690 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 691 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
	step_end

beaston_lab_cokbern_idle::
# 695 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 696 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 697 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_idle_Text_0, MSGBOX_NPC
# 698 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_up
# 699 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 700 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 701 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 703 "data/maps/beaston_pokemonLab/scripts.pory"
look_up:
# 704 "data/maps/beaston_pokemonLab/scripts.pory"
	face_up
	step_end

beaston_lab_cokbern_busy::
# 708 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_busy_Text_0, MSGBOX_SIGN
	return


# 710 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_grabLeft:
# 711 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 712 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 712 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 714 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_grabTwoLeft:
# 715 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 715 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 716 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 716 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 719 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_finish_center:
# 720 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 722 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_finish_left:
# 723 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 724 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

beaston_lab_preventExit_middle::
# 728 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 729 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 730 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 731 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 732 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 733 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 734 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_middle
# 735 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 736 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_walkUp_middle
# 737 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_walkUp_middle
# 738 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 739 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 740 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_preventExit_left::
# 744 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 745 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 746 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 747 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 748 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 749 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 750 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_left
# 751 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 752 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkUp_left
# 753 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp_left
# 754 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 755 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 756 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_preventExit_right::
# 760 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 761 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 762 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 763 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername nameplateProfessor
# 764 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 765 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 766 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_right
# 767 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 768 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkUp_right
# 769 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp_right
# 770 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 771 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 772 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 776 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_preventExit_surprise:
# 777 "data/maps/beaston_pokemonLab/scripts.pory"
	emote_exclamation_mark
# 778 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 781 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_middle:
# 782 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 782 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 782 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 784 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_left:
# 785 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 786 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 786 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 786 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 788 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_right:
# 789 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 790 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 790 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 790 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 793 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_walkUp_middle:
# 794 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 794 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 794 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 796 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkUp_left:
# 797 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 797 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 798 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 799 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 801 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkUp_right:
# 802 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 802 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 803 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 804 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 807 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp_left:
# 808 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 808 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 808 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 809 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 810 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

# 812 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp_right:
# 813 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 813 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 813 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 814 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 815 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_notebooks1_Text_0:
# 23 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "It's a stack of notebooks labeled\n“Rubber Type Notes.” Read it?$"

beaston_lab_notebooks_rubber_Text_0:
# 28 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to a random page.\p…\pWe've been able to single out this\nfabled 20th type based on the\lproperties of some Pokémon.\pPokémon with this type seem to be very\nresistant to electricity, and unfazed\lby water.\pTheir attacks are effective on Pokémon\nwith the Electric type. Because of\lthis, and how many have stretchy,\lbouncy bodies, we have dubbed this\ltype “Rubber.”$"

beaston_lab_notebooks2_Text_0:
# 34 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "It's a stack of notebooks labeled\n“Schematics.” Read it?$"

beaston_lab_notebooks_evo_croconut_Text_0:
# 40 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to a random page.\p…\pA drawing of a reptilian Pokémon covered\nin bones fills the page. Various arrows\lpoint to it, with text reading…\p“Fire-type”\p“Skull face”\p“Saurian”.\pContinue reading?$"

beaston_lab_notebooks_evo_skrappup_Text_0:
# 45 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to the next page.\p…\pA drawing of a canine but fish-like\nPokémon fills the page. Various arrows\lpoint to it, with text reading…\p“Water-type”\p“Hydrodynamic fins”\p“Inflatable mane”\pContinue reading?$"

beaston_lab_notebooks_evo_kitfisk_Text_0:
# 50 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to the next page.\p…\pA drawing of a fierce-looking feline\nPokémon fills the page. Various arrows\lpoint to it, with text reading…\p“Grass-type”\p“Camouflage stripes”\p“Cattail”$"

beaston_lab_notebooks_close_Text_0:
# 54 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You close the notebook.$"

beaston_lab_notebooks3_Text_0:
# 60 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "It's a stack of notebooks labeled\n“Null Type Notes.” Read it?$"

beaston_lab_notebooks_nullType_Text_0:
# 65 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "You flip to a random page.\p…\pIt was thought for decades that Infinity\nEnergy only manifested in 18 discrete\lforms.\pThese forms, different wavelengths of\nenergy, are what the layperson knows\las Pokémon types.\pHowever, it seems there may be more\ntypes than once thought-\lmy research has shown that certain\lattacks, once thought to lack any\lInfinity Energy altogether, instead\lare imbued with a 19th form of energy.\pThis “new type” seems not to react with\nany others. As such, I will call it\lthe “Null type” for the time being.\pIf channeled properly, I believe this\ntype may have the potential for\limmense damage in battle…$"

beaston_lab_Intro_Text_0:
# 78 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "looks like mom's busy\pi guess just chill til she comes back$"

beaston_lab_quigley_dialogue_Text_0:
# 111 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "fuck of$"

beaston_lab_quigley_dialogue_Text_1:
# 117 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "idk when mom's gonna be back so just\ndon't mess with anything$"

beaston_lab_quigley_stopExit_left_Text_0:
# 126 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "hey dude no$"

beaston_lab_quigley_stopExit_left_Text_1:
# 130 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "we gotta wait for mom$"

beaston_lab_professor_intro_Text_0:
# 224 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "so ur {PLAYER} huh\psweet\pi bet quigley already told u but i've\nheard a lot abt u and i think u would\lmake a good help\pnow i won't force u but i do wanna say\nif u wanna come along u get a partner\lmon as a gift\pi'm studying pokemon genetics and how\nthey're related, it'll be a huge help\lif u can log me info on more mons\pso what do u say$"

beaston_lab_professor_intro_Text_1:
# 226 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "freakin sweet lewis$"

beaston_lab_professor_help_no_Text_0:
# 230 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "aw, well, i'll still let u take a partner mon$"

beaston_lab_professor_starter_choice_Text_0:
# 235 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "quigley move so {PLAYER} can pick a mon$"

beaston_lab_professor_starter_choice_Text_1:
# 239 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "fine$"

beaston_lab_professor_starter_choice_Text_2:
# 244 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "alright kid now pick a mon$"

beaston_lab_professor_appear_Text_0:
# 267 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "???$"

beaston_lab_professor_appear_Text_1:
# 268 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "oh shit i forgot$"

beaston_lab_professor_appear_Text_2:
# 273 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "this place is a mess, sorry\pwhy don't u come on and introduce\nurself$"

beaston_lab_croconut_Text_0:
# 361 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Grass-type Croconut! This\neasygoing Pokémon likes lying in the\lsun.$"

beaston_lab_croconut_Text_1:
# 362 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Say, is Croconut your choice for your\nPokémon partner?$"

beaston_lab_chose_croconut_Text_0:
# 369 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Croconut it is!$"

beaston_lab_chose_croconut_Text_1:
# 378 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Croconut!$"

beaston_lab_skrappup_Text_0:
# 400 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Fire-type Skrappup! This high-\nenergy Pokémon is very loyal!$"

beaston_lab_skrappup_Text_1:
# 401 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Is Skrappup the Pokémon you'd like as\nyour first partner?$"

beaston_lab_chose_skrappup_Text_0:
# 408 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Skrappup it is!$"

beaston_lab_chose_skrappup_Text_1:
# 417 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Skrappup!$"

beaston_lab_kitfisk_Text_0:
# 438 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Water-type Kitfisk! This sneaky\nPokémon has a keen hunter's instinct!$"

beaston_lab_kitfisk_Text_1:
# 439 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Would you like to choose Kitfisk as\nyour partner Pokémon?$"

beaston_lab_chose_kitfisk_Text_0:
# 446 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Kitfisk it is!$"

beaston_lab_chose_kitfisk_Text_1:
# 455 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Kitfisk!$"

beaston_lab_nicknameStarter_Text_0:
# 521 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Now, would you like to give your new\npartner a nickname?$"

beaston_lab_nicknameStarter_Text_1:
# 529 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "I see. Well, I suppose you could\nalways give it one later.$"

beaston_lab_battleSetup_Text_0:
# 540 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Hmm…$"

beaston_lab_battleSetup_Text_1:
# 544 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah!\p{PLAYER}, since you have your own\nPokémon now, how about challenging\lQuigley to a battle?\pI'd offer myself, but, ah…\nI don't seem to have any Pokémon with\lme.$"

beaston_lab_battleSetup_Text_2:
# 548 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Hey! You never told me I'd be BATTLING\n{PLAYER}!$"

beaston_lab_battleSetup_Text_3:
# 552 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Now, now, Quigley.\pIt's just one battle so {PLAYER} can\nlearn the ropes. I'm sure you'd want\lthem to do the same if you were in\ltheir shoes.$"

beaston_lab_battleSetup_Text_4:
# 556 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "…fine.\p{PLAYER}, you're lucky I only have one mon on me.$"

beaston_lab_quigleyBattle_Text_0:
# 589 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Sigh… about what I expected.$"

beaston_lab_PostQuigleyBattle_Text_0:
# 597 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Aha! You're a natural, {PLAYER}!\pNow, what was I going to say…\pAh, right.\pMy niece, Stella, lives in the next town\nover. I'm sure you two are familiar\lwith each other.\pI'd like for you to bring her back\nhere.$"

beaston_lab_PostQuigleyBattle_Text_1:
# 601 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ugh… of course you ask {PLAYER} to do\nit.\pWhatever. I'm going home.$"

beaston_lab_cokbern_AfterBattle_Text_0:
# 627 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, that Quigley…\pHe can be a bit of a handful at times.$"

beaston_lab_cokbern_AfterBattle_Text_1:
# 630 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "I'll be waiting here for you and Stella,\n{PLAYER}.\pI have something special in store for\nyou two.\pFor now, though, I'll be busy logging my\nrecent findings.$"

beaston_lab_cokbern_AfterBattle_Text_2:
# 634 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Suppose I should take care of these as\nwell.$"

beaston_lab_cokbern_idle_Text_0:
# 697 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "go on kid pick a mon any mon$"

beaston_lab_cokbern_busy_Text_0:
# 708 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "She seems too busy writing to talk…$"

beaston_lab_preventExit_middle_Text_0:
# 732 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "wait bro don't leave$"

nameplateQuigley::
# 818 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Quigley$"

nameplateProfessor::
# 822 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Amanita$"
