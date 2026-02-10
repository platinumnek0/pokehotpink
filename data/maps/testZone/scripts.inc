testZone_MapScripts::
	.byte 0

incrementBaloomVar::
	lockall
	switch VAR_BALOOM_GIFT
	case 0, setBaloomVar1
	case 1, setBaloomVar2
	case 2, setBaloomVar3
	case 3, setBaloomVar0
	end

setBaloomVar1::
	setvar VAR_BALOOM_GIFT, 1
	msgbox setTo1, MSGBOX_AUTOCLOSE
	releaseall
	end

setBaloomVar2::
	setvar VAR_BALOOM_GIFT, 2
	msgbox setTo2, MSGBOX_AUTOCLOSE
	releaseall
	end

setBaloomVar3::
	setvar VAR_BALOOM_GIFT, 3
	msgbox setTo3, MSGBOX_AUTOCLOSE
	releaseall
	end

setBaloomVar0::
	setvar VAR_BALOOM_GIFT, 0
	msgbox setTo0, MSGBOX_AUTOCLOSE
	releaseall
	end

setTo1::
	.string "set to 1$"

setTo2::
	.string "set to 2$"

setTo3::
	.string "set to 3$"

setTo0::
	.string "set to 0$"
