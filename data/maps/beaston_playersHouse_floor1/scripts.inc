# 1 "data/maps/beaston_playersHouse_floor1/scripts.pory"

# 2 "data/maps/beaston_playersHouse_floor1/scripts.pory"
beaston_playersHouse_floor1_MapScripts::
# 3 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, beaston_playersHouse_floor1_onWarp
# 4 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    .byte 0
# 5 "data/maps/beaston_playersHouse_floor1/scripts.pory"

# 6 "data/maps/beaston_playersHouse_floor1/scripts.pory"
beaston_playersHouse_floor1_onWarp::
# 7 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, playersHouse_resetIntroVar
# 8 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    .2byte 0

playersHouse_resetIntroVar::
# 12 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	return


playerWalkOverToLivingRoomTop::
# 16 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 17 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 18 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setobjectxyperm 2, 2, 10
# 19 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_DAD_INTRO
# 20 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_PLAYER_HOUSE
# 21 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 22 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomTop
	return


dadCallLivingRoomTop::
# 26 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 27 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallOver, MSGBOX_AUTOCLOSE
# 28 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 29 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 30 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverTop
# 31 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 32 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


playerWalkOverToLivingRoomMid::
# 36 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 37 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 38 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setobjectxyperm 2, 2, 10
# 39 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_DAD_INTRO
# 40 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_PLAYER_HOUSE
# 41 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 42 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomMid
	return


dadCallLivingRoomMid::
# 46 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 47 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallOver, MSGBOX_AUTOCLOSE
# 48 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 49 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 50 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverMid
# 51 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 52 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


playerWalkOverToLivingRoomBottom::
# 56 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 57 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 58 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setobjectxyperm 2, 2, 10
# 59 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_DAD_INTRO
# 60 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_PLAYER_HOUSE
# 61 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 62 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomBottom
	return


dadCallLivingRoomBottom::
# 66 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 67 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallOver, MSGBOX_AUTOCLOSE
# 68 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 69 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 70 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverBottom
# 71 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 72 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


quigleyIntro::
# 76 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 2
# 77 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	clearflag FLAG_HIDE_DAD_INTRO
# 78 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	clearflag FLAG_HIDE_QUIGLEY_PLAYER_HOUSE
# 79 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_AMANITA_BEASTON
# 80 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	playse SE_DOOR
# 81 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadEnter
# 82 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 83 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 1
# 84 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadWalkUp
# 85 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 1, playersHouse_quigleyWalkUp
# 86 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 1
# 87 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 88 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_0
# 89 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername quigleyIntro_Text_1
# 91 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_2, MSGBOX_AUTOCLOSE
# 92 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 1, playersHouse_quigleyLeave
# 93 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 1
# 94 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	removeobject 1
# 95 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadLookRight
# 96 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 98 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_3, MSGBOX_AUTOCLOSE
# 99 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 101 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadSettle
# 102 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 103 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_HIDE_QUIGLEY_PLAYER_HOUSE
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	releaseall
	return


# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverTop:
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 109 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 110 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverMid:
# 113 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 113 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 113 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 116 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 117 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 119 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverBottom:
# 120 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 120 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 120 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 120 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 121 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 121 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 123 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 124 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 126 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadEnter:
# 127 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 127 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadWalkUp:
# 130 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 130 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 131 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_down
	step_end

# 133 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_quigleyWalkUp:
# 134 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 134 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 134 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 134 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 135 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_right
# 136 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_up
	step_end

# 138 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_quigleyLeave:
# 139 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 140 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 140 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 140 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerLeave:
# 143 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 144 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 145 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 145 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerStepDown:
# 148 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 150 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playerSurprise:
# 151 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 153 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadSettle:
# 154 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 155 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_right
# 156 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadLookRight:
# 159 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_right
	step_end

playersHouse_fridge::
# 163 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_fridge_Text_0, MSGBOX_SIGN
	return


playersHouse_sink::
# 166 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_sink_Text_0, MSGBOX_SIGN
	return


playersHouse_shelves::
# 169 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_shelves_Text_0, MSGBOX_SIGN
	return


playersHouse_cabinet::
# 172 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_cabinet_Text_0, MSGBOX_SIGN
	return


playersHouse_TV::
# 175 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_TV_Text_0, MSGBOX_SIGN
	return


dadCallLivingRoomTop_Text_0:
# 26 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "Dad$"

quigleyIntro_Text_0:
# 88 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "{PLAYER} this is quigley$"

quigleyIntro_Text_1:
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "Quigley$"

quigleyIntro_Text_2:
# 91 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "ayo whaddup i'm quigley\pmy mom's like the professor\pshe told me to come get u so c'mon\pi'll be outside when ur ready$"

quigleyIntro_Text_3:
# 98 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "well go get ur stuff kid i'll be down\nhere watching old man shows$"

playersHouse_fridge_Text_0:
# 163 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "fritch$"

playersHouse_sink_Text_0:
# 166 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "the sink bro$"

playersHouse_shelves_Text_0:
# 169 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "shelves full of stuff$"

playersHouse_cabinet_Text_0:
# 172 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "dishes in tha cabinet$"

playersHouse_TV_Text_0:
# 175 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "old man shows are on$"

dadCallOver::
# 178 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "{PLAYER}! C'mere!$"
