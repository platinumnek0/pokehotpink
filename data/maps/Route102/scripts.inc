# 1 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 2 "data/maps/Route102/scripts.pory"
	.byte 0
# 3 "data/maps/Route102/scripts.pory"

# 4 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 5 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 6 "data/maps/Route102/scripts.pory"
	end
# 7 "data/maps/Route102/scripts.pory"

# 8 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 10 "data/maps/Route102/scripts.pory"
	end
# 11 "data/maps/Route102/scripts.pory"

# 12 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 13 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 14 "data/maps/Route102/scripts.pory"
	end
# 15 "data/maps/Route102/scripts.pory"

# 16 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 17 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 18 "data/maps/Route102/scripts.pory"
	end
# 19 "data/maps/Route102/scripts.pory"

# 20 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 21 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 22 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 23 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 24 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 25 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 26 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 27 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 28 "data/maps/Route102/scripts.pory"
	release
# 29 "data/maps/Route102/scripts.pory"
	end
# 30 "data/maps/Route102/scripts.pory"

# 31 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 32 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 33 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 35 "data/maps/Route102/scripts.pory"
	release
# 36 "data/maps/Route102/scripts.pory"
	end
# 37 "data/maps/Route102/scripts.pory"

# 38 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 39 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 40 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 41 "data/maps/Route102/scripts.pory"
	release
# 42 "data/maps/Route102/scripts.pory"
	end
# 43 "data/maps/Route102/scripts.pory"

# 44 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 45 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 46 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route102/scripts.pory"
	release
# 48 "data/maps/Route102/scripts.pory"
	end
# 49 "data/maps/Route102/scripts.pory"

# 50 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 51 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 52 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 53 "data/maps/Route102/scripts.pory"
	release
# 54 "data/maps/Route102/scripts.pory"
	end
# 55 "data/maps/Route102/scripts.pory"

# 56 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 57 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 58 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route102/scripts.pory"
	end
# 60 "data/maps/Route102/scripts.pory"

# 61 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 62 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 63 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route102/scripts.pory"
	end
# 65 "data/maps/Route102/scripts.pory"

# 66 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 67 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 68 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route102/scripts.pory"
	end
# 70 "data/maps/Route102/scripts.pory"

# 71 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 72 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 73 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route102/scripts.pory"
	end
# 75 "data/maps/Route102/scripts.pory"

# 76 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 77 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 78 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 79 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 80 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 81 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 82 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 83 "data/maps/Route102/scripts.pory"

# 84 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 85 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 86 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 87 "data/maps/Route102/scripts.pory"

# 88 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 89 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 90 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 91 "data/maps/Route102/scripts.pory"

# 92 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 93 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 94 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 95 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 96 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 97 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 98 "data/maps/Route102/scripts.pory"

# 99 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 100 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 101 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 102 "data/maps/Route102/scripts.pory"

# 103 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 104 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 105 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 106 "data/maps/Route102/scripts.pory"

# 107 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 108 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 109 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
# 110 "data/maps/Route102/scripts.pory"

# 111 "data/maps/Route102/scripts.pory"
Route2_EventScript_WalkUpLeftMost::
# 112 "data/maps/Route102/scripts.pory"
	lockall
# 113 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpLeftMost
# 114 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaInit
# 115 "data/maps/Route102/scripts.pory"

# 116 "data/maps/Route102/scripts.pory"
Route2_Movement_WalkUpLeftMost:
# 117 "data/maps/Route102/scripts.pory"
	walk_up
# 118 "data/maps/Route102/scripts.pory"
	walk_up
# 119 "data/maps/Route102/scripts.pory"
	walk_right
# 120 "data/maps/Route102/scripts.pory"
	walk_right
# 121 "data/maps/Route102/scripts.pory"
	walk_up
# 122 "data/maps/Route102/scripts.pory"
	walk_up
# 123 "data/maps/Route102/scripts.pory"
	walk_up
# 124 "data/maps/Route102/scripts.pory"
	walk_up
# 125 "data/maps/Route102/scripts.pory"
	walk_up
# 126 "data/maps/Route102/scripts.pory"
	step_end
# 127 "data/maps/Route102/scripts.pory"

# 128 "data/maps/Route102/scripts.pory"
Route2_EventScript_WalkUpLeft::
# 129 "data/maps/Route102/scripts.pory"
	lockall
# 130 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpLeft
# 131 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaInit
# 132 "data/maps/Route102/scripts.pory"

# 133 "data/maps/Route102/scripts.pory"
Route2_Movement_WalkUpLeft:
# 134 "data/maps/Route102/scripts.pory"
	walk_up
# 135 "data/maps/Route102/scripts.pory"
	walk_up
# 136 "data/maps/Route102/scripts.pory"
	walk_right
# 137 "data/maps/Route102/scripts.pory"
	walk_up
# 138 "data/maps/Route102/scripts.pory"
	walk_up
# 139 "data/maps/Route102/scripts.pory"
	walk_up
# 140 "data/maps/Route102/scripts.pory"
	walk_up
# 141 "data/maps/Route102/scripts.pory"
	walk_up
# 142 "data/maps/Route102/scripts.pory"
	step_end
# 143 "data/maps/Route102/scripts.pory"

# 144 "data/maps/Route102/scripts.pory"
Route2_EventScript_WalkUpMiddle::
# 145 "data/maps/Route102/scripts.pory"
	lockall
# 146 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpMiddle
# 147 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaInit
# 148 "data/maps/Route102/scripts.pory"

# 149 "data/maps/Route102/scripts.pory"
Route2_Movement_WalkUpMiddle:
# 150 "data/maps/Route102/scripts.pory"
	walk_up
# 151 "data/maps/Route102/scripts.pory"
	walk_up
# 152 "data/maps/Route102/scripts.pory"
	walk_up
# 153 "data/maps/Route102/scripts.pory"
	walk_up
# 154 "data/maps/Route102/scripts.pory"
	walk_up
# 155 "data/maps/Route102/scripts.pory"
	walk_up
# 156 "data/maps/Route102/scripts.pory"
	walk_up
# 157 "data/maps/Route102/scripts.pory"
	step_end
# 158 "data/maps/Route102/scripts.pory"

# 159 "data/maps/Route102/scripts.pory"
Route2_EventScript_WalkUpRight::
# 160 "data/maps/Route102/scripts.pory"
	lockall
# 161 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpRight
# 162 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaInit
# 163 "data/maps/Route102/scripts.pory"

# 164 "data/maps/Route102/scripts.pory"
Route2_Movement_WalkUpRight:
# 165 "data/maps/Route102/scripts.pory"
	walk_up
# 166 "data/maps/Route102/scripts.pory"
	walk_up
# 167 "data/maps/Route102/scripts.pory"
	walk_left
# 168 "data/maps/Route102/scripts.pory"
	walk_up
# 169 "data/maps/Route102/scripts.pory"
	walk_up
# 170 "data/maps/Route102/scripts.pory"
	walk_up
# 171 "data/maps/Route102/scripts.pory"
	walk_up
# 172 "data/maps/Route102/scripts.pory"
	walk_up
# 173 "data/maps/Route102/scripts.pory"
	step_end
# 174 "data/maps/Route102/scripts.pory"

# 175 "data/maps/Route102/scripts.pory"
Route2_EventScript_WalkUpRightMost::
# 176 "data/maps/Route102/scripts.pory"
	lockall
# 177 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpRightMost
# 178 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaInit
# 179 "data/maps/Route102/scripts.pory"

# 180 "data/maps/Route102/scripts.pory"
Route2_Movement_WalkUpRightMost:
# 181 "data/maps/Route102/scripts.pory"
	walk_up
# 182 "data/maps/Route102/scripts.pory"
	walk_up
# 183 "data/maps/Route102/scripts.pory"
	walk_left
# 184 "data/maps/Route102/scripts.pory"
	walk_left
# 185 "data/maps/Route102/scripts.pory"
	walk_up
# 186 "data/maps/Route102/scripts.pory"
	walk_up
# 187 "data/maps/Route102/scripts.pory"
	walk_up
# 188 "data/maps/Route102/scripts.pory"
	walk_up
# 189 "data/maps/Route102/scripts.pory"
	walk_up
# 190 "data/maps/Route102/scripts.pory"
	step_end
# 191 "data/maps/Route102/scripts.pory"

# 192 "data/maps/Route102/scripts.pory"
Route2_EventScript_StellaInit::
# 193 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 194 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_StellaWrite
# 195 "data/maps/Route102/scripts.pory"
	speakername Nameplate_Unknown
# 196 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaIntro, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route102/scripts.pory"
	waitmessage
# 198 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_StellaHeadDown
# 199 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 200 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_Surprise
# 201 "data/maps/Route102/scripts.pory"
	speakername Nameplate_Stella
# 202 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaPreBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route102/scripts.pory"
	waitmessage
# 204 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_Surprise
# 205 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 206 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_StellaHeadDown
# 207 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaAskToBattle, MSGBOX_YESNO
# 208 "data/maps/Route102/scripts.pory"
	waitmessage
# 209 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route2_EventScript_BattleNo
# 210 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route2_EventScript_BattleYes
# 211 "data/maps/Route102/scripts.pory"

# 212 "data/maps/Route102/scripts.pory"
Route2_Movement_StellaWrite:
# 213 "data/maps/Route102/scripts.pory"
	walk_in_place_up
# 214 "data/maps/Route102/scripts.pory"
	walk_in_place_up
# 215 "data/maps/Route102/scripts.pory"
	step_end
# 216 "data/maps/Route102/scripts.pory"

# 217 "data/maps/Route102/scripts.pory"
Route2_Movement_Surprise:
# 218 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
# 219 "data/maps/Route102/scripts.pory"
	step_end
# 220 "data/maps/Route102/scripts.pory"

# 221 "data/maps/Route102/scripts.pory"
Route2_Movement_StellaHeadDown:
# 222 "data/maps/Route102/scripts.pory"
	walk_down
# 223 "data/maps/Route102/scripts.pory"
	step_end
# 224 "data/maps/Route102/scripts.pory"

# 225 "data/maps/Route102/scripts.pory"
Route2_EventScript_BattleYes::
# 226 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaYes, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaBattle
# 228 "data/maps/Route102/scripts.pory"

# 229 "data/maps/Route102/scripts.pory"
Route2_EventScript_BattleNo::
# 230 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaNo, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaBattle
# 232 "data/maps/Route102/scripts.pory"

# 233 "data/maps/Route102/scripts.pory"
Route2_EventScript_StellaBattle::
# 234 "data/maps/Route102/scripts.pory"
	waitmessage
# 235 "data/maps/Route102/scripts.pory"
	special HealPlayerParty
# 236 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaBattleIntro, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route102/scripts.pory"
	waitmessage
# 238 "data/maps/Route102/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route2_Text_StellaLoss
# 239 "data/maps/Route102/scripts.pory"
	goto Route2_EventScript_StellaPostBattle
# 240 "data/maps/Route102/scripts.pory"

# 241 "data/maps/Route102/scripts.pory"
Route2_EventScript_StellaPostBattle::
# 242 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route102/scripts.pory"
	waitmessage
# 244 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_StellaLeave
# 245 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 246 "data/maps/Route102/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 8
# 247 "data/maps/Route102/scripts.pory"
	setobjectxyperm 1, 11, 42
# 248 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 249 "data/maps/Route102/scripts.pory"
	removeobject 1
# 250 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_PlayerLeave
# 251 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 252 "data/maps/Route102/scripts.pory"
	speakername NULL
# 253 "data/maps/Route102/scripts.pory"
	releaseall
# 254 "data/maps/Route102/scripts.pory"
	end
# 255 "data/maps/Route102/scripts.pory"

# 256 "data/maps/Route102/scripts.pory"
Route2_Movement_StellaLeave:
# 257 "data/maps/Route102/scripts.pory"
	walk_left
# 258 "data/maps/Route102/scripts.pory"
	walk_down
# 259 "data/maps/Route102/scripts.pory"
	walk_down
# 260 "data/maps/Route102/scripts.pory"
	walk_down
# 261 "data/maps/Route102/scripts.pory"
	walk_down
# 262 "data/maps/Route102/scripts.pory"
	walk_down
# 263 "data/maps/Route102/scripts.pory"
	walk_down
# 264 "data/maps/Route102/scripts.pory"
	walk_down
# 265 "data/maps/Route102/scripts.pory"
	walk_down
# 266 "data/maps/Route102/scripts.pory"
	walk_down
# 267 "data/maps/Route102/scripts.pory"
	walk_down
# 268 "data/maps/Route102/scripts.pory"
	walk_down
# 269 "data/maps/Route102/scripts.pory"
	step_end
# 270 "data/maps/Route102/scripts.pory"

# 271 "data/maps/Route102/scripts.pory"
Route2_Movement_PlayerLeave:
# 272 "data/maps/Route102/scripts.pory"
	walk_down
# 273 "data/maps/Route102/scripts.pory"
	walk_down
# 274 "data/maps/Route102/scripts.pory"
	walk_down
# 275 "data/maps/Route102/scripts.pory"
	walk_down
# 276 "data/maps/Route102/scripts.pory"
	walk_down
# 277 "data/maps/Route102/scripts.pory"
	walk_down
# 278 "data/maps/Route102/scripts.pory"
	step_end
# 279 "data/maps/Route102/scripts.pory"

# 280 "data/maps/Route102/scripts.pory"
Route2_EventScript_ExitBlock::
# 281 "data/maps/Route102/scripts.pory"
	lockall
# 282 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 283 "data/maps/Route102/scripts.pory"
	addobject 1
# 284 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_StellaWalkUp
# 285 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_FaceDown
# 286 "data/maps/Route102/scripts.pory"
	speakername Nameplate_Stella
# 287 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 288 "data/maps/Route102/scripts.pory"
	msgbox Route2_Text_StellaBlockExit, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route102/scripts.pory"
	waitmessage
# 290 "data/maps/Route102/scripts.pory"
	applymovement 1, Route2_Movement_BlockExitLeave
# 291 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 292 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 293 "data/maps/Route102/scripts.pory"
	removeobject 1
# 294 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_BlockExitLeave
# 295 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 296 "data/maps/Route102/scripts.pory"
	releaseall
# 297 "data/maps/Route102/scripts.pory"

# 298 "data/maps/Route102/scripts.pory"
Route2_Movement_FaceDown:
# 299 "data/maps/Route102/scripts.pory"
	face_down
# 300 "data/maps/Route102/scripts.pory"
	step_end
# 301 "data/maps/Route102/scripts.pory"

# 302 "data/maps/Route102/scripts.pory"
Route2_Movement_StellaWalkUp:
# 303 "data/maps/Route102/scripts.pory"
	walk_up
# 304 "data/maps/Route102/scripts.pory"
	walk_up
# 305 "data/maps/Route102/scripts.pory"
	walk_up
# 306 "data/maps/Route102/scripts.pory"
	walk_up
# 307 "data/maps/Route102/scripts.pory"
	walk_up
# 308 "data/maps/Route102/scripts.pory"
	step_end
# 309 "data/maps/Route102/scripts.pory"

# 310 "data/maps/Route102/scripts.pory"
Route2_Movement_BlockExitLeave:
# 311 "data/maps/Route102/scripts.pory"
	walk_down
# 312 "data/maps/Route102/scripts.pory"
	walk_down
# 313 "data/maps/Route102/scripts.pory"
	walk_down
# 314 "data/maps/Route102/scripts.pory"
	walk_down
# 315 "data/maps/Route102/scripts.pory"
	walk_down
# 316 "data/maps/Route102/scripts.pory"
	step_end
# 317 "data/maps/Route102/scripts.pory"

# 318 "data/maps/Route102/scripts.pory"
Nameplate_Unknown:
# 319 "data/maps/Route102/scripts.pory"
	.string "???$"
# 320 "data/maps/Route102/scripts.pory"

# 321 "data/maps/Route102/scripts.pory"
Nameplate_Stella:
# 322 "data/maps/Route102/scripts.pory"
	.string "Stella$"
# 323 "data/maps/Route102/scripts.pory"

# 324 "data/maps/Route102/scripts.pory"
Route2_Text_StellaIntro:
# 325 "data/maps/Route102/scripts.pory"
	.string "writin shit down for dad\p"
# 326 "data/maps/Route102/scripts.pory"
	.string "thats all, sweet\p"
# 327 "data/maps/Route102/scripts.pory"
	.string "time 2 head back$"
# 328 "data/maps/Route102/scripts.pory"

# 329 "data/maps/Route102/scripts.pory"
Route2_Text_StellaPreBattle:
# 330 "data/maps/Route102/scripts.pory"
	.string "oh holy shit\p"
# 331 "data/maps/Route102/scripts.pory"
	.string "didnt expect you\p"
# 332 "data/maps/Route102/scripts.pory"
	.string "so dad sent you to come get me huh\p"
# 333 "data/maps/Route102/scripts.pory"
	.string "alright then lets get g-$"
# 334 "data/maps/Route102/scripts.pory"

# 335 "data/maps/Route102/scripts.pory"
Route2_Text_StellaAskToBattle:
# 336 "data/maps/Route102/scripts.pory"
	.string "oh holy shit you got a mon with you\p"
# 337 "data/maps/Route102/scripts.pory"
	.string "dad gave you one huh\p"
# 338 "data/maps/Route102/scripts.pory"
	.string "howzabout we have a quick battle$"
# 339 "data/maps/Route102/scripts.pory"

# 340 "data/maps/Route102/scripts.pory"
Route2_Text_StellaYes:
# 341 "data/maps/Route102/scripts.pory"
	.string "freakin sweet lewis\p"
# 342 "data/maps/Route102/scripts.pory"
	.string "here i'll heal your dude too$"
# 343 "data/maps/Route102/scripts.pory"

# 344 "data/maps/Route102/scripts.pory"
Route2_Text_StellaNo:
# 345 "data/maps/Route102/scripts.pory"
	.string "aw c'mon it'll be fun\p"
# 346 "data/maps/Route102/scripts.pory"
	.string "here i'll heal your dude just in case$"
# 347 "data/maps/Route102/scripts.pory"

# 348 "data/maps/Route102/scripts.pory"
Route2_Text_StellaBattleIntro:
# 349 "data/maps/Route102/scripts.pory"
	.string "let's go epic mode$"
# 350 "data/maps/Route102/scripts.pory"

# 351 "data/maps/Route102/scripts.pory"
Route2_Text_StellaLoss:
# 352 "data/maps/Route102/scripts.pory"
	.string "fuuuuck$"
# 353 "data/maps/Route102/scripts.pory"

# 354 "data/maps/Route102/scripts.pory"
Route2_Text_StellaPostBattle:
# 355 "data/maps/Route102/scripts.pory"
	.string "well damn\p"
# 356 "data/maps/Route102/scripts.pory"
	.string "let's get going cmon$"
# 357 "data/maps/Route102/scripts.pory"

# 358 "data/maps/Route102/scripts.pory"
Route2_Text_StellaBlockExit:
# 359 "data/maps/Route102/scripts.pory"
	.string "cmon you said we gotta go$"

gagilRoute2_initiateStellaCutsceneLeft::
# 363 "data/maps/Route102/scripts.pory"
	lockall
# 364 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gagilRoute2_movement_playerWalkUpLeft
# 365 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 366 "data/maps/Route102/scripts.pory"
	goto gagilRoute2_stellaCutscene
	return


gagilRoute2_initiateStellaCutsceneRight::
# 370 "data/maps/Route102/scripts.pory"
	lockall
# 371 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gagilRoute2_movement_playerWalkUpRight
# 372 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 373 "data/maps/Route102/scripts.pory"
	goto gagilRoute2_stellaCutscene
	return


gagilRoute2_stellaCutscene::
# 377 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_stellaWalkInPlaceUp
# 378 "data/maps/Route102/scripts.pory"
	speakername nameplateStella
# 379 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stella1, MSGBOX_DEFAULT
# 380 "data/maps/Route102/scripts.pory"
	waitmessage
# 381 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stella2, MSGBOX_DEFAULT
# 382 "data/maps/Route102/scripts.pory"
	waitmessage
# 383 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_stellaStepDown
# 384 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 385 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_stellaSurprise
# 386 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 387 "data/maps/Route102/scripts.pory"
	waitse
# 388 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stella3, MSGBOX_DEFAULT
# 389 "data/maps/Route102/scripts.pory"
	waitmessage
# 390 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stella4, MSGBOX_DEFAULT
# 391 "data/maps/Route102/scripts.pory"
	waitmessage
# 392 "data/maps/Route102/scripts.pory"
	special HealPlayerParty
# 393 "data/maps/Route102/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, gagilRoute2_stellaCutscene_Text_0
# 394 "data/maps/Route102/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 395 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stella5, MSGBOX_DEFAULT
# 396 "data/maps/Route102/scripts.pory"
	waitmessage
# 397 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_stellaLeave
# 398 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 399 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 400 "data/maps/Route102/scripts.pory"
	setobjectxyperm 1, 25, 44
# 401 "data/maps/Route102/scripts.pory"
	removeobject 1
# 402 "data/maps/Route102/scripts.pory"
	releaseall
	return


# 405 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_playerWalkUpLeft:
# 406 "data/maps/Route102/scripts.pory"
	walk_up
# 406 "data/maps/Route102/scripts.pory"
	walk_up
# 406 "data/maps/Route102/scripts.pory"
	walk_up
# 407 "data/maps/Route102/scripts.pory"
	walk_right
# 408 "data/maps/Route102/scripts.pory"
	face_up
	step_end

# 411 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_playerWalkUpRight:
# 412 "data/maps/Route102/scripts.pory"
	walk_up
# 412 "data/maps/Route102/scripts.pory"
	walk_up
# 412 "data/maps/Route102/scripts.pory"
	walk_up
	step_end

# 415 "data/maps/Route102/scripts.pory"
gagilRoute2_stellaWalkInPlaceUp:
# 416 "data/maps/Route102/scripts.pory"
	walk_in_place_up
	step_end

# 419 "data/maps/Route102/scripts.pory"
gagilRoute2_stellaStepDown:
# 420 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 423 "data/maps/Route102/scripts.pory"
gagilRoute2_stellaSurprise:
# 424 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
	step_end

# 427 "data/maps/Route102/scripts.pory"
gagilRoute2_stellaLeave:
# 428 "data/maps/Route102/scripts.pory"
	walk_left
# 429 "data/maps/Route102/scripts.pory"
	walk_down
# 429 "data/maps/Route102/scripts.pory"
	walk_down
# 429 "data/maps/Route102/scripts.pory"
	walk_down
# 429 "data/maps/Route102/scripts.pory"
	walk_down
# 429 "data/maps/Route102/scripts.pory"
	walk_down
# 429 "data/maps/Route102/scripts.pory"
	walk_down
# 429 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

gagilRoute2_cantLeavePrepStella::
# 460 "data/maps/Route102/scripts.pory"
	setobjectxyperm 1, 25, 44
# 461 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 462 "data/maps/Route102/scripts.pory"
	addobject 1
	return


gagilRoute2_cantLeaveLeft::
# 466 "data/maps/Route102/scripts.pory"
	lockall
# 467 "data/maps/Route102/scripts.pory"
	call gagilRoute2_cantLeavePrepStella
# 468 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_movement_stellaBlockExitLeft
# 469 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 470 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stellaBlockExit, MSGBOX_AUTOCLOSE
# 471 "data/maps/Route102/scripts.pory"
	waitmessage
# 472 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_movement_stellaBlockExitLeaveLeft
# 473 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 474 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 475 "data/maps/Route102/scripts.pory"
	removeobject 1
# 476 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gagilRoute2_movement_playerBlockExitLeaveLeft
# 477 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 478 "data/maps/Route102/scripts.pory"
	releaseall
	return


# 481 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_stellaBlockExitLeft:
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 482 "data/maps/Route102/scripts.pory"
	walk_up
# 483 "data/maps/Route102/scripts.pory"
	walk_left
# 483 "data/maps/Route102/scripts.pory"
	walk_left
	step_end

# 486 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_stellaBlockExitLeaveLeft:
# 487 "data/maps/Route102/scripts.pory"
	walk_right
# 487 "data/maps/Route102/scripts.pory"
	walk_right
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
# 488 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 491 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_playerBlockExitLeaveLeft:
# 492 "data/maps/Route102/scripts.pory"
	walk_right
	step_end

gagilRoute2_cantLeaveRightBottom::
# 500 "data/maps/Route102/scripts.pory"
	lockall
# 501 "data/maps/Route102/scripts.pory"
	call gagilRoute2_cantLeavePrepStella
# 502 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_movement_stellaBlockExitRightBottom
# 503 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 504 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stellaBlockExit, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route102/scripts.pory"
	waitmessage
# 506 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_movement_stellaBlockExitLeaveRight
# 507 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 508 "data/maps/Route102/scripts.pory"
	setobjectxyperm 1, 25, 44
# 509 "data/maps/Route102/scripts.pory"
	removeobject 1
# 510 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gagilRoute2_movement_playerBlockExitLeaveRight
# 511 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 512 "data/maps/Route102/scripts.pory"
	releaseall
	return


gagilRoute2_cantLeaveRightTop::
# 516 "data/maps/Route102/scripts.pory"
	lockall
# 517 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
# 518 "data/maps/Route102/scripts.pory"
	addobject 1
# 519 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_movement_stellaBlockExitRightTop
# 520 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 521 "data/maps/Route102/scripts.pory"
	msgbox gagilRoute2_text_stellaBlockExit, MSGBOX_AUTOCLOSE
# 522 "data/maps/Route102/scripts.pory"
	waitmessage
# 523 "data/maps/Route102/scripts.pory"
	applymovement 1, gagilRoute2_movement_stellaBlockExitLeaveRight
# 524 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 525 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 526 "data/maps/Route102/scripts.pory"
	setobjectxyperm 1, 25, 44
# 527 "data/maps/Route102/scripts.pory"
	removeobject 1
# 528 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gagilRoute2_movement_playerBlockExitLeaveRight
# 529 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 530 "data/maps/Route102/scripts.pory"
	releaseall
	return


# 533 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_stellaBlockExitRightBottom:
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 534 "data/maps/Route102/scripts.pory"
	walk_up
# 535 "data/maps/Route102/scripts.pory"
	walk_right
# 535 "data/maps/Route102/scripts.pory"
	walk_right
# 535 "data/maps/Route102/scripts.pory"
	walk_right
	step_end

# 538 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_stellaBlockExitRightTop:
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 539 "data/maps/Route102/scripts.pory"
	walk_up
# 540 "data/maps/Route102/scripts.pory"
	walk_right
# 540 "data/maps/Route102/scripts.pory"
	walk_right
# 540 "data/maps/Route102/scripts.pory"
	walk_right
	step_end

# 543 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_stellaBlockExitLeaveRight:
# 544 "data/maps/Route102/scripts.pory"
	walk_left
# 544 "data/maps/Route102/scripts.pory"
	walk_left
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
# 545 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 548 "data/maps/Route102/scripts.pory"
gagilRoute2_movement_playerBlockExitLeaveRight:
# 549 "data/maps/Route102/scripts.pory"
	walk_left
	step_end

gagilRoute2_stellaCutscene_Text_0:
# 393 "data/maps/Route102/scripts.pory"
	.string "rocked my shit cuh$"

nameplateStella::
# 432 "data/maps/Route102/scripts.pory"
	.string "Stella$"

gagilRoute2_text_stella1::
# 436 "data/maps/Route102/scripts.pory"
	.string "bruh they got me pokin around in the\n"
	.string "dirt skullemojie$"

gagilRoute2_text_stella2::
# 441 "data/maps/Route102/scripts.pory"
	.string "at least i'm done lol$"

gagilRoute2_text_stella3::
# 445 "data/maps/Route102/scripts.pory"
	.string "bruh epicsauce$"

gagilRoute2_text_stella4::
# 449 "data/maps/Route102/scripts.pory"
	.string "amanita needs me?\p"
	.string "alright but let's battle first bro\p"
	.string "and here i'll heal up your guys just\nin case$"

gagilRoute2_text_stella5::
# 455 "data/maps/Route102/scripts.pory"
	.string "ite lets head back cmon$"

gagilRoute2_text_stellaBlockExit::
# 495 "data/maps/Route102/scripts.pory"
	.string "bro cmon we gotta go$"
