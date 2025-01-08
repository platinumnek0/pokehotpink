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
	speakername beaston_lab_Intro_Text_0
# 68 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_Intro_Text_1, MSGBOX_AUTOCLOSE
# 69 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 70 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 71 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_standAround
# 72 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 73 "data/maps/beaston_pokemonLab/scripts.pory"
	release
# 74 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 77 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp:
# 78 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 78 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 78 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 78 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_lookAround:
# 82 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_right
# 83 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 84 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 85 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 86 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
# 87 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 88 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
# 89 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_8
# 90 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 92 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_standAround:
# 93 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 93 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 94 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_quigley_dialogue::
# 98 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 99 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq beaston_lab_quigley_dialogue_2
# 107 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_dialogue_Text_1, MSGBOX_NPC
beaston_lab_quigley_dialogue_1:
# 109 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
	return

beaston_lab_quigley_dialogue_2:
# 101 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_dialogue_Text_0, MSGBOX_NPC
# 102 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 103 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, lookDown
	goto beaston_lab_quigley_dialogue_1


beaston_lab_quigley_stopExit_left::
# 113 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 114 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 115 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 116 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 118 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_left
# 119 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 120 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 121 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 122 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_left
# 123 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 124 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 125 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 126 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_quigley_stopExit_middle::
# 129 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 130 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 131 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 132 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 133 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 134 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_middle
# 135 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 136 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 137 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 138 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_middle
# 139 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 140 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 141 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 142 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_quigley_stopExit_right::
# 145 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 146 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, playerSurprise
# 147 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 148 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_0, MSGBOX_AUTOCLOSE
# 149 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 150 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_grab_right
# 151 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 152 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_quigley_stopExit_left_Text_1, MSGBOX_AUTOCLOSE
# 153 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 154 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_walkBack_right
# 155 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_quigley_standAround
# 156 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 157 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 158 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 160 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_left:
# 161 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 161 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 161 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 161 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 163 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_middle:
# 164 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 165 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 165 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 165 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 165 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_grab_right:
# 168 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 168 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 169 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 169 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 169 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 169 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 171 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_left:
# 172 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 172 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 172 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 172 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 173 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 175 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_middle:
# 176 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 176 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 176 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 176 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 177 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 178 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 180 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_walkBack_right:
# 181 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 181 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 181 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 181 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 182 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 183 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_pokeballs_left::
# 187 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 188 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, beaston_lab_croconut
# 189 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 190 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, beaston_lab_player_comeAround_left_side
# 191 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_left_top
# 192 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_pokeballs_middle::
# 195 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 196 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, beaston_lab_skrappup
# 197 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 198 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, beaston_lab_player_comeAround_middle_bottom
# 199 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_middle_top
# 200 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_pokeballs_right::
# 203 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 204 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, beaston_lab_kitfisk
# 205 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_professor_appear
# 206 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, beaston_lab_player_comeAround_right_bottom
# 207 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, beaston_lab_player_comeAround_right_side
# 208 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_player_comeAround_right_top
# 209 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_intro
	return


beaston_lab_professor_intro::
# 213 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 214 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_intro_Text_1, MSGBOX_YESNO
# 215 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_lab_professor_help_no
# 216 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_intro_Text_2
# 217 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_starter_choice
	return


beaston_lab_professor_help_no::
# 220 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_help_no_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 222 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_professor_starter_choice
	return


beaston_lab_professor_starter_choice::
# 225 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_0
# 226 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_moveAway
# 227 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 228 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 229 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_1
# 230 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 231 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 232 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 233 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 234 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_starter_choice_Text_2, MSGBOX_AUTOCLOSE
# 235 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 236 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 237 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 239 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_moveAway:
# 240 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 240 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 241 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 242 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 244 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_shuffle:
# 245 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
# 245 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_professor_appear::
# 249 "data/maps/beaston_pokemonLab/scripts.pory"
	clearflag FLAG_UNUSED_0x024
# 250 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 251 "data/maps/beaston_pokemonLab/scripts.pory"
	addobject 5
# 252 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_DOOR
# 253 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_walkUp
# 254 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 255 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_faceDown
# 256 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_appear_Text_0
# 257 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_appear_Text_1, MSGBOX_AUTOCLOSE
# 258 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 259 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_frantic
# 260 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 261 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_professor_appear_Text_2, MSGBOX_AUTOCLOSE
# 262 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
	return


# 264 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_walkUp:
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 265 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 266 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 267 "data/maps/beaston_pokemonLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 269 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_professor_frantic:
# 270 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
# 271 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 272 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_right
# 273 "data/maps/beaston_pokemonLab/scripts.pory"
	delay_4
# 274 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

beaston_lab_player_comeAround_left_side::
# 278 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_left_side
# 279 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 281 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_left_side:
# 282 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 282 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 283 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 283 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 284 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_left_top::
# 287 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_left_top
# 288 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 290 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_left_top:
# 291 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 292 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 292 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 292 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 293 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 293 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 294 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_middle_bottom::
# 297 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_middle_bottom
# 298 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 300 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_middle_bottom:
# 301 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_middle_top::
# 304 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_middle_top
# 305 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 307 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_middle_top:
# 308 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 308 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 309 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 309 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 309 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 310 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 310 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 311 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_player_comeAround_right_bottom::
# 314 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_bottom
# 315 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 317 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_bottom:
# 318 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 319 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_right_side::
# 322 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_side
# 323 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 325 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_side:
# 326 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 327 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 327 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 328 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_player_comeAround_right_top::
# 331 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkDown_right_top
# 332 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 334 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkDown_right_top:
# 335 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 336 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 336 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 337 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 337 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 338 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 340 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_faceDown:
# 341 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_croconut::
# 345 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 346 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_CROCONUT, 10, 3
# 347 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_CROCONUT, CRY_MODE_NORMAL
# 348 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 349 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_croconut_Text_0
# 350 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_croconut_Text_1, MSGBOX_YESNO
# 351 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_croconut
# 352 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 353 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_croconut::
# 356 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 357 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_croconut_Text_0, MSGBOX_AUTOCLOSE
# 358 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 359 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_CROCONUT, 5
# 360 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 361 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 362 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 363 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 364 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 365 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 366 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_croconut_Text_1, MSGBOX_AUTOCLOSE
# 367 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 368 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 369 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, beaston_lab_choseCroconut_WalkAroundLeft
# 370 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseCroconut_WalkAroundTop
# 371 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 372 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_croconut
# 373 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 374 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 375 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 376 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveCroconut
# 377 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 378 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 379 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 380 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 381 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


beaston_lab_skrappup::
# 384 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 385 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_SKRAPPUP, 10, 3
# 386 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_SKRAPPUP, CRY_MODE_NORMAL
# 387 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 388 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_skrappup_Text_0
# 389 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_skrappup_Text_1, MSGBOX_YESNO
# 390 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_skrappup
# 391 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 392 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_skrappup::
# 395 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 396 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_skrappup_Text_0, MSGBOX_AUTOCLOSE
# 397 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 398 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_SKRAPPUP, 5
# 399 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 400 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 401 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 402 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 403 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 404 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 405 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_skrappup_Text_1, MSGBOX_AUTOCLOSE
# 406 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 407 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 408 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseSkrappup_WalkAroundTop
# 409 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 410 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_skrappup
# 411 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 412 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 413 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 414 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveSkrappup
# 415 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 416 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 417 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 418 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 419 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


beaston_lab_kitfisk::
# 422 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 423 "data/maps/beaston_pokemonLab/scripts.pory"
	showmonpic SPECIES_KITFISK, 10, 3
# 424 "data/maps/beaston_pokemonLab/scripts.pory"
	playmoncry SPECIES_KITFISK, CRY_MODE_NORMAL
# 425 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 426 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_kitfisk_Text_0
# 427 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_kitfisk_Text_1, MSGBOX_YESNO
# 428 "data/maps/beaston_pokemonLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, beaston_lab_chose_kitfisk
# 429 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 430 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_chose_kitfisk::
# 433 "data/maps/beaston_pokemonLab/scripts.pory"
	hidemonpic
# 434 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_kitfisk_Text_0, MSGBOX_AUTOCLOSE
# 435 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 436 "data/maps/beaston_pokemonLab/scripts.pory"
	givemon SPECIES_KITFISK, 5
# 437 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 438 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 439 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 440 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 441 "data/maps/beaston_pokemonLab/scripts.pory"
	playfanfare MUS_EVOLVED
# 442 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 443 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_chose_kitfisk_Text_1, MSGBOX_AUTOCLOSE
# 444 "data/maps/beaston_pokemonLab/scripts.pory"
	waitfanfare
# 445 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 446 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, beaston_lab_choseKitfisk_WalkAroundRight
# 447 "data/maps/beaston_pokemonLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, beaston_lab_choseKitfisk_WalkAroundTop
# 448 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_nicknameStarter
# 449 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_approach_kitfisk
# 450 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 451 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 452 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_quigleyBattle
# 453 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leaveKitfisk
# 454 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 455 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_down
# 456 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_leave
# 457 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 1
# 458 "data/maps/beaston_pokemonLab/scripts.pory"
	goto beaston_lab_cokbern_AfterBattle
	return


# 461 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseCroconut_facingRight:
# 462 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 462 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 463 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 465 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseCroconut_facingDown:
# 466 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 467 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 467 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 468 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 470 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseSkrappup_facingDown:
# 471 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 471 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 472 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 472 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 473 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 473 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

# 475 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseKitfisk_facingLeft:
# 476 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 476 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 477 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

# 479 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_choseKitfisk_facingDown:
# 480 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 481 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 481 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 482 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
	step_end

beaston_lab_choseCroconut_WalkAroundLeft::
# 486 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseCroconut_facingRight
# 487 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseCroconut_WalkAroundTop::
# 490 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseCroconut_facingDown
# 491 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseSkrappup_WalkAroundTop::
# 494 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseSkrappup_facingDown
# 495 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseKitfisk_WalkAroundRight::
# 498 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseKitfisk_facingLeft
# 499 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_choseKitfisk_WalkAroundTop::
# 502 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_choseKitfisk_facingDown
# 503 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


beaston_lab_nicknameStarter::
# 507 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 508 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, lookDown
# 509 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_nicknameStarter_Text_0, MSGBOX_YESNO
# 510 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq beaston_lab_nicknameStarter_2
# 515 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq beaston_lab_nicknameStarter_3
beaston_lab_nicknameStarter_1:
# 519 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
# 520 "data/maps/beaston_pokemonLab/scripts.pory"
	call beaston_lab_battleSetup
	return

beaston_lab_nicknameStarter_2:
# 512 "data/maps/beaston_pokemonLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 513 "data/maps/beaston_pokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto beaston_lab_nicknameStarter_1

beaston_lab_nicknameStarter_3:
# 517 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_nicknameStarter_Text_1, MSGBOX_AUTOCLOSE
	goto beaston_lab_nicknameStarter_1


# 523 "data/maps/beaston_pokemonLab/scripts.pory"
lookDown:
# 524 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

beaston_lab_battleSetup::
# 528 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_0, MSGBOX_AUTOCLOSE
# 529 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_frantic
# 530 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 531 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, playerSurprise
# 532 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_1, MSGBOX_AUTOCLOSE
# 533 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 534 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 535 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 536 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_2, MSGBOX_AUTOCLOSE
# 537 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 538 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 539 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 540 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_3
# 541 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 542 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 543 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 544 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_battleSetup_Text_4
	return


# 547 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_shuffle:
# 548 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 548 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 551 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_croconut:
# 552 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 553 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 555 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_skrappup:
# 556 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 557 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 557 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 559 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_approach_kitfisk:
# 560 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 561 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 561 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 561 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 564 "data/maps/beaston_pokemonLab/scripts.pory"
look_left:
# 565 "data/maps/beaston_pokemonLab/scripts.pory"
	face_left
	step_end

# 567 "data/maps/beaston_pokemonLab/scripts.pory"
look_down:
# 568 "data/maps/beaston_pokemonLab/scripts.pory"
	face_down
	step_end

# 570 "data/maps/beaston_pokemonLab/scripts.pory"
look_right:
# 571 "data/maps/beaston_pokemonLab/scripts.pory"
	face_right
	step_end

beaston_lab_quigleyBattle::
# 575 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 576 "data/maps/beaston_pokemonLab/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, beaston_lab_quigleyBattle_Text_0, beaston_lab_quigleyBattle_Text_1, beaston_lab_PostQuigleyBattle
	return


beaston_lab_PostQuigleyBattle::
# 579 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 580 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_down
# 581 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 582 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_PostQuigleyBattle_Text_0, MSGBOX_AUTOCLOSE
# 583 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 584 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 1, beaston_lab_quigley_shuffle
# 585 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_Intro_Text_0
# 586 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_PostQuigleyBattle_Text_1, MSGBOX_AUTOCLOSE
# 587 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
	return


# 590 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveCroconut:
# 591 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 591 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 591 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 592 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
	step_end

# 594 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveSkrappup:
# 595 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 595 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 595 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 597 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leaveKitfisk:
# 598 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 599 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 600 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 600 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 602 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_quigley_leave:
# 603 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 603 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 603 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

beaston_lab_cokbern_AfterBattle::
# 607 "data/maps/beaston_pokemonLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 608 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 1
# 609 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 610 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_EXIT
# 611 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 612 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 613 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 614 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_professor_shuffle
# 615 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_1, MSGBOX_AUTOCLOSE
# 616 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 617 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_headToDesk
# 618 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 619 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_AfterBattle_Text_2, MSGBOX_AUTOCLOSE
# 620 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq beaston_lab_cokbern_AfterBattle_2
beaston_lab_cokbern_AfterBattle_1:
# 637 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq beaston_lab_cokbern_AfterBattle_5
beaston_lab_cokbern_AfterBattle_4:
# 654 "data/maps/beaston_pokemonLab/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq beaston_lab_cokbern_AfterBattle_8
beaston_lab_cokbern_AfterBattle_7:
# 671 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 5
# 672 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 673 "data/maps/beaston_pokemonLab/scripts.pory"
	addobject 6
# 674 "data/maps/beaston_pokemonLab/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
# 675 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 676 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return

beaston_lab_cokbern_AfterBattle_2:
# 622 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 623 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 624 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 625 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 626 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 627 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 628 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 629 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 630 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 631 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 632 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 633 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 634 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_center
# 635 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
	goto beaston_lab_cokbern_AfterBattle_1

beaston_lab_cokbern_AfterBattle_5:
# 639 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 640 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 641 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 4
# 642 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 643 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 644 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 645 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabTwoLeft
# 646 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 647 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 648 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 649 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 650 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 651 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_left
# 652 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
	goto beaston_lab_cokbern_AfterBattle_4

beaston_lab_cokbern_AfterBattle_8:
# 656 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabTwoLeft
# 657 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 658 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 2
# 659 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 660 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 661 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 662 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_grabLeft
# 663 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 664 "data/maps/beaston_pokemonLab/scripts.pory"
	removeobject 3
# 665 "data/maps/beaston_pokemonLab/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 666 "data/maps/beaston_pokemonLab/scripts.pory"
	playse SE_BALL
# 667 "data/maps/beaston_pokemonLab/scripts.pory"
	waitse
# 668 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_finish_left
# 669 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
	goto beaston_lab_cokbern_AfterBattle_7


# 679 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_headToDesk:
# 680 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 680 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 681 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 681 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 681 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 681 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 682 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_left
	step_end

beaston_lab_cokbern_idle::
# 686 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 687 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 688 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_idle_Text_0, MSGBOX_NPC
# 689 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, look_up
# 690 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 691 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 692 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 694 "data/maps/beaston_pokemonLab/scripts.pory"
look_up:
# 695 "data/maps/beaston_pokemonLab/scripts.pory"
	face_up
	step_end

beaston_lab_cokbern_busy::
# 699 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_cokbern_busy_Text_0, MSGBOX_SIGN
	return


# 701 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_grabLeft:
# 702 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 703 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 703 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 705 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_grabTwoLeft:
# 706 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 706 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 707 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
# 707 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 710 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_finish_center:
# 711 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 713 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_finish_left:
# 714 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 715 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

beaston_lab_preventExit_middle::
# 719 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 720 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 721 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 722 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 723 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 724 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 725 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_middle
# 726 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 727 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_walkUp_middle
# 728 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_walkUp_middle
# 729 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 730 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 731 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_preventExit_left::
# 735 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 736 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 737 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 738 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 739 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 740 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 741 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_left
# 742 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 743 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkUp_left
# 744 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp_left
# 745 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 746 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 747 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


beaston_lab_preventExit_right::
# 751 "data/maps/beaston_pokemonLab/scripts.pory"
	lockall
# 752 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_preventExit_surprise
# 753 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 754 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername beaston_lab_professor_intro_Text_0
# 755 "data/maps/beaston_pokemonLab/scripts.pory"
	msgbox beaston_lab_preventExit_middle_Text_0, MSGBOX_AUTOCLOSE
# 756 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmessage
# 757 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkDown_right
# 758 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement 5
# 759 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement 5, beaston_lab_cokbern_walkUp_right
# 760 "data/maps/beaston_pokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_lab_player_walkUp_right
# 761 "data/maps/beaston_pokemonLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 762 "data/maps/beaston_pokemonLab/scripts.pory"
	speakername NULL
# 763 "data/maps/beaston_pokemonLab/scripts.pory"
	releaseall
	return


# 767 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_preventExit_surprise:
# 768 "data/maps/beaston_pokemonLab/scripts.pory"
	emote_exclamation_mark
# 769 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_down
	step_end

# 772 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_middle:
# 773 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 773 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 773 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 775 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_left:
# 776 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 777 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 777 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 777 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 779 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkDown_right:
# 780 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 781 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 781 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
# 781 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_down
	step_end

# 784 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_walkUp_middle:
# 785 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 785 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 785 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 787 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkUp_left:
# 788 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 788 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 789 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 790 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 792 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_cokbern_walkUp_right:
# 793 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 793 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 794 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 795 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
	step_end

# 798 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp_left:
# 799 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 799 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 799 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 800 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_right
# 801 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_in_place_up
	step_end

# 803 "data/maps/beaston_pokemonLab/scripts.pory"
beaston_lab_player_walkUp_right:
# 804 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 804 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 804 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_up
# 805 "data/maps/beaston_pokemonLab/scripts.pory"
	walk_left
# 806 "data/maps/beaston_pokemonLab/scripts.pory"
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
	.string "Quigley$"

beaston_lab_Intro_Text_1:
# 68 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "looks like dad's busy\pi guess just chill til he comes back$"

beaston_lab_quigley_dialogue_Text_0:
# 101 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "fuck of$"

beaston_lab_quigley_dialogue_Text_1:
# 107 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "idk when dad's gonna be back so just\ndon't mess with anything$"

beaston_lab_quigley_stopExit_left_Text_0:
# 116 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "hey dude no$"

beaston_lab_quigley_stopExit_left_Text_1:
# 120 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "we gotta wait for dad$"

beaston_lab_professor_intro_Text_0:
# 213 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Prof. Cokbern$"

beaston_lab_professor_intro_Text_1:
# 214 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "so ur {PLAYER} huh\psweet\pi bet quigley already told u but i've\nheard a lot abt u and i think u would\lmake a good help\pnow i won't force u but i do wanna say\nif u wanna come along u get a partner\lmon as a gift\pi'm studying pokemon genetics and how\nthey're related, it'll be a huge help\lif u can log me info on more mons\pso what do u say$"

beaston_lab_professor_intro_Text_2:
# 216 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "freakin sweet lewis$"

beaston_lab_professor_help_no_Text_0:
# 220 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "aw, well, i'll still let u take a partner mon$"

beaston_lab_professor_starter_choice_Text_0:
# 225 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "quigley move so {PLAYER} can pick a mon$"

beaston_lab_professor_starter_choice_Text_1:
# 229 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "fine$"

beaston_lab_professor_starter_choice_Text_2:
# 234 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "alright kid now pick a mon$"

beaston_lab_professor_appear_Text_0:
# 256 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "???$"

beaston_lab_professor_appear_Text_1:
# 257 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "oh shit i forgot$"

beaston_lab_professor_appear_Text_2:
# 261 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "this place is a mess, sorry\pwhy don't u come on and introduce\nurself$"

beaston_lab_croconut_Text_0:
# 349 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Grass-type Croconut! This\neasygoing Pokémon likes lying in the\lsun.$"

beaston_lab_croconut_Text_1:
# 350 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Say, is Croconut your choice for your\nPokémon partner?$"

beaston_lab_chose_croconut_Text_0:
# 357 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Croconut it is!$"

beaston_lab_chose_croconut_Text_1:
# 366 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Croconut!$"

beaston_lab_skrappup_Text_0:
# 388 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Fire-type Skrappup! This high-\nenergy Pokémon is very loyal!$"

beaston_lab_skrappup_Text_1:
# 389 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Is Skrappup the Pokémon you'd like as\nyour first partner?$"

beaston_lab_chose_skrappup_Text_0:
# 396 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Skrappup it is!$"

beaston_lab_chose_skrappup_Text_1:
# 405 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Skrappup!$"

beaston_lab_kitfisk_Text_0:
# 426 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, the Water-type Kitfisk! This sneaky\nPokémon has a keen hunter's instinct!$"

beaston_lab_kitfisk_Text_1:
# 427 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Would you like to choose Kitfisk as\nyour partner Pokémon?$"

beaston_lab_chose_kitfisk_Text_0:
# 434 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, then Kitfisk it is!$"

beaston_lab_chose_kitfisk_Text_1:
# 443 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "{PLAYER} received Kitfisk!$"

beaston_lab_nicknameStarter_Text_0:
# 509 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Now, would you like to give your new\npartner a nickname?$"

beaston_lab_nicknameStarter_Text_1:
# 517 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "I see. Well, I suppose you can always\ngive it one later, if you'd like.$"

beaston_lab_battleSetup_Text_0:
# 528 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Hmm…$"

beaston_lab_battleSetup_Text_1:
# 532 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah!\p{PLAYER}, since you have your own\nPokémon now, how about challenging\lQuigley to a battle?\pI'd offer myself, but, ah…\nI don't seem to have any Pokémon with\lme.$"

beaston_lab_battleSetup_Text_2:
# 536 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Hey! You never told me I'd be BATTLING\n{PLAYER}!$"

beaston_lab_battleSetup_Text_3:
# 540 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Now, now, Quigley.\pIt's just one battle so {PLAYER} can\nlearn the ropes. I'm sure you'd want\lthem to do the same if you were in\ltheir shoes.$"

beaston_lab_battleSetup_Text_4:
# 544 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "…fine.\p{PLAYER}, you're lucky I only have one mon on me.$"

beaston_lab_quigleyBattle_Text_0:
# 576 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Well… here goes.$"

beaston_lab_quigleyBattle_Text_1:
# 576 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Sigh… about what I expected.$"

beaston_lab_PostQuigleyBattle_Text_0:
# 582 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Aha! You're a natural, {PLAYER}!\pNow, what was I going to say…\pAh, right.\pMy niece, Stella, lives in the next town\nover. I'm sure you two are familiar\lwith each other.\pI'd like for you to bring her back\nhere.$"

beaston_lab_PostQuigleyBattle_Text_1:
# 586 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ugh… of course you ask {PLAYER} to do\nit.\pWhatever. I'm going home.$"

beaston_lab_cokbern_AfterBattle_Text_0:
# 612 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Ah, that Quigley…\pHe can be a bit of a handful at times.$"

beaston_lab_cokbern_AfterBattle_Text_1:
# 615 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "I'll be waiting here for you and Stella,\n{PLAYER}.\pI have something special in store for\nyou two.\pFor now, though, I'll be busy logging my\nrecent findings.$"

beaston_lab_cokbern_AfterBattle_Text_2:
# 619 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "Suppose I should take care of these as\nwell.$"

beaston_lab_cokbern_idle_Text_0:
# 688 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "go on kid pick a mon any mon$"

beaston_lab_cokbern_busy_Text_0:
# 699 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "He seems too busy writing things down\nto talk…$"

beaston_lab_preventExit_middle_Text_0:
# 723 "data/maps/beaston_pokemonLab/scripts.pory"
	.string "wait bro don't leave$"
