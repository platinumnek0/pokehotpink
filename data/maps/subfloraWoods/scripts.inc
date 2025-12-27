subfloraWoods_MapScripts::
	.byte 0

subfloraWoods_askToEnterTree::
	lockall
	msgbox subflora_Text_canClimbVine, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, subfloraWoods_no
	case YES, subfloraWoods_WarpToHiddenGrotto

subfloraWoods_WarpToHiddenGrotto::
	warp MAP_SUBFLORA_EGG_ROOM, 0, 4, 9
	waitstate
	releaseall
	end

subfloraWoods_no::
	releaseall
	end

subflora_Text_canClimbVine::
	.string "A vine is dangling from this tree.\n"
	.string "It looks sturdy enough to climb…\p"
	.string "Climb it?$"
