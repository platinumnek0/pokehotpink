subfloraEggRoom_MapScripts::
	.byte 0

subfloraEggRoom_man::
	lockall
	setspeaker: speakername subfloraEggRoomManName
	msgbox subfloraEggYesNo, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, subfloraEggRoom_no
	case YES, subfloraEggRoom_gift

subfloraEggRoom_no::
	releaseall
	end

subfloraEggRoom_gift::
	giveitem ITEM_LUCKY_EGG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	removeobject 1
	releaseall
	end

subfloraEggRoomManName::
	.string "Man$"

subfloraEggYesNo::
	.string "There is a man here.\pDo you accept his offer?$"

