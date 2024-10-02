# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	.byte 0
# 8 "data/maps/Route101/scripts.pory"

# 9 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 10 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 11 "data/maps/Route101/scripts.pory"
	end
# 12 "data/maps/Route101/scripts.pory"

# 13 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 14 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 15 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 16 "data/maps/Route101/scripts.pory"
	end
# 17 "data/maps/Route101/scripts.pory"

# 18 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 19 "data/maps/Route101/scripts.pory"
	lockall
# 20 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 21 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 22 "data/maps/Route101/scripts.pory"
	closemessage
# 23 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 24 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 25 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 28 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 30 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 31 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 38 "data/maps/Route101/scripts.pory"
	closemessage
# 39 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 40 "data/maps/Route101/scripts.pory"
	releaseall
# 41 "data/maps/Route101/scripts.pory"
	end
# 42 "data/maps/Route101/scripts.pory"

# 43 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 44 "data/maps/Route101/scripts.pory"
	lockall
# 45 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 46 "data/maps/Route101/scripts.pory"
	closemessage
# 47 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 48 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route101/scripts.pory"
	releaseall
# 50 "data/maps/Route101/scripts.pory"
	end
# 51 "data/maps/Route101/scripts.pory"

# 52 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 53 "data/maps/Route101/scripts.pory"
	lockall
# 54 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 55 "data/maps/Route101/scripts.pory"
	closemessage
# 56 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 57 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route101/scripts.pory"
	releaseall
# 59 "data/maps/Route101/scripts.pory"
	end
# 60 "data/maps/Route101/scripts.pory"

# 61 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 62 "data/maps/Route101/scripts.pory"
	lockall
# 63 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 64 "data/maps/Route101/scripts.pory"
	closemessage
# 65 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 66 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route101/scripts.pory"
	releaseall
# 68 "data/maps/Route101/scripts.pory"
	end
# 69 "data/maps/Route101/scripts.pory"

# 70 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 71 "data/maps/Route101/scripts.pory"
	walk_up
# 72 "data/maps/Route101/scripts.pory"
	step_end
# 73 "data/maps/Route101/scripts.pory"

# 74 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 76 "data/maps/Route101/scripts.pory"
	step_end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 79 "data/maps/Route101/scripts.pory"
	walk_down
# 80 "data/maps/Route101/scripts.pory"
	step_end
# 81 "data/maps/Route101/scripts.pory"

# 82 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	step_end
# 114 "data/maps/Route101/scripts.pory"

# 115 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	step_end
# 123 "data/maps/Route101/scripts.pory"

# 124 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 125 "data/maps/Route101/scripts.pory"
	step_end
# 126 "data/maps/Route101/scripts.pory"

# 127 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 128 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 132 "data/maps/Route101/scripts.pory"
	step_end
# 133 "data/maps/Route101/scripts.pory"

# 134 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 140 "data/maps/Route101/scripts.pory"
	step_end
# 141 "data/maps/Route101/scripts.pory"

# 142 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	step_end
# 174 "data/maps/Route101/scripts.pory"

# 175 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route101/scripts.pory"
	step_end
# 183 "data/maps/Route101/scripts.pory"

# 184 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 185 "data/maps/Route101/scripts.pory"
	step_end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 188 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 192 "data/maps/Route101/scripts.pory"
	step_end
# 193 "data/maps/Route101/scripts.pory"

# 194 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 195 "data/maps/Route101/scripts.pory"
	walk_up
# 196 "data/maps/Route101/scripts.pory"
	walk_up
# 197 "data/maps/Route101/scripts.pory"
	step_end
# 198 "data/maps/Route101/scripts.pory"

# 199 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 200 "data/maps/Route101/scripts.pory"
	walk_up
# 201 "data/maps/Route101/scripts.pory"
	walk_left
# 202 "data/maps/Route101/scripts.pory"
	walk_up
# 203 "data/maps/Route101/scripts.pory"
	step_end
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 206 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 207 "data/maps/Route101/scripts.pory"
	end
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 210 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 211 "data/maps/Route101/scripts.pory"
	end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 214 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 215 "data/maps/Route101/scripts.pory"
	end
# 216 "data/maps/Route101/scripts.pory"

# 217 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 218 "data/maps/Route101/scripts.pory"
	lock
# 219 "data/maps/Route101/scripts.pory"
	faceplayer
# 220 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 221 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 222 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 224 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 225 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 226 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 228 "data/maps/Route101/scripts.pory"
	waitstate
# 229 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 230 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 232 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 233 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 234 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 235 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 236 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 237 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 238 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 239 "data/maps/Route101/scripts.pory"
	checkplayergender
# 240 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 241 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 242 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 243 "data/maps/Route101/scripts.pory"
	waitstate
# 244 "data/maps/Route101/scripts.pory"
	release
# 245 "data/maps/Route101/scripts.pory"
	end
# 246 "data/maps/Route101/scripts.pory"

# 247 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 248 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 249 "data/maps/Route101/scripts.pory"
	return
# 250 "data/maps/Route101/scripts.pory"

# 251 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 252 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 253 "data/maps/Route101/scripts.pory"
	return
# 254 "data/maps/Route101/scripts.pory"

# 255 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 256 "data/maps/Route101/scripts.pory"
	walk_right
# 257 "data/maps/Route101/scripts.pory"
	step_end
# 258 "data/maps/Route101/scripts.pory"

# 259 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 260 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 261 "data/maps/Route101/scripts.pory"

# 262 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 263 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 264 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 265 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 266 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 267 "data/maps/Route101/scripts.pory"

# 268 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 269 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 270 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 273 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 274 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 275 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 276 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 277 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 278 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 279 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 280 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 281 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 282 "data/maps/Route101/scripts.pory"

# 283 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 284 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 285 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 286 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 287 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 288 "data/maps/Route101/scripts.pory"

# 289 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 290 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 291 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 292 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 293 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 294 "data/maps/Route101/scripts.pory"

# 295 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 296 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

route1_signpost::
# 302 "data/maps/Route101/scripts.pory"
	msgbox route1_signpost_Text_0, MSGBOX_SIGN
	return


route1_piss::
# 306 "data/maps/Route101/scripts.pory"
	msgbox route1_piss_Text_0, MSGBOX_SIGN
	return


route1_signpost_Text_0:
# 302 "data/maps/Route101/scripts.pory"
	.string "Route 1\n{LEFT_ARROW} Beaston\l{RIGHT_ARROW} Asterra$"

route1_piss_Text_0:
# 306 "data/maps/Route101/scripts.pory"
	.string "A patch of damp grass. It smells odd.$"
