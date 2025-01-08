# 1 "data/maps/beaston_playersHouse_floor1/scripts.pory"

# 2 "data/maps/beaston_playersHouse_floor1/scripts.pory"
beaston_playersHouse_floor1_MapScripts::
# 3 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, beaston_playersHouse_floor1_onWarp
# 4 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 5 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    .byte 0
# 6 "data/maps/beaston_playersHouse_floor1/scripts.pory"

# 7 "data/maps/beaston_playersHouse_floor1/scripts.pory"
beaston_playersHouse_floor1_onWarp::
# 8 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, playersHouse_resetIntroVar
# 9 "data/maps/beaston_playersHouse_floor1/scripts.pory"
    .2byte 0

playersHouse_resetIntroVar::
# 12 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	return


playerWalkOverToLivingRoomTop::
# 16 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 17 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 18 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 19 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomTop
	return


dadCallLivingRoomTop::
# 23 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 24 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallLivingRoomTop_Text_1, MSGBOX_AUTOCLOSE
# 25 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 26 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 27 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverTop
# 28 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 29 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


playerWalkOverToLivingRoomMid::
# 33 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 34 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 35 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 36 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomMid
	return


dadCallLivingRoomMid::
# 40 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 41 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallLivingRoomTop_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 43 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 44 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverMid
# 45 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


playerWalkOverToLivingRoomBottom::
# 50 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 51 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 52 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 53 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomBottom
	return


dadCallLivingRoomBottom::
# 57 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 58 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallLivingRoomTop_Text_1, MSGBOX_AUTOCLOSE
# 59 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 60 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 61 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverBottom
# 62 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 63 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


quigleyIntro::
# 67 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 2
# 68 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 69 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	playse SE_DOOR
# 70 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadEnter
# 71 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 72 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 1
# 73 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadWalkUp
# 74 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 1, playersHouse_quigleyWalkUp
# 75 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 1
# 76 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 77 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_0
# 78 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 79 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername quigleyIntro_Text_1
# 80 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_2, MSGBOX_AUTOCLOSE
# 81 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 1, playersHouse_quigleyLeave
# 82 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 1
# 83 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	removeobject 1
# 84 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadLookRight
# 85 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 86 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername dadCallLivingRoomTop_Text_0
# 87 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_3, MSGBOX_AUTOCLOSE
# 88 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 89 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	speakername NULL
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadSettle
# 91 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 92 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	removeobject 2
# 93 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 94 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 3
# 95 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	clearflag FLAG_UNUSED_0x021
# 96 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	releaseall
	return


# 99 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverTop:
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 100 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 101 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 102 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverMid:
# 105 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 105 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 105 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 106 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 107 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 109 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 111 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverBottom:
# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 113 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 113 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 114 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 116 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 118 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadEnter:
# 119 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 119 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadWalkUp:
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 123 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_down
	step_end

# 125 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_quigleyWalkUp:
# 126 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 126 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 126 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 126 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 127 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_right
# 128 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_up
	step_end

# 130 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_quigleyLeave:
# 131 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 132 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 132 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 132 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 134 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerLeave:
# 135 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 136 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 137 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 137 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerStepDown:
# 140 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playerSurprise:
# 143 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 145 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadSettle:
# 146 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 147 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_right
# 148 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadLookRight:
# 151 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_right
	step_end

playersHouse_fridge::
# 155 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_fridge_Text_0, MSGBOX_SIGN
	return


playersHouse_sink::
# 158 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_sink_Text_0, MSGBOX_SIGN
	return


playersHouse_shelves::
# 161 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_shelves_Text_0, MSGBOX_SIGN
	return


playersHouse_cabinet::
# 164 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_cabinet_Text_0, MSGBOX_SIGN
	return


playersHouse_TV::
# 167 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_TV_Text_0, MSGBOX_SIGN
	return


dadCallLivingRoomTop_Text_0:
# 23 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "Dad$"

dadCallLivingRoomTop_Text_1:
# 24 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "over here$"

quigleyIntro_Text_0:
# 77 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "{PLAYER} this is quigley$"

quigleyIntro_Text_1:
# 79 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "Quigley$"

quigleyIntro_Text_2:
# 80 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "ayo whaddup i'm quigley\pmy dad's like the professor\phe told me to come get u so c'mon\pi'll be outside when ur ready$"

quigleyIntro_Text_3:
# 87 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "well go get ur stuff kid i'll be down\nhere watching old man shows$"

playersHouse_fridge_Text_0:
# 155 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "fritch$"

playersHouse_sink_Text_0:
# 158 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "the sink bro$"

playersHouse_shelves_Text_0:
# 161 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "shelves full of stuff$"

playersHouse_cabinet_Text_0:
# 164 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "dishes in tha cabinet$"

playersHouse_TV_Text_0:
# 167 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "old man shows are on$"
