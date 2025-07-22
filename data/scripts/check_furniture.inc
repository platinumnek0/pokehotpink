EventScript_PictureBookShelf::
	msgbox Text_PictureBookShelf, MSGBOX_SIGN
	end

EventScript_BookShelf::
	msgbox Text_BookShelf, MSGBOX_SIGN
	end

EventScript_PokemonCenterBookShelf::
	msgbox Text_PokemonCenterBookShelf, MSGBOX_SIGN
	end

EventScript_Vase::
	msgbox Text_Vase, MSGBOX_SIGN
	end

EventScript_HeadbuttTree::
	lockall
	checkheadbuttmoves
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_HeadbuttYesNo
	msgbox Text_CouldHeadbutt, MSGBOX_DEFAULT
	waitmessage
EventScript_NothingFell::
	msgbox Text_FruitlessEndeavor, MSGBOX_DEFAULT
EventScript_HeadbuttEnd::
	releaseall
	end

EventScript_HeadbuttYesNo::
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	msgbox Text_WantToHeadbutt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_HeadbuttEnd
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	waitmessage
	fadescreen 1
	playse SE_M_COMET_PUNCH
	waitse
	playse SE_EFFECTIVE
	waitse
	special SetUpHeadbuttBattle
	fadescreen 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_NothingFell
	goto EventScript_HeadbuttEnd

Text_FruitlessEndeavor:
	.string "…but nothing happened.$"

Text_CouldHeadbutt:
	.string "The tree trunk seems sturdy…\p"
	.string "Despite this, you bet hitting it\n"
	.string "would shake the whole tree.$"

Text_WantToHeadbutt:
	.string "The tree trunk seems sturdy.\n"
	.string "Whack it?$"

EventScript_EmptyTrashCan::
	msgbox Text_EmptyTrashCan, MSGBOX_SIGN
	end

EventScript_ShopShelf::
	msgbox Text_ShopShelf, MSGBOX_SIGN
	end

EventScript_Blueprint::
	msgbox Text_Blueprint, MSGBOX_SIGN
	end
