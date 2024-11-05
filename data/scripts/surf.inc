EventScript_UseSurf::
	checkpartymove MOVE_SURF
	checkpartymove MOVE_WHIRLPOOL
	checkpartymove MOVE_HOARD_CRASH
	checkpartymove MOVE_OIL_SLICK
	checkpartymove MOVE_SLUDGE_WAVE
	checkpartymove MOVE_TORPEDO_RUSH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
