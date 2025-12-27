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
    map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, beaston_quigleyAsk
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


beaston_quigleyAsk::
# 27 "data/maps/Beaston/scripts.pory"
	lockall
# 28 "data/maps/Beaston/scripts.pory"
	applymovement 1, playerSurprise
# 29 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 30 "data/maps/Beaston/scripts.pory"
	applymovement 1, playersHouse_dadLookRight
# 31 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 32 "data/maps/Beaston/scripts.pory"
	speakername beaston_quigleyAsk_Text_0
# 33 "data/maps/Beaston/scripts.pory"
	msgbox beaston_quigleyAsk_Text_1, MSGBOX_YESNO
# 34 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_sendYouBack
# 35 "data/maps/Beaston/scripts.pory"
	goto beaston_labEscort
	return


beaston_sendYouBack::
# 39 "data/maps/Beaston/scripts.pory"
	msgbox beaston_sendYouBack_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/Beaston/scripts.pory"
	waitmessage
# 41 "data/maps/Beaston/scripts.pory"
	speakername NULL
# 42 "data/maps/Beaston/scripts.pory"
	opendoor 30, 24
# 43 "data/maps/Beaston/scripts.pory"
	waitdooranim
# 44 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 45 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/Beaston/scripts.pory"
	warp MAP_BEASTON_PLAYERS_HOUSE_FLOOR1, 2, 10
# 47 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_labEscort::
# 51 "data/maps/Beaston/scripts.pory"
	speakername beaston_quigleyAsk_Text_0
# 52 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/Beaston/scripts.pory"
	waitmessage
# 54 "data/maps/Beaston/scripts.pory"
	setflag FLAG_HIDE_AMANITA_LAB
# 55 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_quigleyEscort1
# 56 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerFollowQuigley1
# 57 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 58 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_1, MSGBOX_AUTOCLOSE
# 59 "data/maps/Beaston/scripts.pory"
	waitmessage
# 60 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_quigleyEscort2
# 61 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerFollowQuigley2
# 62 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 63 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_2, MSGBOX_AUTOCLOSE
# 64 "data/maps/Beaston/scripts.pory"
	waitmessage
# 65 "data/maps/Beaston/scripts.pory"
	speakername NULL
# 66 "data/maps/Beaston/scripts.pory"
	opendoor 14, 16
# 67 "data/maps/Beaston/scripts.pory"
	waitdooranim
# 68 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_playerWalkBack
# 69 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 70 "data/maps/Beaston/scripts.pory"
	removeobject 1
# 71 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 72 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 73 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 74 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 75 "data/maps/Beaston/scripts.pory"
	warp MAP_BEASTON_POKEMON_LAB, 15, 17
# 76 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 79 "data/maps/Beaston/scripts.pory"
beaston_playerWalkBack:
# 80 "data/maps/Beaston/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/Beaston/scripts.pory"
beaston_quigleyEscort1:
# 83 "data/maps/Beaston/scripts.pory"
	walk_left
# 83 "data/maps/Beaston/scripts.pory"
	walk_left
# 83 "data/maps/Beaston/scripts.pory"
	walk_left
# 83 "data/maps/Beaston/scripts.pory"
	walk_left
# 84 "data/maps/Beaston/scripts.pory"
	walk_up
# 84 "data/maps/Beaston/scripts.pory"
	walk_up
# 84 "data/maps/Beaston/scripts.pory"
	walk_up
# 84 "data/maps/Beaston/scripts.pory"
	walk_up
# 85 "data/maps/Beaston/scripts.pory"
	walk_left
# 86 "data/maps/Beaston/scripts.pory"
	walk_in_place_right
	step_end

# 88 "data/maps/Beaston/scripts.pory"
beaston_playerFollowQuigley1:
# 89 "data/maps/Beaston/scripts.pory"
	walk_left
# 89 "data/maps/Beaston/scripts.pory"
	walk_left
# 89 "data/maps/Beaston/scripts.pory"
	walk_left
# 89 "data/maps/Beaston/scripts.pory"
	walk_left
# 89 "data/maps/Beaston/scripts.pory"
	walk_left
# 90 "data/maps/Beaston/scripts.pory"
	walk_up
# 90 "data/maps/Beaston/scripts.pory"
	walk_up
# 90 "data/maps/Beaston/scripts.pory"
	walk_up
# 90 "data/maps/Beaston/scripts.pory"
	walk_up
# 91 "data/maps/Beaston/scripts.pory"
	walk_in_place_left
	step_end

# 93 "data/maps/Beaston/scripts.pory"
beaston_quigleyEscort2:
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
	walk_in_place_down
	step_end

# 98 "data/maps/Beaston/scripts.pory"
beaston_playerFollowQuigley2:
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
# 99 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
# 100 "data/maps/Beaston/scripts.pory"
	walk_up
	step_end

beaston_rivalBattleLoss_setup::
# 104 "data/maps/Beaston/scripts.pory"
	lockall
# 105 "data/maps/Beaston/scripts.pory"
	clearflag FLAG_HIDE_AMANITA_LAB
# 106 "data/maps/Beaston/scripts.pory"
	addobject 2
	return


beaston_rivalBattleLoss_text::
# 110 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 111 "data/maps/Beaston/scripts.pory"
	speakername nameplateProfessor
# 112 "data/maps/Beaston/scripts.pory"
	msgbox beaston_rivalBattleLoss_text_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/Beaston/scripts.pory"
	setflag FLAG_HIDE_AMANITA_LAB
# 114 "data/maps/Beaston/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_LAB
# 115 "data/maps/Beaston/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
# 116 "data/maps/Beaston/scripts.pory"
	speakername NULL
# 117 "data/maps/Beaston/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
	return


beaston_rivalBattleLoss_left::
# 121 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 122 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_left_enter
# 123 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 124 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 125 "data/maps/Beaston/scripts.pory"
	waitmessage
# 126 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_left_leave
# 127 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 128 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 129 "data/maps/Beaston/scripts.pory"
	setflag FLAG_HIDE_AMANITA_LAB
# 130 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 132 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_left_enter:
# 133 "data/maps/Beaston/scripts.pory"
	walk_right
# 133 "data/maps/Beaston/scripts.pory"
	walk_right
# 133 "data/maps/Beaston/scripts.pory"
	walk_right
# 133 "data/maps/Beaston/scripts.pory"
	walk_right
# 133 "data/maps/Beaston/scripts.pory"
	walk_right
# 134 "data/maps/Beaston/scripts.pory"
	walk_down
# 134 "data/maps/Beaston/scripts.pory"
	walk_down
# 134 "data/maps/Beaston/scripts.pory"
	walk_down
# 134 "data/maps/Beaston/scripts.pory"
	walk_down
# 135 "data/maps/Beaston/scripts.pory"
	walk_right
# 135 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 137 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_left_leave:
# 138 "data/maps/Beaston/scripts.pory"
	walk_left
# 138 "data/maps/Beaston/scripts.pory"
	walk_left
# 139 "data/maps/Beaston/scripts.pory"
	walk_up
# 139 "data/maps/Beaston/scripts.pory"
	walk_up
# 139 "data/maps/Beaston/scripts.pory"
	walk_up
# 139 "data/maps/Beaston/scripts.pory"
	walk_up
# 140 "data/maps/Beaston/scripts.pory"
	walk_left
# 140 "data/maps/Beaston/scripts.pory"
	walk_left
# 140 "data/maps/Beaston/scripts.pory"
	walk_left
# 140 "data/maps/Beaston/scripts.pory"
	walk_left
# 140 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_rivalBattleLoss_down::
# 144 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 145 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_down_enter
# 146 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 147 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 148 "data/maps/Beaston/scripts.pory"
	waitmessage
# 149 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_down_leave
# 150 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 151 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 152 "data/maps/Beaston/scripts.pory"
	setflag FLAG_HIDE_AMANITA_LAB
# 153 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 155 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_down_enter:
# 156 "data/maps/Beaston/scripts.pory"
	walk_right
# 156 "data/maps/Beaston/scripts.pory"
	walk_right
# 156 "data/maps/Beaston/scripts.pory"
	walk_right
# 156 "data/maps/Beaston/scripts.pory"
	walk_right
# 156 "data/maps/Beaston/scripts.pory"
	walk_right
# 157 "data/maps/Beaston/scripts.pory"
	walk_down
# 157 "data/maps/Beaston/scripts.pory"
	walk_down
# 157 "data/maps/Beaston/scripts.pory"
	walk_down
# 157 "data/maps/Beaston/scripts.pory"
	walk_down
# 157 "data/maps/Beaston/scripts.pory"
	walk_down
# 158 "data/maps/Beaston/scripts.pory"
	walk_right
# 158 "data/maps/Beaston/scripts.pory"
	walk_right
# 158 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 160 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_down_leave:
# 161 "data/maps/Beaston/scripts.pory"
	walk_left
# 161 "data/maps/Beaston/scripts.pory"
	walk_left
# 161 "data/maps/Beaston/scripts.pory"
	walk_left
# 162 "data/maps/Beaston/scripts.pory"
	walk_up
# 162 "data/maps/Beaston/scripts.pory"
	walk_up
# 162 "data/maps/Beaston/scripts.pory"
	walk_up
# 162 "data/maps/Beaston/scripts.pory"
	walk_up
# 162 "data/maps/Beaston/scripts.pory"
	walk_up
# 163 "data/maps/Beaston/scripts.pory"
	walk_left
# 163 "data/maps/Beaston/scripts.pory"
	walk_left
# 163 "data/maps/Beaston/scripts.pory"
	walk_left
# 163 "data/maps/Beaston/scripts.pory"
	walk_left
# 163 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_rivalBattleLoss_right::
# 167 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 168 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_right_enter
# 169 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 170 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 171 "data/maps/Beaston/scripts.pory"
	waitmessage
# 172 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_right_leave
# 173 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 174 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 175 "data/maps/Beaston/scripts.pory"
	setflag FLAG_HIDE_AMANITA_LAB
# 176 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 178 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_right_enter:
# 179 "data/maps/Beaston/scripts.pory"
	walk_right
# 179 "data/maps/Beaston/scripts.pory"
	walk_right
# 179 "data/maps/Beaston/scripts.pory"
	walk_right
# 179 "data/maps/Beaston/scripts.pory"
	walk_right
# 179 "data/maps/Beaston/scripts.pory"
	walk_right
# 180 "data/maps/Beaston/scripts.pory"
	walk_down
# 180 "data/maps/Beaston/scripts.pory"
	walk_down
# 180 "data/maps/Beaston/scripts.pory"
	walk_down
# 180 "data/maps/Beaston/scripts.pory"
	walk_down
# 181 "data/maps/Beaston/scripts.pory"
	walk_right
# 181 "data/maps/Beaston/scripts.pory"
	walk_right
# 181 "data/maps/Beaston/scripts.pory"
	walk_right
# 181 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 183 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_right_leave:
# 184 "data/maps/Beaston/scripts.pory"
	walk_left
# 184 "data/maps/Beaston/scripts.pory"
	walk_left
# 184 "data/maps/Beaston/scripts.pory"
	walk_left
# 184 "data/maps/Beaston/scripts.pory"
	walk_left
# 185 "data/maps/Beaston/scripts.pory"
	walk_up
# 185 "data/maps/Beaston/scripts.pory"
	walk_up
# 185 "data/maps/Beaston/scripts.pory"
	walk_up
# 185 "data/maps/Beaston/scripts.pory"
	walk_up
# 186 "data/maps/Beaston/scripts.pory"
	walk_left
# 186 "data/maps/Beaston/scripts.pory"
	walk_left
# 186 "data/maps/Beaston/scripts.pory"
	walk_left
# 186 "data/maps/Beaston/scripts.pory"
	walk_left
# 186 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_BlockNorthExit::
# 190 "data/maps/Beaston/scripts.pory"
	lockall
# 191 "data/maps/Beaston/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 192 "data/maps/Beaston/scripts.pory"
	waitmoncry
# 193 "data/maps/Beaston/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 194 "data/maps/Beaston/scripts.pory"
	waitse
# 195 "data/maps/Beaston/scripts.pory"
	playse SE_EFFECTIVE
# 196 "data/maps/Beaston/scripts.pory"
	waitse
# 197 "data/maps/Beaston/scripts.pory"
	playse SE_EFFECTIVE
# 198 "data/maps/Beaston/scripts.pory"
	waitse
# 199 "data/maps/Beaston/scripts.pory"
	msgbox beaston_BlockNorthExit_Text_0, MSGBOX_AUTOCLOSE
# 200 "data/maps/Beaston/scripts.pory"
	waitmessage
# 201 "data/maps/Beaston/scripts.pory"
	playmoncry SPECIES_PIKIPEK, CRY_MODE_NORMAL
# 202 "data/maps/Beaston/scripts.pory"
	waitmoncry
# 203 "data/maps/Beaston/scripts.pory"
	playse SE_EFFECTIVE
# 204 "data/maps/Beaston/scripts.pory"
	waitse
# 205 "data/maps/Beaston/scripts.pory"
	msgbox beaston_BlockNorthExit_Text_1, MSGBOX_AUTOCLOSE
# 206 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_player_stepBack
# 207 "data/maps/Beaston/scripts.pory"
	waitmovement 0
# 208 "data/maps/Beaston/scripts.pory"
	waitmessage
# 209 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 212 "data/maps/Beaston/scripts.pory"
beaston_player_stepBack:
# 213 "data/maps/Beaston/scripts.pory"
	walk_down
	step_end

beaston_burgerGuyRoadblockItemCheck::
# 217 "data/maps/Beaston/scripts.pory"
	lockall
# 218 "data/maps/Beaston/scripts.pory"
	faceplayer
# 219 "data/maps/Beaston/scripts.pory"
	checkitem ITEM_BURGER_COUPON
# 220 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, beaston_burgerGuyRoadblockTalkedTo
# 221 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerGuyPigleys, MSGBOX_NPC
# 222 "data/maps/Beaston/scripts.pory"
	waitmessage
# 223 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_burgerGuyRoadblockTalkedTo::
# 227 "data/maps/Beaston/scripts.pory"
	call beaston_burgerGuyRoadblockAskQuestion
# 228 "data/maps/Beaston/scripts.pory"
	waitmessage
# 229 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_burgerGuyRoadblockAskQuestion::
# 233 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerGuyRoadblock, MSGBOX_YESNO
# 234 "data/maps/Beaston/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq beaston_burgerGuyRoadblockAskQuestion_2
# 240 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerGuyNo, MSGBOX_DEFAULT
beaston_burgerGuyRoadblockAskQuestion_1:
# 242 "data/maps/Beaston/scripts.pory"
	waitmessage
# 243 "data/maps/Beaston/scripts.pory"
	giveitem ITEM_BURGER_COUPON, 1
# 244 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerGuyCoupon, MSGBOX_AUTOCLOSE
	return

beaston_burgerGuyRoadblockAskQuestion_2:
# 236 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerGuyYes, MSGBOX_DEFAULT
	goto beaston_burgerGuyRoadblockAskQuestion_1


beaston_burgerGuyRoadblock_top::
# 276 "data/maps/Beaston/scripts.pory"
	lockall
# 277 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyUp
# 278 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_down
# 279 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 280 "data/maps/Beaston/scripts.pory"
	checkitem ITEM_BURGER_COUPON
# 281 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, beaston_burgerGuyRoadblock_topHaveVoucher
# 282 "data/maps/Beaston/scripts.pory"
	call beaston_burgerGuyRoadblockAskQuestion
# 283 "data/maps/Beaston/scripts.pory"
	waitmessage
# 284 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_playerLeaveBurgerGuy
# 285 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 286 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyDefault
# 287 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 288 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_burgerGuyRoadblock_topHaveVoucher::
# 292 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerHaveCoupon, MSGBOX_AUTOCLOSE
# 293 "data/maps/Beaston/scripts.pory"
	waitmessage
# 294 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_playerLeaveBurgerGuy
# 295 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 296 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyDefault
# 297 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 298 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_burgerGuyRoadblock_bottom::
# 302 "data/maps/Beaston/scripts.pory"
	lockall
# 303 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyDown
# 304 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_up
# 305 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 306 "data/maps/Beaston/scripts.pory"
	checkitem ITEM_BURGER_COUPON
# 307 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, beaston_burgerGuyRoadblock_topHaveVoucher
# 308 "data/maps/Beaston/scripts.pory"
	call beaston_burgerGuyRoadblockAskQuestion
# 309 "data/maps/Beaston/scripts.pory"
	waitmessage
# 310 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_playerLeaveBurgerGuy
# 311 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 312 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyDefault
# 313 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 314 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_burgerGuyRoadblock_extraBottom::
# 318 "data/maps/Beaston/scripts.pory"
	lockall
# 319 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyExtraDown
# 320 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_up
# 321 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 322 "data/maps/Beaston/scripts.pory"
	checkitem ITEM_BURGER_COUPON
# 323 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, beaston_burgerGuyRoadblock_bottomHaveVoucher
# 324 "data/maps/Beaston/scripts.pory"
	call beaston_burgerGuyRoadblockAskQuestion
# 325 "data/maps/Beaston/scripts.pory"
	waitmessage
# 326 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_playerLeaveBurgerGuy
# 327 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 328 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyReturn
# 329 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 330 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_burgerGuyRoadblock_bottomHaveVoucher::
# 334 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_burgerHaveCoupon, MSGBOX_AUTOCLOSE
# 335 "data/maps/Beaston/scripts.pory"
	waitmessage
# 336 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_playerLeaveBurgerGuy
# 337 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 338 "data/maps/Beaston/scripts.pory"
	applymovement 3, beaston_movement_burgerGuyReturn
# 339 "data/maps/Beaston/scripts.pory"
	waitmovement 3
# 340 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 343 "data/maps/Beaston/scripts.pory"
beaston_movement_burgerGuyUp:
# 344 "data/maps/Beaston/scripts.pory"
	emote_exclamation_mark
# 345 "data/maps/Beaston/scripts.pory"
	face_up
	step_end

# 348 "data/maps/Beaston/scripts.pory"
beaston_movement_burgerGuyDown:
# 349 "data/maps/Beaston/scripts.pory"
	emote_exclamation_mark
# 350 "data/maps/Beaston/scripts.pory"
	face_down
	step_end

# 353 "data/maps/Beaston/scripts.pory"
beaston_movement_burgerGuyExtraDown:
# 354 "data/maps/Beaston/scripts.pory"
	emote_exclamation_mark
# 355 "data/maps/Beaston/scripts.pory"
	face_down
# 356 "data/maps/Beaston/scripts.pory"
	delay_4
# 357 "data/maps/Beaston/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/Beaston/scripts.pory"
beaston_movement_burgerGuyDefault:
# 361 "data/maps/Beaston/scripts.pory"
	face_right
	step_end

# 364 "data/maps/Beaston/scripts.pory"
beaston_movement_burgerGuyReturn:
# 365 "data/maps/Beaston/scripts.pory"
	walk_up
# 366 "data/maps/Beaston/scripts.pory"
	face_right
	step_end

# 369 "data/maps/Beaston/scripts.pory"
beaston_movement_playerLeaveBurgerGuy:
# 370 "data/maps/Beaston/scripts.pory"
	walk_right
# 370 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

beaston_blockWestExit::
# 374 "data/maps/Beaston/scripts.pory"
	lockall
# 375 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_cantLeaveYet, MSGBOX_AUTOCLOSE
# 376 "data/maps/Beaston/scripts.pory"
	waitmessage
# 377 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_blockWestExit
# 378 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 379 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_blockEastExit::
# 383 "data/maps/Beaston/scripts.pory"
	lockall
# 384 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_cantLeaveYet, MSGBOX_AUTOCLOSE
# 385 "data/maps/Beaston/scripts.pory"
	waitmessage
# 386 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_blockEastExit
# 387 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 388 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_blockSouthExit::
# 392 "data/maps/Beaston/scripts.pory"
	lockall
# 393 "data/maps/Beaston/scripts.pory"
	msgbox beaston_text_cantLeaveYet, MSGBOX_AUTOCLOSE
# 394 "data/maps/Beaston/scripts.pory"
	waitmessage
# 395 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_movement_blockSouthExit
# 396 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 397 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 406 "data/maps/Beaston/scripts.pory"
beaston_movement_blockWestExit:
# 407 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 410 "data/maps/Beaston/scripts.pory"
beaston_movement_blockEastExit:
# 411 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

# 414 "data/maps/Beaston/scripts.pory"
beaston_movement_blockSouthExit:
# 415 "data/maps/Beaston/scripts.pory"
	walk_up
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
# 32 "data/maps/Beaston/scripts.pory"
	.string "Quigley$"

beaston_quigleyAsk_Text_1:
# 33 "data/maps/Beaston/scripts.pory"
	.string "so u ready$"

beaston_sendYouBack_Text_0:
# 39 "data/maps/Beaston/scripts.pory"
	.string "yeah thought so\pget ur stuff and come back$"

beaston_labEscort_Text_0:
# 52 "data/maps/Beaston/scripts.pory"
	.string "sweet c'mon$"

beaston_labEscort_Text_1:
# 58 "data/maps/Beaston/scripts.pory"
	.string "right so\pmy dad needed someone to help with his\nresearch\pidk what he's doing but he heard stella\ntalk abt u\pso i guess he thought you'd be good\nhelp$"

beaston_labEscort_Text_2:
# 63 "data/maps/Beaston/scripts.pory"
	.string "idk why he didn't pick me but\pguess that doesn't really matter now\pc'mon$"

beaston_rivalBattleLoss_text_Text_0:
# 112 "data/maps/Beaston/scripts.pory"
	.string "{PLAYER}! There you are!\pI'm glad you're alright, seems things\ndidn't quite go to plan…\pRegardless, I've something to ask of\nyou.\pMy niece, Stella, lives in the next town\nover. I'm sure you two are familiar\lwith each other.\pI'd like for you to bring her back to my\nlab, I've got something special for\lyou two.\pI'll be logging my recent findings, if\nyou need me.$"

beaston_BlockNorthExit_Text_0:
# 199 "data/maps/Beaston/scripts.pory"
	.string "Sounds like something hectic is\nhappening up ahead…$"

beaston_BlockNorthExit_Text_1:
# 205 "data/maps/Beaston/scripts.pory"
	.string "You decide it's best to stay out of it.$"

beaston_text_burgerGuyRoadblock::
# 247 "data/maps/Beaston/scripts.pory"
	.string "Hey, hey, hey!\p"
	.string "Tell me… d'ya like burgers?$"

beaston_text_burgerGuyPigleys::
# 252 "data/maps/Beaston/scripts.pory"
	.string "Man… Pigby's has gotta be my favorite\nrestaurant!\p"
	.string "Nothing beats the fries and lemonade!$"

beaston_text_burgerGuyYes::
# 257 "data/maps/Beaston/scripts.pory"
	.string "Now that's what I like to hear!$"

beaston_text_burgerGuyNo::
# 261 "data/maps/Beaston/scripts.pory"
	.string "Aww… well I've got somethin' that'll\nchange your mind for sure!$"

beaston_text_burgerGuyCoupon::
# 265 "data/maps/Beaston/scripts.pory"
	.string "This'll get ya one free burger at\nPigby's. Just tell 'em Jimmy sent\lya.$"

beaston_text_burgerHaveCoupon::
# 269 "data/maps/Beaston/scripts.pory"
	.string "Hey, hey, hey!\p"
	.string "I'm not givin' out more coupons for\nfree!\p"
	.string "You already got one!$"

beaston_text_cantLeaveYet::
# 400 "data/maps/Beaston/scripts.pory"
	.string "You feel like you really shouldn't\n"
	.string "leave without telling the professor\l"
	.string "about what you saw…$"
