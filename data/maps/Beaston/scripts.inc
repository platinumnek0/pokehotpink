# 1 "data/maps/Beaston/scripts.pory"

# 2 "data/maps/Beaston/scripts.pory"
Beaston_MapScripts::
# 3 "data/maps/Beaston/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, beaston_onWarp
# 4 "data/maps/Beaston/scripts.pory"
	.byte 0
# 5 "data/maps/Beaston/scripts.pory"

# 6 "data/maps/Beaston/scripts.pory"
beaston_onWarp::
# 7 "data/maps/Beaston/scripts.pory"
    map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, beaston_checkVar
# 8 "data/maps/Beaston/scripts.pory"
    .2byte 0

beastonSign::
# 11 "data/maps/Beaston/scripts.pory"
	msgbox beastonSign_Text_0, MSGBOX_SIGN
	return


playersHouseSign::
# 15 "data/maps/Beaston/scripts.pory"
	msgbox playersHouseSign_Text_0, MSGBOX_SIGN
	return


quigleysHouseSign::
# 19 "data/maps/Beaston/scripts.pory"
	msgbox quigleysHouseSign_Text_0, MSGBOX_SIGN
	return


beastonLabSign::
# 23 "data/maps/Beaston/scripts.pory"
	msgbox beastonLabSign_Text_0, MSGBOX_SIGN
	return


beaston_checkVar::
# 27 "data/maps/Beaston/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 28 "data/maps/Beaston/scripts.pory"
	goto beaston_quigleyAsk
	return


beaston_quigleyAsk::
# 32 "data/maps/Beaston/scripts.pory"
	lockall
# 33 "data/maps/Beaston/scripts.pory"
	applymovement 1, playerSurprise
# 34 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 35 "data/maps/Beaston/scripts.pory"
	applymovement 1, playersHouse_dadLookRight
# 36 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 37 "data/maps/Beaston/scripts.pory"
	speakername beaston_quigleyAsk_Text_0
# 38 "data/maps/Beaston/scripts.pory"
	msgbox beaston_quigleyAsk_Text_1, MSGBOX_YESNO
# 39 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_sendYouBack
# 40 "data/maps/Beaston/scripts.pory"
	goto beaston_labEscort
	return


beaston_sendYouBack::
# 44 "data/maps/Beaston/scripts.pory"
	msgbox beaston_sendYouBack_Text_0
# 45 "data/maps/Beaston/scripts.pory"
	waitmessage
# 46 "data/maps/Beaston/scripts.pory"
	speakername NULL
# 47 "data/maps/Beaston/scripts.pory"
	opendoor 26, 24
# 48 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 49 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 50 "data/maps/Beaston/scripts.pory"
	warp MAP_BEASTON_PLAYERS_HOUSE_FLOOR1, 2, 10
# 51 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_labEscort::
# 55 "data/maps/Beaston/scripts.pory"
	speakername beaston_quigleyAsk_Text_0
# 56 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/Beaston/scripts.pory"
	waitmessage
# 58 "data/maps/Beaston/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 59 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 60 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02A
# 61 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_quigleyEscort1
# 62 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerFollowQuigley1
# 63 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 64 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_1, MSGBOX_AUTOCLOSE
# 65 "data/maps/Beaston/scripts.pory"
	waitmessage
# 66 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_quigleyEscort2
# 67 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerFollowQuigley2
# 68 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 69 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/Beaston/scripts.pory"
	waitmessage
# 71 "data/maps/Beaston/scripts.pory"
	speakername NULL
# 72 "data/maps/Beaston/scripts.pory"
	opendoor 10, 16
# 73 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_playerWalkBack
# 74 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 75 "data/maps/Beaston/scripts.pory"
	removeobject 1
# 76 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 77 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 78 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 79 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 80 "data/maps/Beaston/scripts.pory"
	warp MAP_BEASTON_POKEMON_LAB, 15, 17
# 81 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 84 "data/maps/Beaston/scripts.pory"
beaston_playerWalkBack:
# 85 "data/maps/Beaston/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/Beaston/scripts.pory"
beaston_quigleyEscort1:
# 88 "data/maps/Beaston/scripts.pory"
	walk_left
# 88 "data/maps/Beaston/scripts.pory"
	walk_left
# 88 "data/maps/Beaston/scripts.pory"
	walk_left
# 88 "data/maps/Beaston/scripts.pory"
	walk_left
# 89 "data/maps/Beaston/scripts.pory"
	walk_up
# 89 "data/maps/Beaston/scripts.pory"
	walk_up
# 89 "data/maps/Beaston/scripts.pory"
	walk_up
# 89 "data/maps/Beaston/scripts.pory"
	walk_up
# 90 "data/maps/Beaston/scripts.pory"
	walk_left
# 91 "data/maps/Beaston/scripts.pory"
	walk_in_place_right
	step_end

# 93 "data/maps/Beaston/scripts.pory"
beaston_playerFollowQuigley1:
# 94 "data/maps/Beaston/scripts.pory"
	walk_left
# 94 "data/maps/Beaston/scripts.pory"
	walk_left
# 94 "data/maps/Beaston/scripts.pory"
	walk_left
# 94 "data/maps/Beaston/scripts.pory"
	walk_left
# 94 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_up
# 95 "data/maps/Beaston/scripts.pory"
	walk_up
# 95 "data/maps/Beaston/scripts.pory"
	walk_up
# 95 "data/maps/Beaston/scripts.pory"
	walk_up
# 96 "data/maps/Beaston/scripts.pory"
	walk_in_place_left
	step_end

# 98 "data/maps/Beaston/scripts.pory"
beaston_quigleyEscort2:
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
# 101 "data/maps/Beaston/scripts.pory"
	walk_in_place_down
	step_end

# 103 "data/maps/Beaston/scripts.pory"
beaston_playerFollowQuigley2:
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 104 "data/maps/Beaston/scripts.pory"
	walk_left
# 105 "data/maps/Beaston/scripts.pory"
	walk_up
# 105 "data/maps/Beaston/scripts.pory"
	walk_up
# 105 "data/maps/Beaston/scripts.pory"
	walk_up
	step_end

beaston_rivalBattleLoss_setup::
# 109 "data/maps/Beaston/scripts.pory"
	lockall
# 110 "data/maps/Beaston/scripts.pory"
	clearflag FLAG_UNUSED_0x02B
# 111 "data/maps/Beaston/scripts.pory"
	addobject 2
	return


beaston_rivalBattleLoss_text::
# 115 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 116 "data/maps/Beaston/scripts.pory"
	speakername beaston_rivalBattleLoss_text_Text_0
# 117 "data/maps/Beaston/scripts.pory"
	msgbox beaston_rivalBattleLoss_text_Text_1, MSGBOX_AUTOCLOSE
# 118 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 119 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 120 "data/maps/Beaston/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
# 121 "data/maps/Beaston/scripts.pory"
	speakername NULL
# 122 "data/maps/Beaston/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 123 "data/maps/Beaston/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq beaston_rivalBattleLoss_text_1
# 128 "data/maps/Beaston/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq beaston_rivalBattleLoss_text_2
# 133 "data/maps/Beaston/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq beaston_rivalBattleLoss_text_3
	return

beaston_rivalBattleLoss_text_1:
# 125 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 126 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x027
	return

beaston_rivalBattleLoss_text_2:
# 130 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 131 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x027
	return

beaston_rivalBattleLoss_text_3:
# 135 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 136 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x026
	return


beaston_rivalBattleLoss_left::
# 141 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 142 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_left_enter
# 143 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 144 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 145 "data/maps/Beaston/scripts.pory"
	waitmessage
# 146 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_left_leave
# 147 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 148 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 149 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 150 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 152 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_left_enter:
# 153 "data/maps/Beaston/scripts.pory"
	walk_right
# 153 "data/maps/Beaston/scripts.pory"
	walk_right
# 153 "data/maps/Beaston/scripts.pory"
	walk_right
# 153 "data/maps/Beaston/scripts.pory"
	walk_right
# 153 "data/maps/Beaston/scripts.pory"
	walk_right
# 154 "data/maps/Beaston/scripts.pory"
	walk_down
# 154 "data/maps/Beaston/scripts.pory"
	walk_down
# 154 "data/maps/Beaston/scripts.pory"
	walk_down
# 154 "data/maps/Beaston/scripts.pory"
	walk_down
# 155 "data/maps/Beaston/scripts.pory"
	walk_right
# 155 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_left_leave:
# 158 "data/maps/Beaston/scripts.pory"
	walk_left
# 158 "data/maps/Beaston/scripts.pory"
	walk_left
# 159 "data/maps/Beaston/scripts.pory"
	walk_up
# 159 "data/maps/Beaston/scripts.pory"
	walk_up
# 159 "data/maps/Beaston/scripts.pory"
	walk_up
# 159 "data/maps/Beaston/scripts.pory"
	walk_up
# 160 "data/maps/Beaston/scripts.pory"
	walk_left
# 160 "data/maps/Beaston/scripts.pory"
	walk_left
# 160 "data/maps/Beaston/scripts.pory"
	walk_left
# 160 "data/maps/Beaston/scripts.pory"
	walk_left
# 160 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_rivalBattleLoss_down::
# 164 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 165 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_down_enter
# 166 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 167 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 168 "data/maps/Beaston/scripts.pory"
	waitmessage
# 169 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_down_leave
# 170 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 171 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 172 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 173 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 175 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_down_enter:
# 176 "data/maps/Beaston/scripts.pory"
	walk_right
# 176 "data/maps/Beaston/scripts.pory"
	walk_right
# 176 "data/maps/Beaston/scripts.pory"
	walk_right
# 176 "data/maps/Beaston/scripts.pory"
	walk_right
# 176 "data/maps/Beaston/scripts.pory"
	walk_right
# 177 "data/maps/Beaston/scripts.pory"
	walk_down
# 177 "data/maps/Beaston/scripts.pory"
	walk_down
# 177 "data/maps/Beaston/scripts.pory"
	walk_down
# 177 "data/maps/Beaston/scripts.pory"
	walk_down
# 177 "data/maps/Beaston/scripts.pory"
	walk_down
# 178 "data/maps/Beaston/scripts.pory"
	walk_right
# 178 "data/maps/Beaston/scripts.pory"
	walk_right
# 178 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 180 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_down_leave:
# 181 "data/maps/Beaston/scripts.pory"
	walk_left
# 181 "data/maps/Beaston/scripts.pory"
	walk_left
# 181 "data/maps/Beaston/scripts.pory"
	walk_left
# 182 "data/maps/Beaston/scripts.pory"
	walk_up
# 182 "data/maps/Beaston/scripts.pory"
	walk_up
# 182 "data/maps/Beaston/scripts.pory"
	walk_up
# 182 "data/maps/Beaston/scripts.pory"
	walk_up
# 182 "data/maps/Beaston/scripts.pory"
	walk_up
# 183 "data/maps/Beaston/scripts.pory"
	walk_left
# 183 "data/maps/Beaston/scripts.pory"
	walk_left
# 183 "data/maps/Beaston/scripts.pory"
	walk_left
# 183 "data/maps/Beaston/scripts.pory"
	walk_left
# 183 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_rivalBattleLoss_right::
# 187 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 188 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_right_enter
# 189 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 190 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 191 "data/maps/Beaston/scripts.pory"
	waitmessage
# 192 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_right_leave
# 193 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 194 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 195 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 196 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 198 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_right_enter:
# 199 "data/maps/Beaston/scripts.pory"
	walk_right
# 199 "data/maps/Beaston/scripts.pory"
	walk_right
# 199 "data/maps/Beaston/scripts.pory"
	walk_right
# 199 "data/maps/Beaston/scripts.pory"
	walk_right
# 199 "data/maps/Beaston/scripts.pory"
	walk_right
# 200 "data/maps/Beaston/scripts.pory"
	walk_down
# 200 "data/maps/Beaston/scripts.pory"
	walk_down
# 200 "data/maps/Beaston/scripts.pory"
	walk_down
# 200 "data/maps/Beaston/scripts.pory"
	walk_down
# 201 "data/maps/Beaston/scripts.pory"
	walk_right
# 201 "data/maps/Beaston/scripts.pory"
	walk_right
# 201 "data/maps/Beaston/scripts.pory"
	walk_right
# 201 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 203 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_right_leave:
# 204 "data/maps/Beaston/scripts.pory"
	walk_left
# 204 "data/maps/Beaston/scripts.pory"
	walk_left
# 204 "data/maps/Beaston/scripts.pory"
	walk_left
# 204 "data/maps/Beaston/scripts.pory"
	walk_left
# 205 "data/maps/Beaston/scripts.pory"
	walk_up
# 205 "data/maps/Beaston/scripts.pory"
	walk_up
# 205 "data/maps/Beaston/scripts.pory"
	walk_up
# 205 "data/maps/Beaston/scripts.pory"
	walk_up
# 206 "data/maps/Beaston/scripts.pory"
	walk_left
# 206 "data/maps/Beaston/scripts.pory"
	walk_left
# 206 "data/maps/Beaston/scripts.pory"
	walk_left
# 206 "data/maps/Beaston/scripts.pory"
	walk_left
# 206 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_BlockNorthExit::
# 210 "data/maps/Beaston/scripts.pory"
	lockall
# 211 "data/maps/Beaston/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 212 "data/maps/Beaston/scripts.pory"
	waitmoncry
# 213 "data/maps/Beaston/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 214 "data/maps/Beaston/scripts.pory"
	waitse
# 215 "data/maps/Beaston/scripts.pory"
	playse SE_EFFECTIVE
# 216 "data/maps/Beaston/scripts.pory"
	waitse
# 217 "data/maps/Beaston/scripts.pory"
	playse SE_EFFECTIVE
# 218 "data/maps/Beaston/scripts.pory"
	waitse
# 219 "data/maps/Beaston/scripts.pory"
	msgbox beaston_BlockNorthExit_Text_0, MSGBOX_AUTOCLOSE
# 220 "data/maps/Beaston/scripts.pory"
	waitmessage
# 221 "data/maps/Beaston/scripts.pory"
	playmoncry SPECIES_PIKIPEK, CRY_MODE_NORMAL
# 222 "data/maps/Beaston/scripts.pory"
	waitmoncry
# 223 "data/maps/Beaston/scripts.pory"
	playse SE_EFFECTIVE
# 224 "data/maps/Beaston/scripts.pory"
	waitse
# 225 "data/maps/Beaston/scripts.pory"
	msgbox beaston_BlockNorthExit_Text_1, MSGBOX_AUTOCLOSE
# 226 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_player_stepBack
# 227 "data/maps/Beaston/scripts.pory"
	waitmovement 0
# 228 "data/maps/Beaston/scripts.pory"
	waitmessage
# 229 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 232 "data/maps/Beaston/scripts.pory"
beaston_player_stepBack:
# 233 "data/maps/Beaston/scripts.pory"
	walk_down
	step_end

beastonSign_Text_0:
# 11 "data/maps/Beaston/scripts.pory"
	.string "this beaston bitch$"

playersHouseSign_Text_0:
# 15 "data/maps/Beaston/scripts.pory"
	.string "{PLAYER}'s house$"

quigleysHouseSign_Text_0:
# 19 "data/maps/Beaston/scripts.pory"
	.string "quigley's house$"

beastonLabSign_Text_0:
# 23 "data/maps/Beaston/scripts.pory"
	.string "beaston research lab$"

beaston_quigleyAsk_Text_0:
# 37 "data/maps/Beaston/scripts.pory"
	.string "Quigley$"

beaston_quigleyAsk_Text_1:
# 38 "data/maps/Beaston/scripts.pory"
	.string "so u ready$"

beaston_sendYouBack_Text_0:
# 44 "data/maps/Beaston/scripts.pory"
	.string "yeah thought so\pget ur stuff and come back$"

beaston_labEscort_Text_0:
# 56 "data/maps/Beaston/scripts.pory"
	.string "sweet c'mon$"

beaston_labEscort_Text_1:
# 64 "data/maps/Beaston/scripts.pory"
	.string "right so\pmy dad needed someone to help with his\nresearch\pidk what he's doing but he heard stella\ntalk abt u\pso i guess he thought you'd be good\nhelp$"

beaston_labEscort_Text_2:
# 69 "data/maps/Beaston/scripts.pory"
	.string "idk why he didn't pick me but\pguess that doesn't really matter now\pc'mon$"

beaston_rivalBattleLoss_text_Text_0:
# 116 "data/maps/Beaston/scripts.pory"
	.string "Prof. Cokbern$"

beaston_rivalBattleLoss_text_Text_1:
# 117 "data/maps/Beaston/scripts.pory"
	.string "{PLAYER}! There you are!\pI'm glad you're alright, seems things\ndidn't quite go to plan…\pRegardless, I've something to ask of\nyou.\pMy niece, Stella, lives in the next town\nover. I'm sure you two are familiar\lwith each other.\pI'd like for you to bring her back to my\nlab, I've got something special for\lyou two.\pI'll be logging my recent findings, if\nyou need me.$"

beaston_BlockNorthExit_Text_0:
# 219 "data/maps/Beaston/scripts.pory"
	.string "Sounds like something hectic is\nhappening up ahead…$"

beaston_BlockNorthExit_Text_1:
# 225 "data/maps/Beaston/scripts.pory"
	.string "You decide it's best to stay out of it.$"
