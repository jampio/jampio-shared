#pragma once

// entityState_t->eFlags
#define	EF_G2ANIMATING			(1<<0)		//perform g2 bone anims based on torsoAnim and legsAnim, works for ET_GENERAL -rww
#define	EF_DEAD					(1<<1)		// don't draw a foe marker over players with EF_DEAD
//#define	EF_BOUNCE_SHRAPNEL		(1<<2)		// special shrapnel flag
//do not use eflags for server-only things, it wastes bandwidth -rww
#define EF_RADAROBJECT			(1<<2)		// display on team radar

#define	EF_TELEPORT_BIT			(1<<3)		// toggled every time the origin abruptly changes

#define	EF_SHADER_ANIM			(1<<4)		// Animating shader (by s.frame)

#define EF_PLAYER_EVENT			(1<<5)
//#define	EF_BOUNCE				(1<<5)		// for missiles
//#define	EF_BOUNCE_HALF			(1<<6)		// for missiles
//these aren't even referenced in bg or client code and do not need to be eFlags, so I
//am using these flags for rag stuff -rww

#define EF_RAG					(1<<6)		//ragdoll him even if he's alive


#define EF_PERMANENT			(1<<7)		// rww - I am claiming this. (for permanent entities)

#define	EF_NODRAW				(1<<8)		// may have an event, but no model (unspawned items)
#define	EF_FIRING				(1<<9)		// for lightning gun
#define EF_ALT_FIRING			(1<<10)		// for alt-fires, mostly for lightning guns though
#define	EF_JETPACK_ACTIVE		(1<<11)		//jetpack is activated

#define EF_NOT_USED_1			(1<<12)		// not used

#define	EF_TALK					(1<<13)		// draw a talk balloon
#define	EF_CONNECTION			(1<<14)		// draw a connection trouble sprite
#define	EF_NOT_USED_6			(1<<15)		// not used

#define	EF_NOT_USED_2			(1<<16)		// not used
#define	EF_NOT_USED_3			(1<<17)		// not used
#define	EF_NOT_USED_4			(1<<18)		// not used

#define	EF_BODYPUSH				(1<<19)		//rww - claiming this for fullbody push effect

#define	EF_DOUBLE_AMMO			(1<<20)		// Hacky way to get around ammo max
#define EF_SEEKERDRONE			(1<<21)		// show seeker drone floating around head
#define EF_MISSILE_STICK		(1<<22)		// missiles that stick to the wall.
#define EF_ITEMPLACEHOLDER		(1<<23)		// item effect
#define EF_SOUNDTRACKER			(1<<24)		// sound position needs to be updated in relation to another entity
#define EF_DROPPEDWEAPON		(1<<25)		// it's a dropped weapon
#define EF_DISINTEGRATION		(1<<26)		// being disintegrated by the disruptor
#define EF_INVULNERABLE			(1<<27)		// just spawned in or whatever, so is protected

#define EF_CLIENTSMOOTH			(1<<28)		// standard lerporigin smooth override on client

#define EF_JETPACK				(1<<29)		//rww - wearing a jetpack
#define EF_JETPACK_FLAMING		(1<<30)		//rww - jetpack fire effect

#define	EF_NOT_USED_5			(1<<31)		// not used

//These new EF2_??? flags were added for NPCs, they really should not be used often.
//NOTE: we only allow 10 of these!
#define	EF2_HELD_BY_MONSTER		(1<<0)		// Being held by something, like a Rancor or a Wampa
#define	EF2_USE_ALT_ANIM		(1<<1)		// For certain special runs/stands for creatures like the Rancor and Wampa whose runs/stands are conditional
#define	EF2_ALERTED				(1<<2)		// For certain special anims, for Rancor: means you've had an enemy, so use the more alert stand
#define	EF2_GENERIC_NPC_FLAG	(1<<3)		// So far, used for Rancor...
#define	EF2_FLYING				(1<<4)		// Flying FIXME: only used on NPCs doesn't *really* have to be passed over, does it?
#define	EF2_HYPERSPACE			(1<<5)		// Used to both start the hyperspace effect on the predicted client and to let the vehicle know it can now jump into hyperspace (after turning to face the proper angle)
#define	EF2_BRACKET_ENTITY		(1<<6)		// Draw as bracketed
#define	EF2_SHIP_DEATH			(1<<7)		// "died in ship" mode
#define	EF2_NOT_USED_1			(1<<8)		// not used