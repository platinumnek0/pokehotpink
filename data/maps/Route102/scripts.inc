Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route2_EventScript_WalkUpLeftMost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpLeftMost
	goto Route2_EventScript_StellaInit

Route2_Movement_WalkUpLeftMost:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route2_EventScript_WalkUpLeft::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpLeft
	goto Route2_EventScript_StellaInit

Route2_Movement_WalkUpLeft:
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route2_EventScript_WalkUpMiddle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpMiddle
	goto Route2_EventScript_StellaInit

Route2_Movement_WalkUpMiddle:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route2_EventScript_WalkUpRight::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpRight
	goto Route2_EventScript_StellaInit

Route2_Movement_WalkUpRight:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route2_EventScript_WalkUpRightMost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_WalkUpRightMost
	goto Route2_EventScript_StellaInit

Route2_Movement_WalkUpRightMost:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route2_EventScript_StellaInit::
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Route2_Movement_StellaWrite
	speakername Nameplate_Unknown
	msgbox Route2_Text_StellaIntro, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, Route2_Movement_StellaHeadDown
	waitmovement 1
	applymovement 1, Route2_Movement_Surprise
	speakername Nameplate_Stella
	msgbox Route2_Text_StellaPreBattle, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, Route2_Movement_Surprise
	waitmovement 1
	applymovement 1, Route2_Movement_StellaHeadDown
	msgbox Route2_Text_StellaAskToBattle, MSGBOX_YESNO
	waitmessage
	goto_if_eq VAR_RESULT, NO, Route2_EventScript_BattleNo
	goto_if_eq VAR_RESULT, YES, Route2_EventScript_BattleYes

Route2_Movement_StellaWrite:
	walk_in_place_up
	walk_in_place_up
	step_end

Route2_Movement_Surprise:
	emote_exclamation_mark
	step_end

Route2_Movement_StellaHeadDown:
	walk_down
	step_end

Route2_EventScript_BattleYes::
	msgbox Route2_Text_StellaYes, MSGBOX_AUTOCLOSE
	goto Route2_EventScript_StellaBattle

Route2_EventScript_BattleNo::
	msgbox Route2_Text_StellaNo, MSGBOX_AUTOCLOSE
	goto Route2_EventScript_StellaBattle

Route2_EventScript_StellaBattle::
	waitmessage
	special HealPlayerParty
	msgbox Route2_Text_StellaBattleIntro, MSGBOX_AUTOCLOSE
	waitmessage
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route2_Text_StellaLoss
	goto Route2_EventScript_StellaPostBattle

Route2_EventScript_StellaPostBattle::
	msgbox Route2_Text_StellaPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, Route2_Movement_StellaLeave
	waitmovement 1
	setvar VAR_LITTLEROOT_INTRO_STATE, 8
	setobjectxyperm 1, 11, 42
	setflag FLAG_HIDE_ROUTE_103_RIVAL
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_PlayerLeave
	waitmovement OBJ_EVENT_ID_PLAYER
	speakername NULL
	releaseall
	end

Route2_Movement_StellaLeave:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route2_Movement_PlayerLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route2_EventScript_ExitBlock::
	lockall
	clearflag FLAG_HIDE_ROUTE_103_RIVAL
	addobject 1
	applymovement 1, Route2_Movement_StellaWalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_FaceDown
	speakername Nameplate_Stella
	waitmovement 1
	msgbox Route2_Text_StellaBlockExit, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, Route2_Movement_BlockExitLeave
	waitmovement 1
	setflag FLAG_HIDE_ROUTE_103_RIVAL
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Movement_BlockExitLeave
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall

Route2_Movement_FaceDown:
	face_down
	step_end

Route2_Movement_StellaWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route2_Movement_BlockExitLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Nameplate_Unknown:
	.string "???$"

Nameplate_Stella:
	.string "Stella$"

Route2_Text_StellaIntro:
	.string "writin shit down for dad\p"
	.string "thats all, sweet\p"
	.string "time 2 head back$"

Route2_Text_StellaPreBattle:
	.string "oh holy shit\p"
	.string "didnt expect you\p"
	.string "so dad sent you to come get me huh\p"
	.string "alright then lets get g-$"

Route2_Text_StellaAskToBattle:
	.string "oh holy shit you got a mon with you\p"
	.string "dad gave you one huh\p"
	.string "howzabout we have a quick battle$"

Route2_Text_StellaYes:
	.string "freakin sweet lewis\p"
	.string "here i'll heal your dude too$"

Route2_Text_StellaNo:
	.string "aw c'mon it'll be fun\p"
	.string "here i'll heal your dude just in case$"

Route2_Text_StellaBattleIntro:
	.string "let's go epic mode$"

Route2_Text_StellaLoss:
	.string "fuuuuck$"

Route2_Text_StellaPostBattle:
	.string "well damn\p"
	.string "let's get going cmon$"

Route2_Text_StellaBlockExit:
	.string "cmon you said we gotta go$"
