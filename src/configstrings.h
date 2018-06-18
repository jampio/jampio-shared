#pragma once

#include "shared.h"

//
// config strings are a general means of communicating variable length strings
// from the server to all connected clients.
//

// CS_SERVERINFO and CS_SYSTEMINFO are defined in q_shared.h
#define	CS_MUSIC				2
#define	CS_MESSAGE				3		// from the map worldspawn's message field
#define	CS_MOTD					4		// g_motd string for server message of the day
#define	CS_WARMUP				5		// server time when the match will be restarted
#define	CS_SCORES1				6
#define	CS_SCORES2				7
#define CS_VOTE_TIME			8
#define CS_VOTE_STRING			9
#define	CS_VOTE_YES				10
#define	CS_VOTE_NO				11

#define CS_TEAMVOTE_TIME		12
#define CS_TEAMVOTE_STRING		14
#define	CS_TEAMVOTE_YES			16
#define	CS_TEAMVOTE_NO			18

#define	CS_GAME_VERSION			20
#define	CS_LEVEL_START_TIME		21		// so the timer only shows the current level
#define	CS_INTERMISSION			22		// when 1, fraglimit/timelimit has been hit and intermission will start in a second or two
#define CS_FLAGSTATUS			23		// string indicating flag status in CTF
#define CS_SHADERSTATE			24
#define CS_BOTINFO				25

#define	CS_ITEMS				27		// string of 0's and 1's that tell which items are present

#define CS_CLIENT_JEDIMASTER	28		// current jedi master
#define CS_CLIENT_DUELWINNER	29		// current duel round winner - needed for printing at top of scoreboard
#define CS_CLIENT_DUELISTS		30		// client numbers for both current duelists. Needed for a number of client-side things.
#define CS_CLIENT_DUELHEALTHS	31		// nmckenzie: DUEL_HEALTH.  Hopefully adding this cs is safe and good?
#define CS_GLOBAL_AMBIENT_SET	32

#define CS_AMBIENT_SET			37

#define CS_SIEGE_STATE			(CS_AMBIENT_SET+MAX_AMBIENT_SETS)
#define CS_SIEGE_OBJECTIVES		(CS_SIEGE_STATE+1)
#define CS_SIEGE_TIMEOVERRIDE	(CS_SIEGE_OBJECTIVES+1)
#define CS_SIEGE_WINTEAM		(CS_SIEGE_TIMEOVERRIDE+1)
#define CS_SIEGE_ICONS			(CS_SIEGE_WINTEAM+1)

#define	CS_MODELS				(CS_SIEGE_ICONS+1)
#define	CS_SKYBOXORG			(CS_MODELS+MAX_MODELS)		//rww - skybox info
#define	CS_SOUNDS				(CS_SKYBOXORG+1)
#define CS_ICONS				(CS_SOUNDS+MAX_SOUNDS)
#define	CS_PLAYERS				(CS_ICONS+MAX_ICONS)
/*
Ghoul2 Insert Start
*/
#define CS_G2BONES				(CS_PLAYERS+MAX_CLIENTS)
//rww - used to be CS_CHARSKINS, but I have eliminated the need for that.
/*
Ghoul2 Insert End
*/
#define CS_LOCATIONS			(CS_G2BONES+MAX_G2BONES)
#define CS_PARTICLES			(CS_LOCATIONS+MAX_LOCATIONS) 
#define CS_EFFECTS				(CS_PARTICLES+MAX_LOCATIONS)
#define	CS_LIGHT_STYLES			(CS_EFFECTS + MAX_FX)

//rwwRMG - added:
#define CS_TERRAINS				(CS_LIGHT_STYLES + (MAX_LIGHT_STYLES*3))
#define CS_BSP_MODELS			(CS_TERRAINS + MAX_TERRAINS)

#define CS_MAX					(CS_BSP_MODELS + MAX_SUB_BSP)

#if CS_MAX > MAX_CONFIGSTRINGS
#error overflow: (CS_MAX) > MAX_CONFIGSTRINGS
#endif