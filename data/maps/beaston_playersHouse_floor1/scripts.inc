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
	msgbox dadCallLivingRoomTop_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 25 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverTop
# 26 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 27 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


playerWalkOverToLivingRoomMid::
# 31 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 32 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 33 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 34 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomMid
	return


dadCallLivingRoomMid::
# 38 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallLivingRoomTop_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 40 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverMid
# 41 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 42 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


playerWalkOverToLivingRoomBottom::
# 46 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	lockall
# 47 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 48 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerSurprise
# 49 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto dadCallLivingRoomBottom
	return


dadCallLivingRoomBottom::
# 53 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox dadCallLivingRoomTop_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 55 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playersHouse_playerWalkOverBottom
# 56 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 57 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	goto quigleyIntro
	return


quigleyIntro::
# 61 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 2
# 62 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 63 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	playse SE_DOOR
# 64 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadEnter
# 65 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 66 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 1
# 67 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadWalkUp
# 68 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 1, playersHouse_quigleyWalkUp
# 69 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 1
# 70 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_0
# 71 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 72 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_1, MSGBOX_AUTOCLOSE
# 73 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 1, playersHouse_quigleyLeave
# 74 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 1
# 75 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	removeobject 1
# 76 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadLookRight
# 77 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 78 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox quigleyIntro_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmessage
# 80 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	applymovement 2, playersHouse_dadSettle
# 81 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	waitmovement 2
# 82 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	removeobject 2
# 83 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 84 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	addobject 3
# 85 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	clearflag FLAG_UNUSED_0x021
# 86 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	releaseall
	return


# 89 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverTop:
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 90 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 91 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 92 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 94 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverMid:
# 95 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 95 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 95 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 96 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 97 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 98 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 99 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 101 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerWalkOverBottom:
# 102 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 102 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 102 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 102 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 103 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 103 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 104 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 105 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	delay_4
# 106 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	face_down
	step_end

# 108 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadEnter:
# 109 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 109 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadWalkUp:
# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 112 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 113 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_down
	step_end

# 115 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_quigleyWalkUp:
# 116 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 116 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 116 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 116 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 117 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_right
# 118 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_up
	step_end

# 120 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_quigleyLeave:
# 121 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 122 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerLeave:
# 125 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 126 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_left
# 127 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
# 127 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 129 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_playerStepDown:
# 130 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_down
	step_end

# 132 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playerSurprise:
# 133 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadSettle:
# 136 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
# 137 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_right
# 138 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/beaston_playersHouse_floor1/scripts.pory"
playersHouse_dadLookRight:
# 141 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	walk_in_place_right
	step_end

playersHouse_fridge::
# 145 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_fridge_Text_0, MSGBOX_SIGN
	return


playersHouse_sink::
# 148 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_sink_Text_0, MSGBOX_SIGN
	return


playersHouse_shelves::
# 151 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_shelves_Text_0, MSGBOX_SIGN
	return


playersHouse_cabinet::
# 154 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_cabinet_Text_0, MSGBOX_SIGN
	return


playersHouse_TV::
# 157 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	msgbox playersHouse_TV_Text_0, MSGBOX_SIGN
	return


dadCallLivingRoomTop_Text_0:
# 23 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "over here$"

quigleyIntro_Text_0:
# 70 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "{PLAYER} this is quigley$"

quigleyIntro_Text_1:
# 72 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "ayo whaddup i'm quigley\pmy dad's like the professor\phe told me to come get u so c'mon\pi'll be outside when ur ready$"

quigleyIntro_Text_2:
# 78 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "well go get ur stuff kid i'll be down\nhere watching old man shows$"

playersHouse_fridge_Text_0:
# 145 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "fritch$"

playersHouse_sink_Text_0:
# 148 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "the sink bro$"

playersHouse_shelves_Text_0:
# 151 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "shelves full of stuff$"

playersHouse_cabinet_Text_0:
# 154 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "dishes in tha cabinet$"

playersHouse_TV_Text_0:
# 157 "data/maps/beaston_playersHouse_floor1/scripts.pory"
	.string "old man shows are on$"
