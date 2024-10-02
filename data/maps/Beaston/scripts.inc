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
	msgbox beaston_quigleyAsk_Text_0, MSGBOX_YESNO
# 38 "data/maps/Beaston/scripts.pory"
	goto_if_eq VAR_RESULT, NO, beaston_sendYouBack
# 39 "data/maps/Beaston/scripts.pory"
	goto beaston_labEscort
	return


beaston_sendYouBack::
# 43 "data/maps/Beaston/scripts.pory"
	msgbox beaston_sendYouBack_Text_0
# 44 "data/maps/Beaston/scripts.pory"
	waitmessage
# 45 "data/maps/Beaston/scripts.pory"
	opendoor 26, 24
# 46 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 47 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 48 "data/maps/Beaston/scripts.pory"
	warp MAP_BEASTON_PLAYERS_HOUSE_FLOOR1, 2, 10
# 49 "data/maps/Beaston/scripts.pory"
	releaseall
	return


beaston_labEscort::
# 53 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/Beaston/scripts.pory"
	waitmessage
# 55 "data/maps/Beaston/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 56 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 57 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02A
# 58 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_quigleyEscort1
# 59 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerFollowQuigley1
# 60 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 61 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_1, MSGBOX_AUTOCLOSE
# 62 "data/maps/Beaston/scripts.pory"
	waitmessage
# 63 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_quigleyEscort2
# 64 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerFollowQuigley2
# 65 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 66 "data/maps/Beaston/scripts.pory"
	msgbox beaston_labEscort_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Beaston/scripts.pory"
	waitmessage
# 68 "data/maps/Beaston/scripts.pory"
	opendoor 10, 16
# 69 "data/maps/Beaston/scripts.pory"
	applymovement 1, beaston_playerWalkBack
# 70 "data/maps/Beaston/scripts.pory"
	waitmovement 1
# 71 "data/maps/Beaston/scripts.pory"
	removeobject 1
# 72 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 73 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 74 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, beaston_playerWalkBack
# 75 "data/maps/Beaston/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 76 "data/maps/Beaston/scripts.pory"
	warp MAP_BEASTON_POKEMON_LAB, 15, 17
# 77 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 80 "data/maps/Beaston/scripts.pory"
beaston_playerWalkBack:
# 81 "data/maps/Beaston/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/Beaston/scripts.pory"
beaston_quigleyEscort1:
# 84 "data/maps/Beaston/scripts.pory"
	walk_left
# 84 "data/maps/Beaston/scripts.pory"
	walk_left
# 84 "data/maps/Beaston/scripts.pory"
	walk_left
# 84 "data/maps/Beaston/scripts.pory"
	walk_left
# 85 "data/maps/Beaston/scripts.pory"
	walk_up
# 85 "data/maps/Beaston/scripts.pory"
	walk_up
# 85 "data/maps/Beaston/scripts.pory"
	walk_up
# 85 "data/maps/Beaston/scripts.pory"
	walk_up
# 86 "data/maps/Beaston/scripts.pory"
	walk_left
# 87 "data/maps/Beaston/scripts.pory"
	walk_in_place_right
	step_end

# 89 "data/maps/Beaston/scripts.pory"
beaston_playerFollowQuigley1:
# 90 "data/maps/Beaston/scripts.pory"
	walk_left
# 90 "data/maps/Beaston/scripts.pory"
	walk_left
# 90 "data/maps/Beaston/scripts.pory"
	walk_left
# 90 "data/maps/Beaston/scripts.pory"
	walk_left
# 90 "data/maps/Beaston/scripts.pory"
	walk_left
# 91 "data/maps/Beaston/scripts.pory"
	walk_up
# 91 "data/maps/Beaston/scripts.pory"
	walk_up
# 91 "data/maps/Beaston/scripts.pory"
	walk_up
# 91 "data/maps/Beaston/scripts.pory"
	walk_up
# 92 "data/maps/Beaston/scripts.pory"
	walk_in_place_left
	step_end

# 94 "data/maps/Beaston/scripts.pory"
beaston_quigleyEscort2:
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 95 "data/maps/Beaston/scripts.pory"
	walk_left
# 96 "data/maps/Beaston/scripts.pory"
	walk_up
# 96 "data/maps/Beaston/scripts.pory"
	walk_up
# 96 "data/maps/Beaston/scripts.pory"
	walk_up
# 96 "data/maps/Beaston/scripts.pory"
	walk_up
# 97 "data/maps/Beaston/scripts.pory"
	walk_in_place_down
	step_end

# 99 "data/maps/Beaston/scripts.pory"
beaston_playerFollowQuigley2:
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 100 "data/maps/Beaston/scripts.pory"
	walk_left
# 101 "data/maps/Beaston/scripts.pory"
	walk_up
# 101 "data/maps/Beaston/scripts.pory"
	walk_up
# 101 "data/maps/Beaston/scripts.pory"
	walk_up
	step_end

beaston_rivalBattleLoss_setup::
# 105 "data/maps/Beaston/scripts.pory"
	lockall
# 106 "data/maps/Beaston/scripts.pory"
	clearflag FLAG_UNUSED_0x02B
# 107 "data/maps/Beaston/scripts.pory"
	addobject 2
	return


beaston_rivalBattleLoss_text::
# 111 "data/maps/Beaston/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, look_left
# 112 "data/maps/Beaston/scripts.pory"
	msgbox beaston_rivalBattleLoss_text_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 114 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 115 "data/maps/Beaston/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
# 116 "data/maps/Beaston/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 117 "data/maps/Beaston/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq beaston_rivalBattleLoss_text_1
# 122 "data/maps/Beaston/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq beaston_rivalBattleLoss_text_2
# 127 "data/maps/Beaston/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq beaston_rivalBattleLoss_text_3
	return

beaston_rivalBattleLoss_text_1:
# 119 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 120 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x027
	return

beaston_rivalBattleLoss_text_2:
# 124 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 125 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x027
	return

beaston_rivalBattleLoss_text_3:
# 129 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 130 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x026
	return


beaston_rivalBattleLoss_left::
# 135 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 136 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_left_enter
# 137 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 138 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 139 "data/maps/Beaston/scripts.pory"
	waitmessage
# 140 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_left_leave
# 141 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 142 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 143 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 144 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 146 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_left_enter:
# 147 "data/maps/Beaston/scripts.pory"
	walk_right
# 147 "data/maps/Beaston/scripts.pory"
	walk_right
# 147 "data/maps/Beaston/scripts.pory"
	walk_right
# 147 "data/maps/Beaston/scripts.pory"
	walk_right
# 147 "data/maps/Beaston/scripts.pory"
	walk_right
# 148 "data/maps/Beaston/scripts.pory"
	walk_down
# 148 "data/maps/Beaston/scripts.pory"
	walk_down
# 148 "data/maps/Beaston/scripts.pory"
	walk_down
# 148 "data/maps/Beaston/scripts.pory"
	walk_down
# 149 "data/maps/Beaston/scripts.pory"
	walk_right
# 149 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 151 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_left_leave:
# 152 "data/maps/Beaston/scripts.pory"
	walk_left
# 152 "data/maps/Beaston/scripts.pory"
	walk_left
# 153 "data/maps/Beaston/scripts.pory"
	walk_up
# 153 "data/maps/Beaston/scripts.pory"
	walk_up
# 153 "data/maps/Beaston/scripts.pory"
	walk_up
# 153 "data/maps/Beaston/scripts.pory"
	walk_up
# 154 "data/maps/Beaston/scripts.pory"
	walk_left
# 154 "data/maps/Beaston/scripts.pory"
	walk_left
# 154 "data/maps/Beaston/scripts.pory"
	walk_left
# 154 "data/maps/Beaston/scripts.pory"
	walk_left
# 154 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_rivalBattleLoss_down::
# 158 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 159 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_down_enter
# 160 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 161 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 162 "data/maps/Beaston/scripts.pory"
	waitmessage
# 163 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_down_leave
# 164 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 165 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 166 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 167 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 169 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_down_enter:
# 170 "data/maps/Beaston/scripts.pory"
	walk_right
# 170 "data/maps/Beaston/scripts.pory"
	walk_right
# 170 "data/maps/Beaston/scripts.pory"
	walk_right
# 170 "data/maps/Beaston/scripts.pory"
	walk_right
# 170 "data/maps/Beaston/scripts.pory"
	walk_right
# 171 "data/maps/Beaston/scripts.pory"
	walk_down
# 171 "data/maps/Beaston/scripts.pory"
	walk_down
# 171 "data/maps/Beaston/scripts.pory"
	walk_down
# 171 "data/maps/Beaston/scripts.pory"
	walk_down
# 171 "data/maps/Beaston/scripts.pory"
	walk_down
# 172 "data/maps/Beaston/scripts.pory"
	walk_right
# 172 "data/maps/Beaston/scripts.pory"
	walk_right
# 172 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 174 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_down_leave:
# 175 "data/maps/Beaston/scripts.pory"
	walk_left
# 175 "data/maps/Beaston/scripts.pory"
	walk_left
# 175 "data/maps/Beaston/scripts.pory"
	walk_left
# 176 "data/maps/Beaston/scripts.pory"
	walk_up
# 176 "data/maps/Beaston/scripts.pory"
	walk_up
# 176 "data/maps/Beaston/scripts.pory"
	walk_up
# 176 "data/maps/Beaston/scripts.pory"
	walk_up
# 176 "data/maps/Beaston/scripts.pory"
	walk_up
# 177 "data/maps/Beaston/scripts.pory"
	walk_left
# 177 "data/maps/Beaston/scripts.pory"
	walk_left
# 177 "data/maps/Beaston/scripts.pory"
	walk_left
# 177 "data/maps/Beaston/scripts.pory"
	walk_left
# 177 "data/maps/Beaston/scripts.pory"
	walk_left
	step_end

beaston_rivalBattleLoss_right::
# 181 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_setup
# 182 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_right_enter
# 183 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 184 "data/maps/Beaston/scripts.pory"
	call beaston_rivalBattleLoss_text
# 185 "data/maps/Beaston/scripts.pory"
	waitmessage
# 186 "data/maps/Beaston/scripts.pory"
	applymovement 2, beaston_cokbern_rivalBattleLoss_right_leave
# 187 "data/maps/Beaston/scripts.pory"
	waitmovement 2
# 188 "data/maps/Beaston/scripts.pory"
	removeobject 2
# 189 "data/maps/Beaston/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 190 "data/maps/Beaston/scripts.pory"
	releaseall
	return


# 192 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_right_enter:
# 193 "data/maps/Beaston/scripts.pory"
	walk_right
# 193 "data/maps/Beaston/scripts.pory"
	walk_right
# 193 "data/maps/Beaston/scripts.pory"
	walk_right
# 193 "data/maps/Beaston/scripts.pory"
	walk_right
# 193 "data/maps/Beaston/scripts.pory"
	walk_right
# 194 "data/maps/Beaston/scripts.pory"
	walk_down
# 194 "data/maps/Beaston/scripts.pory"
	walk_down
# 194 "data/maps/Beaston/scripts.pory"
	walk_down
# 194 "data/maps/Beaston/scripts.pory"
	walk_down
# 195 "data/maps/Beaston/scripts.pory"
	walk_right
# 195 "data/maps/Beaston/scripts.pory"
	walk_right
# 195 "data/maps/Beaston/scripts.pory"
	walk_right
# 195 "data/maps/Beaston/scripts.pory"
	walk_right
	step_end

# 197 "data/maps/Beaston/scripts.pory"
beaston_cokbern_rivalBattleLoss_right_leave:
# 198 "data/maps/Beaston/scripts.pory"
	walk_left
# 198 "data/maps/Beaston/scripts.pory"
	walk_left
# 198 "data/maps/Beaston/scripts.pory"
	walk_left
# 198 "data/maps/Beaston/scripts.pory"
	walk_left
# 199 "data/maps/Beaston/scripts.pory"
	walk_up
# 199 "data/maps/Beaston/scripts.pory"
	walk_up
# 199 "data/maps/Beaston/scripts.pory"
	walk_up
# 199 "data/maps/Beaston/scripts.pory"
	walk_up
# 200 "data/maps/Beaston/scripts.pory"
	walk_left
# 200 "data/maps/Beaston/scripts.pory"
	walk_left
# 200 "data/maps/Beaston/scripts.pory"
	walk_left
# 200 "data/maps/Beaston/scripts.pory"
	walk_left
# 200 "data/maps/Beaston/scripts.pory"
	walk_left
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
	.string "so u ready$"

beaston_sendYouBack_Text_0:
# 43 "data/maps/Beaston/scripts.pory"
	.string "yeah thought so\pget ur stuff and come back$"

beaston_labEscort_Text_0:
# 53 "data/maps/Beaston/scripts.pory"
	.string "sweet c'mon$"

beaston_labEscort_Text_1:
# 61 "data/maps/Beaston/scripts.pory"
	.string "right so\pmy dad needed someone to help with his\nresearch\pidk what he's doing but he heard stella\ntalk abt u\pso i guess he thought you'd be good\nhelp$"

beaston_labEscort_Text_2:
# 66 "data/maps/Beaston/scripts.pory"
	.string "idk why he didn't pick me but\pguess that doesn't really matter now\pc'mon$"

beaston_rivalBattleLoss_text_Text_0:
# 112 "data/maps/Beaston/scripts.pory"
	.string "{PLAYER}! There you are!\pI'm glad you're alright, seems things\ndidn't quite go to plan…\pRegardless, I've something to ask of\nyou.\pMy niece, Stella, lives in the next town\nover. I'm sure you two are familiar\lwith each other.\pI'd like for you to bring her back to my\nlab, I've got something special for\lyou two.\pI'll be logging my recent findings, if\nyou need me.$"
