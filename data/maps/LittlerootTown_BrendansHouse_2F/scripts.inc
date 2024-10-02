# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

testSignPost::
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox testSignPost_Text_0, MSGBOX_NPC
	return


dadCallForYou::
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox dadCallForYou_Text_0, MSGBOX_NPC
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x022
	end


bedroom_amiiboGift::
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_amiiboGift_Text_0, MSGBOX_YESNO
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq bedroom_amiiboGift_1
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_amiiboGift_Text_2
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

bedroom_amiiboGift_1:
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_AMIIBO_GOTTEN
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_amiiboGift_Text_1
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_AMIIBO, 1
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


bedroom_emptyDesk::
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_emptyDesk_Text_0
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


bedroom_yourBed::
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_yourBed_Text_0, MSGBOX_SIGN
	return


bedroom_gamecube::
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_gamecube_Text_0, MSGBOX_SIGN
	return


bedroom_pc::
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_pc_Text_0, MSGBOX_SIGN
	return


bedroom_shelves::
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox bedroom_shelves_Text_0, MSGBOX_SIGN
	return


testSignPost_Text_0:
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "This is a test!$"

dadCallForYou_Text_0:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "hey {PLAYER}\pcome downstairs some kid wants you$"

bedroom_amiiboGift_Text_0:
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "amiibo on tha desk\ptake it?$"

bedroom_amiiboGift_Text_1:
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "here u go$"

bedroom_amiiboGift_Text_2:
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "leave him there$"

bedroom_emptyDesk_Text_0:
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "nothing on tha desk anymore$"

bedroom_yourBed_Text_0:
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "messy$"

bedroom_gamecube_Text_0:
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "your dad's old gamecube$"

bedroom_pc_Text_0:
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "computah$"

bedroom_shelves_Text_0:
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "games n shit$"
