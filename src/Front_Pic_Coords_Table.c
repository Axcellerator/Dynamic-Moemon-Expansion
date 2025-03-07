#include "defines.h"
#include "../include/graphics.h"

const struct MonCoords gMonFrontPicCoords[NUM_SPECIES] =
{
	[SPECIES_NONE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BULBASAUR] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_IVYSAUR] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_VENUSAUR] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_CHARMANDER] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_CHARMELEON] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_CHARIZARD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SQUIRTLE] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_WARTORTLE] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_BLASTOISE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_CATERPIE] =
	{
		.size = 0x54,
		.y_offset = 0xc,
	},
	[SPECIES_METAPOD] =
	{
		.size = 0x54,
		.y_offset = 0xe,
	},
	[SPECIES_BUTTERFREE] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_WEEDLE] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_KAKUNA] =
	{
		.size = 0x45,
		.y_offset = 0xb,
	},
	[SPECIES_BEEDRILL] =
	{
		.size = 0x86,
		.y_offset = 0x5,
	},
	[SPECIES_PIDGEY] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_PIDGEOTTO] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_PIDGEOT] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_RATTATA] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_RATICATE] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SPEAROW] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_FEAROW] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_EKANS] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_ARBOK] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_PIKACHU] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_RAICHU] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SANDSHREW] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_SANDSLASH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_NIDORAN_F] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_NIDORINA] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_NIDOQUEEN] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_NIDORAN_M] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_NIDORINO] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_NIDOKING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLEFAIRY] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CLEFABLE] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_VULPIX] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_NINETALES] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_JIGGLYPUFF] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_WIGGLYTUFF] =
	{
		.size = 0x67,
		.y_offset = 0x4,
	},
	[SPECIES_ZUBAT] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_GOLBAT] =
	{
		.size = 0x88,
		.y_offset = 0x7,
	},
	[SPECIES_ODDISH] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_GLOOM] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_VILEPLUME] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_PARAS] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_PARASECT] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_VENONAT] =
	{
		.size = 0x57,
		.y_offset = 0x8,
	},
	[SPECIES_VENOMOTH] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_DIGLETT] =
	{
		.size = 0x54,
		.y_offset = 0x11,
	},
	[SPECIES_DUGTRIO] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_MEOWTH] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_PERSIAN] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_PSYDUCK] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_GOLDUCK] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_MANKEY] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_PRIMEAPE] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_GROWLITHE] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_ARCANINE] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_POLIWAG] =
	{
		.size = 0x74,
		.y_offset = 0xe,
	},
	[SPECIES_POLIWHIRL] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_POLIWRATH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_ABRA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_KADABRA] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_ALAKAZAM] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_MACHOP] =
	{
		.size = 0x46,
		.y_offset = 0x5,
	},
	[SPECIES_MACHOKE] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_MACHAMP] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BELLSPROUT] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_WEEPINBELL] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_VICTREEBEL] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TENTACOOL] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_TENTACRUEL] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_GEODUDE] =
	{
		.size = 0x74,
		.y_offset = 0x13,
	},
	[SPECIES_GRAVELER] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_GOLEM] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_PONYTA] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_RAPIDASH] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE] =
	{
		.size = 0x65,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWBRO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MAGNEMITE] =
	{
		.size = 0x53,
		.y_offset = 0x14,
	},
	[SPECIES_MAGNETON] =
	{
		.size = 0x75,
		.y_offset = 0x7,
	},
	[SPECIES_FARFETCHD] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_DODUO] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_DODRIO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SEEL] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_DEWGONG] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_GRIMER] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MUK] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SHELLDER] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CLOYSTER] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_GASTLY] =
	{
		.size = 0x77,
		.y_offset = 0xd,
	},
	[SPECIES_HAUNTER] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_GENGAR] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_ONIX] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_DROWZEE] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_HYPNO] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_KRABBY] =
	{
		.size = 0x75,
		.y_offset = 0xe,
	},
	[SPECIES_KINGLER] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_VOLTORB] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_ELECTRODE] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_EXEGGCUTE] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_EXEGGUTOR] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CUBONE] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_MAROWAK] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_HITMONLEE] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_HITMONCHAN] =
	{
		.size = 0x67,
		.y_offset = 0x3,
	},
	[SPECIES_LICKITUNG] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_KOFFING] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_WEEZING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_RHYHORN] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_RHYDON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CHANSEY] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TANGELA] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_KANGASKHAN] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_HORSEA] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_SEADRA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_GOLDEEN] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_SEAKING] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_STARYU] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_STARMIE] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MR_MIME] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_SCYTHER] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_JYNX] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_ELECTABUZZ] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_MAGMAR] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_PINSIR] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_TAUROS] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_MAGIKARP] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_GYARADOS] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_LAPRAS] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_DITTO] =
	{
		.size = 0x54,
		.y_offset = 0x10,
	},
	[SPECIES_EEVEE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_VAPOREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_JOLTEON] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_FLAREON] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_PORYGON] =
	{
		.size = 0x56,
		.y_offset = 0xf,
	},
	[SPECIES_OMANYTE] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_OMASTAR] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_KABUTO] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_KABUTOPS] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_AERODACTYL] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_SNORLAX] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_ARTICUNO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ZAPDOS] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_MOLTRES] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_DRATINI] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_DRAGONAIR] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_DRAGONITE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MEWTWO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MEW] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_CHIKORITA] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_BAYLEEF] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_MEGANIUM] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CYNDAQUIL] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_QUILAVA] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TYPHLOSION] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_TOTODILE] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CROCONAW] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_FERALIGATR] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_SENTRET] =
	{
		.size = 0x47,
		.y_offset = 0x2,
	},
	[SPECIES_FURRET] =
	{
		.size = 0x67,
		.y_offset = 0x4,
	},
	[SPECIES_HOOTHOOT] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_NOCTOWL] =
	{
		.size = 0x58,
		.y_offset = 0x2,
	},
	[SPECIES_LEDYBA] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_LEDIAN] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_SPINARAK] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_ARIADOS] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_CROBAT] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_CHINCHOU] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_LANTURN] =
	{
		.size = 0x87,
		.y_offset = 0xb,
	},
	[SPECIES_PICHU] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_CLEFFA] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_IGGLYBUFF] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_TOGEPI] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_TOGETIC] =
	{
		.size = 0x46,
		.y_offset = 0x8,
	},
	[SPECIES_NATU] =
	{
		.size = 0x44,
		.y_offset = 0xe,
	},
	[SPECIES_XATU] =
	{
		.size = 0x47,
		.y_offset = 0x0,
	},
	[SPECIES_MAREEP] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_FLAAFFY] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_AMPHAROS] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_BELLOSSOM] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_MARILL] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_AZUMARILL] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SUDOWOODO] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_POLITOED] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_HOPPIP] =
	{
		.size = 0x66,
		.y_offset = 0xe,
	},
	[SPECIES_SKIPLOOM] =
	{
		.size = 0x55,
		.y_offset = 0x11,
	},
	[SPECIES_JUMPLUFF] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_AIPOM] =
	{
		.size = 0x58,
		.y_offset = 0x1,
	},
	[SPECIES_SUNKERN] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_SUNFLORA] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_YANMA] =
	{
		.size = 0x86,
		.y_offset = 0xe,
	},
	[SPECIES_WOOPER] =
	{
		.size = 0x54,
		.y_offset = 0x11,
	},
	[SPECIES_QUAGSIRE] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_ESPEON] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UMBREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_MURKROW] =
	{
		.size = 0x66,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWKING] =
	{
		.size = 0x58,
		.y_offset = 0x0,
	},
	[SPECIES_MISDREAVUS] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN] =
	{
		.size = 0x35,
		.y_offset = 0xf,
	},
	[SPECIES_WOBBUFFET] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_GIRAFARIG] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PINECO] =
	{
		.size = 0x56,
		.y_offset = 0xc,
	},
	[SPECIES_FORRETRESS] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_DUNSPARCE] =
	{
		.size = 0x74,
		.y_offset = 0x9,
	},
	[SPECIES_GLIGAR] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_STEELIX] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNUBBULL] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_GRANBULL] =
	{
		.size = 0x57,
		.y_offset = 0x4,
	},
	[SPECIES_QWILFISH] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_SCIZOR] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SHUCKLE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_HERACROSS] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_SNEASEL] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_TEDDIURSA] =
	{
		.size = 0x46,
		.y_offset = 0xc,
	},
	[SPECIES_URSARING] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SLUGMA] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_MAGCARGO] =
	{
		.size = 0x57,
		.y_offset = 0x6,
	},
	[SPECIES_SWINUB] =
	{
		.size = 0x43,
		.y_offset = 0x14,
	},
	[SPECIES_PILOSWINE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_CORSOLA] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_REMORAID] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_OCTILLERY] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_DELIBIRD] =
	{
		.size = 0x56,
		.y_offset = 0x7,
	},
	[SPECIES_MANTINE] =
	{
		.size = 0x88,
		.y_offset = 0xa,
	},
	[SPECIES_SKARMORY] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_HOUNDOUR] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_HOUNDOOM] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_KINGDRA] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_PHANPY] =
	{
		.size = 0x54,
		.y_offset = 0x10,
	},
	[SPECIES_DONPHAN] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON2] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_STANTLER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SMEARGLE] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TYROGUE] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_HITMONTOP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_SMOOCHUM] =
	{
		.size = 0x35,
		.y_offset = 0xe,
	},
	[SPECIES_ELEKID] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_MAGBY] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_MILTANK] =
	{
		.size = 0x77,
		.y_offset = 0x8,
	},
	[SPECIES_BLISSEY] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_RAIKOU] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_ENTEI] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SUICUNE] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_LARVITAR] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_PUPITAR] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_TYRANITAR] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LUGIA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_HO_OH] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CELEBI] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[252] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[253] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[254] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[255] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[256] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[257] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[258] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[259] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[260] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[261] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[262] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[263] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[264] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[265] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[266] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[267] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[268] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[269] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[270] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[271] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[272] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[273] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[274] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[275] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[276] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_TREECKO] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_GROVYLE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SCEPTILE] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_TORCHIC] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_COMBUSKEN] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_BLAZIKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MUDKIP] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_MARSHTOMP] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_SWAMPERT] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_POOCHYENA] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_MIGHTYENA] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_ZIGZAGOON] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_LINOONE] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_WURMPLE] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_SILCOON] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_BEAUTIFLY] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_CASCOON] =
	{
		.size = 0x74,
		.y_offset = 0xb,
	},
	[SPECIES_DUSTOX] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LOTAD] =
	{
		.size = 0x65,
		.y_offset = 0xf,
	},
	[SPECIES_LOMBRE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_LUDICOLO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SEEDOT] =
	{
		.size = 0x46,
		.y_offset = 0xd,
	},
	[SPECIES_NUZLEAF] =
	{
		.size = 0x56,
		.y_offset = 0x6,
	},
	[SPECIES_SHIFTRY] =
	{
		.size = 0x88,
		.y_offset = 0x7,
	},
	[SPECIES_NINCADA] =
	{
		.size = 0x74,
		.y_offset = 0x12,
	},
	[SPECIES_NINJASK] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_SHEDINJA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_TAILLOW] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_SWELLOW] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SHROOMISH] =
	{
		.size = 0x54,
		.y_offset = 0xf,
	},
	[SPECIES_BRELOOM] =
	{
		.size = 0x77,
		.y_offset = 0x1,
	},
	[SPECIES_SPINDA] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_WINGULL] =
	{
		.size = 0x84,
		.y_offset = 0xb,
	},
	[SPECIES_PELIPPER] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_SURSKIT] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_MASQUERAIN] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_WAILMER] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_WAILORD] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SKITTY] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_DELCATTY] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_KECLEON] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_BALTOY] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_CLAYDOL] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_NOSEPASS] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_TORKOAL] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SABLEYE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_BARBOACH] =
	{
		.size = 0x46,
		.y_offset = 0x12,
	},
	[SPECIES_WHISCASH] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_LUVDISC] =
	{
		.size = 0x46,
		.y_offset = 0x10,
	},
	[SPECIES_CORPHISH] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_CRAWDAUNT] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_FEEBAS] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_MILOTIC] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CARVANHA] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_SHARPEDO] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_TRAPINCH] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_VIBRAVA] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_FLYGON] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_MAKUHITA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_HARIYAMA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ELECTRIKE] =
	{
		.size = 0x64,
		.y_offset = 0xe,
	},
	[SPECIES_MANECTRIC] =
	{
		.size = 0x67,
		.y_offset = 0x2,
	},
	[SPECIES_NUMEL] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_CAMERUPT] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SPHEAL] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_SEALEO] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_WALREIN] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_CACNEA] =
	{
		.size = 0x74,
		.y_offset = 0xf,
	},
	[SPECIES_CACTURNE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNORUNT] =
	{
		.size = 0x56,
		.y_offset = 0xd,
	},
	[SPECIES_GLALIE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_LUNATONE] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SOLROCK] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_AZURILL] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_SPOINK] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_GRUMPIG] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_PLUSLE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_MINUN] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MAWILE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_MEDITITE] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_MEDICHAM] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_SWABLU] =
	{
		.size = 0x76,
		.y_offset = 0x10,
	},
	[SPECIES_ALTARIA] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_WYNAUT] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_DUSKULL] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_DUSCLOPS] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_ROSELIA] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_SLAKOTH] =
	{
		.size = 0x74,
		.y_offset = 0x11,
	},
	[SPECIES_VIGOROTH] =
	{
		.size = 0x78,
		.y_offset = 0x7,
	},
	[SPECIES_SLAKING] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_GULPIN] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_SWALOT] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_TROPIUS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WHISMUR] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_LOUDRED] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_EXPLOUD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLAMPERL] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_HUNTAIL] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_GOREBYSS] =
	{
		.size = 0x86,
		.y_offset = 0x3,
	},
	[SPECIES_ABSOL] =
	{
		.size = 0x68,
		.y_offset = 0x2,
	},
	[SPECIES_SHUPPET] =
	{
		.size = 0x56,
		.y_offset = 0xe,
	},
	[SPECIES_BANETTE] =
	{
		.size = 0x55,
		.y_offset = 0x7,
	},
	[SPECIES_SEVIPER] =
	{
		.size = 0x77,
		.y_offset = 0x7,
	},
	[SPECIES_ZANGOOSE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_RELICANTH] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_ARON] =
	{
		.size = 0x43,
		.y_offset = 0xf,
	},
	[SPECIES_LAIRON] =
	{
		.size = 0x75,
		.y_offset = 0x8,
	},
	[SPECIES_AGGRON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CASTFORM] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_VOLBEAT] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_ILLUMISE] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_LILEEP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_CRADILY] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_ANORITH] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_ARMALDO] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_RALTS] =
	{
		.size = 0x35,
		.y_offset = 0xc,
	},
	[SPECIES_KIRLIA] =
	{
		.size = 0x47,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_BAGON] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_SHELGON] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SALAMENCE] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_BELDUM] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_METANG] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_METAGROSS] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_REGIROCK] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_REGICE] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_REGISTEEL] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_KYOGRE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_GROUDON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_RAYQUAZA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS] =
	{
		.size = 0x88,
		.y_offset = 0x8,
	},
	[SPECIES_LATIOS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_JIRACHI] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_DEOXYS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CHIMECHO] =
	{
		.size = 0x37,
		.y_offset = 0xb,
	},
	[SPECIES_EGG] =
	{
		.size = 0x33,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_B] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_C] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_D] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_E] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_F] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_G] =
	{
		.size = 0x35,
		.y_offset = 0xe,
	},
	[SPECIES_UNOWN_H] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_I] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_J] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_K] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_L] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_M] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_N] =
	{
		.size = 0x43,
		.y_offset = 0x14,
	},
	[SPECIES_UNOWN_O] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_P] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_Q] =
	{
		.size = 0x43,
		.y_offset = 0x15,
	},
	[SPECIES_UNOWN_R] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_S] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_UNOWN_T] =
	{
		.size = 0x34,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_U] =
	{
		.size = 0x44,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_V] =
	{
		.size = 0x44,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_W] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_X] =
	{
		.size = 0x33,
		.y_offset = 0x15,
	},
	[SPECIES_UNOWN_Y] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_Z] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_EXCLAMATION] =
	{
		.size = 0x35,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_QUESTION] =
	{
		.size = 0x35,
		.y_offset = 0xd,
	},
	[SPECIES_TURTWIG] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_GROTLE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_TORTERRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHIMCHAR] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MONFERNO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_INFERNAPE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PIPLUP] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_PRINPLUP] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_EMPOLEON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STARLY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_STARAVIA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_STARAPTOR] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BIDOOF] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BIBAREL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_KRICKETOT] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_KRICKETUNE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SHINX] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LUXIO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LUXRAY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_BUDEW] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ROSERADE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_CRANIDOS] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_RAMPARDOS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SHIELDON] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_BASTIODON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BURMY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_WORMADAM] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MOTHIM] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_COMBEE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_VESPIQUEN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PACHIRISU] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BUIZEL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_FLOATZEL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CHERUBI] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CHERRIM] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SHELLOS] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GASTRODON] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_AMBIPOM] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DRIFLOON] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DRIFBLIM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BUNEARY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_LOPUNNY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MISMAGIUS] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_HONCHKROW] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GLAMEOW] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PURUGLY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CHINGLING] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_STUNKY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SKUNTANK] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BRONZOR] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_BRONZONG] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BONSLY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MIME_JR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_HAPPINY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_CHATOT] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SPIRITOMB] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GIBLE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_GABITE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GARCHOMP] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MUNCHLAX] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_RIOLU] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LUCARIO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HIPPOPOTAS] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HIPPOWDON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SKORUPI] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DRAPION] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CROAGUNK] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_TOXICROAK] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CARNIVINE] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_FINNEON] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LUMINEON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MANTYKE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_SNOVER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ABOMASNOW] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WEAVILE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_MAGNEZONE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LICKILICKY] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_RHYPERIOR] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TANGROWTH] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ELECTIVIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MAGMORTAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOGEKISS] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_YANMEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_LEAFEON] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GLACEON] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GLISCOR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MAMOSWINE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PORYGON_Z] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GALLADE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PROBOPASS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DUSKNOIR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FROSLASS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ROTOM] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_UXIE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_MESPRIT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AZELF] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DIALGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PALKIA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HEATRAN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_REGIGIGAS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GIRATINA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CRESSELIA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PHIONE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MANAPHY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DARKRAI] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SHAYMIN] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_ARCEUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VICTINI] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SNIVY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SERVINE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SERPERIOR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TEPIG] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_PIGNITE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_EMBOAR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_OSHAWOTT] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DEWOTT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SAMUROTT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PATRAT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_WATCHOG] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_LILLIPUP] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HERDIER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_STOUTLAND] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PURRLOIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_LIEPARD] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PANSAGE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SIMISAGE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PANSEAR] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SIMISEAR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PANPOUR] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SIMIPOUR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MUNNA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_MUSHARNA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PIDOVE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TRANQUILL] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_UNFEZANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLITZLE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ZEBSTRIKA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROGGENROLA] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_BOLDORE] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GIGALITH] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_WOOBAT] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_SWOOBAT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DRILBUR] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_EXCADRILL] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AUDINO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TIMBURR] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GURDURR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CONKELDURR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TYMPOLE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_PALPITOAD] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SEISMITOAD] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_THROH] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SAWK] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SEWADDLE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_SWADLOON] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_LEAVANNY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VENIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_WHIRLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SCOLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_COTTONEE] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_WHIMSICOTT] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PETILIL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LILLIGANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_RED] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SANDILE] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_KROKOROK] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_KROOKODILE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DARUMAKA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DARMANITAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MARACTUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DWEBBLE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CRUSTLE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SCRAGGY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SCRAFTY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SIGILYPH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YAMASK] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_COFAGRIGUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TIRTOUGA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CARRACOSTA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ARCHEN] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ARCHEOPS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TRUBBISH] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GARBODOR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ZORUA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ZOROARK] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MINCCINO] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_CINCCINO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOTHITA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_GOTHORITA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOTHITELLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SOLOSIS] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_DUOSION] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_REUNICLUS] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DUCKLETT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SWANNA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_VANILLITE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_VANILLISH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_VANILLUXE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DEERLING] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SAWSBUCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_EMOLGA] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_KARRABLAST] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ESCAVALIER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FOONGUS] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_AMOONGUSS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_FRILLISH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_JELLICENT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ALOMOMOLA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_JOLTIK] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_GALVANTULA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_FERROSEED] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_FERROTHORN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_KLINK] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_KLANG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KLINKLANG] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TYNAMO] =
	{
		.size = 0x0,
		.y_offset = 0x18,
	},
	[SPECIES_EELEKTRIK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_EELEKTROSS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ELGYEM] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_BEHEEYEM] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LITWICK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LAMPENT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CHANDELURE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_AXEW] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FRAXURE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HAXORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CUBCHOO] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BEARTIC] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CRYOGONAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHELMET] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ACCELGOR] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_STUNFISK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MIENFOO] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MIENSHAO] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DRUDDIGON] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_GOLETT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOLURK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PAWNIARD] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BISHARP] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BOUFFALANT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_RUFFLET] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BRAVIARY] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_VULLABY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MANDIBUZZ] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_HEATMOR] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DURANT] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DEINO] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ZWEILOUS] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HYDREIGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LARVESTA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_VOLCARONA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_COBALION] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TERRAKION] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_VIRIZION] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TORNADUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_THUNDURUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_RESHIRAM] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ZEKROM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LANDORUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_KYUREM] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_KELDEO] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MELOETTA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GENESECT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_UNFEZANT_F] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FRILLISH_F] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_JELLICENT_F] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SHADOW_WARRIOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BURMY_SANDY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BURMY_TRASH] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_WORMADAM_SANDY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_WORMADAM_TRASH] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SHELLOS_EAST] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_GASTRODON_EAST] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ROTOM_HEAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ROTOM_WASH] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ROTOM_FROST] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ROTOM_FAN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ROTOM_MOW] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_GIRATINA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHAYMIN_SKY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ARCEUS_FIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_POISON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GROUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_BUG] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GHOST] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_STEEL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_WATER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GRASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ELECTRIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_PSYCHIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_DRAGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_DARK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DARMANITANZEN] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DEERLING_SUMMER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DEERLING_AUTUMN] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DEERLING_WINTER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SAWSBUCK_SUMMER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SAWSBUCK_AUTUMN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SAWSBUCK_WINTER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HIPPOPOTAS_F] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HIPPOWDON_F] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MELOETTA_PIROUETTE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GENESECT_SHOCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENESECT_BURN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENESECT_CHILL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENESECT_DOUSE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHERRIM_SUN] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_KYUREM_BLACK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KYUREM_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TORNADUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_THUNDURUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_LANDORUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KELDEO_RESOLUTE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CHESPIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_QUILLADIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_CHESNAUGHT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FENNEKIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BRAIXEN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DELPHOX] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FROAKIE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FROGADIER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GRENINJA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BUNNELBY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DIGGERSBY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FLETCHLING] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLETCHINDER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TALONFLAME] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SCATTERBUG] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SPEWPA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_VIVILLON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITLEO] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_PYROAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLABEBE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLOETTE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLORGES] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SKIDDO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOGOAT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_PANCHAM] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PANGORO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ESPURR] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_MEOWSTIC] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_HONEDGE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DOUBLADE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AEGISLASH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SPRITZEE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_AROMATISSE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SWIRLIX] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_SLURPUFF] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_INKAY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MALAMAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BINACLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BARBARACLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SKRELP] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DRAGALGE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CLAUNCHER] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CLAWITZER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_HELIOPTILE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_HELIOLISK] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TYRUNT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TYRANTRUM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AMAURA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_AURORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SYLVEON] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HAWLUCHA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DEDENNE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_CARBINK] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GOOMY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SLIGGOO] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GOODRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KLEFKI] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PHANTUMP] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_TREVENANT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PUMPKABOO] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GOURGEIST] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BERGMITE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_AVALUGG] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_NOIBAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_NOIVERN] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_XERNEAS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YVELTAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZYGARDE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DIANCIE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_HOOPA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HOOPA_UNBOUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VOLCANION] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PYROAR_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_MEOWSTIC_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AEGISLASH_BLADE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FAIRY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZYGARDE_CELL] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_ZYGARDE_CORE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ZYGARDE_10] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ZYGARDE_COMPLETE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ASHGRENINJA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_FLABEBE_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLABEBE_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLABEBE_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLABEBE_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLOETTE_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_ETERNAL] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLORGES_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLORGES_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLORGES_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLORGES_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PUMPKABOO_XL] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_PUMPKABOO_L] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PUMPKABOO_M] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GOURGEIST_XL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GOURGEIST_L] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GOURGEIST_M] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FURFROU_HEART] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FURFROU_DIAMOND] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FURFROU_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FURFROU_PHAROAH] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_KABUKI] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_LA_REINE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_MATRON] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_DANDY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_DEBUTANTE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_VIVILLON_FANCY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VENUSAUR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CHARIZARD_MEGA_X] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHARIZARD_MEGA_Y] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLASTOISE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BEEDRILL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_PIDGEOT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ALAKAZAM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWBRO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENGAR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KANGASKHAN_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PINSIR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GYARADOS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AERODACTYL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MEWTWO_MEGA_X] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEWTWO_MEGA_Y] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_AMPHAROS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STEELIX_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCIZOR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HERACROSS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HOUNDOOM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TYRANITAR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCEPTILE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLAZIKEN_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SWAMPERT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SABLEYE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MAWILE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AGGRON_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEDICHAM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MANECTRIC_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SHARPEDO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CAMERUPT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ALTARIA_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BANETTE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ABSOL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GLALIE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SALAMENCE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_METAGROSS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LATIOS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GROUDON_PRIMAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KYOGRE_PRIMAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_RAYQUAZA_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LOPUNNY_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GARCHOMP_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUCARIO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ABOMASNOW_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GALLADE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_AUDINO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DIANCIE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DIALGA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PALKIA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ARCHIPELAGO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_CONTINENTAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ELEGANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_GARDEN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_HIGH_PLAINS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ICY_SNOW] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_JUNGLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MARINE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MODERN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MONSOON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_OCEAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_POKEBALL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_POLAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_RIVER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SANDSTORM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SAVANNA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SUN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_TUNDRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROWLET] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DARTRIX] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DECIDUEYE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITTEN] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TORRACAT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_INCINEROAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_POPPLIO] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BRIONNE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PRIMARINA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKIPEK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TRUMBEAK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TOUCANNON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YUNGOOS] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_GUMSHOOS] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_GRUBBIN] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_CHARJABUG] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_VIKAVOLT] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CRABRAWLER] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CRABOMINABLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ORICORIO] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CUTIEFLY] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_RIBOMBEE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ROCKRUFF] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LYCANROC] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_WISHIWASHI] =
	{
		.size = 0x0,
		.y_offset = 0x15,
	},
	[SPECIES_MAREANIE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TOXAPEX] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MUDBRAY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MUDSDALE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DEWPIDER] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ARAQUANID] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FOMANTIS] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LURANTIS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MORELULL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SHIINOTIC] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SALANDIT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SALAZZLE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_STUFFUL] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BEWEAR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_BOUNSWEET] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_STEENEE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_TSAREENA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_COMFEY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ORANGURU] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_PASSIMIAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WIMPOD] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GOLISOPOD] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SANDYGAST] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_PALOSSAND] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PYUKUMUKU] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_TYPE_NULL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SILVALLY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MINIOR_SHIELD] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_KOMALA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TURTONATOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOGEDEMARU] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MIMIKYU] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BRUXISH] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_DRAMPA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DHELMISE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_JANGMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HAKAMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KOMMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TAPU_KOKO] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_TAPU_LELE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TAPU_BULU] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TAPU_FINI] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_COSMOG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_COSMOEM] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SOLGALEO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUNALA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NIHILEGO] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BUZZWOLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PHEROMOSA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_XURKITREE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CELESTEELA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KARTANA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_GUZZLORD] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_NECROZMA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MAGEARNA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MARSHADOW] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_RATTATA_A] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_RATICATE_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RAICHU_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SANDSHREW_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SANDSLASH_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_VULPIX_A] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_NINETALES_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DIGLETT_A] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_DUGTRIO_A] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MEOWTH_A] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PERSIAN_A] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GEODUDE_A] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_GRAVELER_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GOLEM_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GRIMER_A] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MUK_A] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_EXEGGCUTE_A] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_EXEGGUTOR_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CUBONE_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MAROWAK_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DEOXYS_ATTACK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DEOXYS_DEFENSE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DEOXYS_SPEED] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ORICORIO_Y] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ORICORIO_P] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ORICORIO_S] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LYCANROC_N] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WISHIWASHI_S] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SILVALLY_FIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_POISON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GROUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_BUG] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GHOST] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_STEEL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_WATER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GRASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ELECTRIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_PSYCHIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_DRAGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_DARK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FAIRY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MINIOR_RED] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_INDIGO] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_GREEN] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_VIOLET] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MIMIKYU_BUSTED] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MAGEARNA_P] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_POIPOLE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_NAGANADEL] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_STAKATAKA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLACEPHALON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZERAORA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_NECROZMA_DUSK_MANE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NECROZMA_DAWN_WINGS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NECROZMA_ULTRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LYCANROC_DUSK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MELTAN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MELMETAL] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_SURFING] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PIKACHU_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKACHU_COSPLAY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_LIBRE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_POP_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_ROCK_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_BELLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_PHD] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_ORIGINAL] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_HOENN] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_SINNOH] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_UNOVA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_KALOS] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_ALOLA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_PARTNER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PICHU_SPIKY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_XERNEAS_NATURAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GROOKEY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_THWACKEY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_RILLABOOM] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SCORBUNNY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RABOOT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_CINDERACE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SOBBLE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DRIZZILE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_INTELEON] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SKWOVET] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GREEDENT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ROOKIDEE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CORVISQUIRE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CORVIKNIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_BLIPBUG] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DOTTLER] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ORBEETLE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_NICKIT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_THIEVUL] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOSSIFLEUR] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ELDEGOSS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_WOOLOO] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DUBWOOL] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CHEWTLE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DREDNAW] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_YAMPER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BOLTUND] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ROLYCOLY] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CARKOL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_COALOSSAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_APPLIN] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_FLAPPLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_APPLETUN] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SILICOBRA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SANDACONDA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_CRAMORANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARROKUDA] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_BARRASKEWDA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TOXEL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_TOXTRICITY] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SIZZLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_CENTISKORCH] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_CLOBBOPUS] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GRAPPLOCT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SINISTEA] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_POLTEAGEIST] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HATENNA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HATTREM] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HATTERENE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_IMPIDIMP] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MORGREM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GRIMMSNARL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_OBSTAGOON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PERRSERKER] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CURSOLA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SIRFETCHD] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MR_RIME] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_RUNERIGUS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MILCERY] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_ALCREMIE_STRAWBERRY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_FALINKS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PINCURCHIN] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_SNOM] =
	{
		.size = 0x0,
		.y_offset = 0x14,
	},
	[SPECIES_FROSMOTH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_STONJOURNER] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_EISCUE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INDEEDEE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MORPEKO] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CUFANT] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_COPPERAJAH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DRACOZOLT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ARCTOZOLT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DRACOVISH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCTOVISH] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_DURALUDON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DREEPY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DRAKLOAK] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_DRAGAPULT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ZACIAN] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ZAMAZENTA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ETERNATUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_KUBFU] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_URSHIFU_SINGLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZARUDE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_REGIELEKI] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_REGIDRAGO] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GLASTRIER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRIER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CALYREX] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CRAMORANT_GULPING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CRAMORANT_GORGING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOXTRICITY_LOW_KEY] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SINISTEA_CHIPPED] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_POLTEAGEIST_CHIPPED] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ALCREMIE_BERRY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_CLOVER] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_FLOWER] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_LOVE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_RIBBON] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_EISCUE_NOICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INDEEDEE_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MORPEKO_HANGRY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ZACIAN_CROWNED] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZAMAZENTA_CROWNED] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ETERNATUS_ETERNAMAX] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_URSHIFU_RAPID] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZARUDE_DADA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CALYREX_ICE_RIDER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CALYREX_SHADOW_RIDER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEOWTH_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PONYTA_G] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RAPIDASH_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE_G] =
	{
		.size = 0x0,
		.y_offset = 0x13,
	},
	[SPECIES_SLOWBRO_G] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FARFETCHD_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_KOFFING_G] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_WEEZING_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MR_MIME_G] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ARTICUNO_G] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ZAPDOS_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MOLTRES_G] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SLOWKING_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CORSOLA_G] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ZIGZAGOON_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_LINOONE_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MIME_JR_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_DARUMAKA_G] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_DARMANITAN_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DARMANITAN_G_ZEN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_YAMASK_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_STUNFISK_G] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_VENUSAUR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CHARIZARD_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLASTOISE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BUTTERFREE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PIKACHU_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MEOWTH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_MACHAMP_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENGAR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KINGLER_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LAPRAS_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_EEVEE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SNORLAX_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GARBODOR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MELMETAL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_RILLABOOM_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CINDERACE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INTELEON_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CORVIKNIGHT_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ORBEETLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DREDNAW_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_COALOSSAL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLAPPLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_APPLETUN_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SANDACONDA_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_TOXTRICITY_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOXTRICITY_LOW_KEY_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CENTISKORCH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HATTERENE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GRIMMSNARL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ALCREMIE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_COPPERAJAH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DURALUDON_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_URSHIFU_SINGLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_URSHIFU_RAPID_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MISSINGNO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_WYRDEER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VOLTORB_H] = 
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_ELECTRODE_H] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_URSALUNA] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_BRAVIARY_H] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_QWILFISH_H] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_OVERQWIL] =
	{
		.size = 0x56,
		.y_offset = 0x4,
	},
	[SPECIES_DECIDUEYE_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SAMUROTT_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TYPHLOSION_H] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SNEASEL_H] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_SNEASLER] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_ZORUA_H] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ZOROARK_H] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GROWLITHE_H] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_ARCANINE_H] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_BASCULIN_H] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BASCULEGION] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_KLEAVOR] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_LUGIA_S] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_AVALUGG_H] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LILLIGANT_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLIGGOO_H] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GOODRA_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ENAMORUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ENAMORUS_T] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULEGION_F] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_S1] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S2] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S3] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S4] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S5] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S6] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S7] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S8] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S9] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S10] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S11] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S12] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S13] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S14] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S15] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S16] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S17] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S18] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S19] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S20] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S21] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S22] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S23] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S24] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S25] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S26] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S27] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S28] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S29] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S30] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S31] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S32] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S33] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S34] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S35] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S36] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S37] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S38] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S39] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S40] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S41] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S42] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S43] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S44] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S45] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S46] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S47] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S48] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S49] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S50] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S51] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S52] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S53] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S54] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S55] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S56] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S57] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S58] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S59] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S60] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S61] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S62] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S63] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S64] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S65] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S66] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S67] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S68] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S69] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S70] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S71] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S72] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S73] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S74] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S75] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S76] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S77] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S78] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S79] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S80] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S81] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S82] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S83] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S84] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S85] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S86] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S87] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S88] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S89] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S90] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S91] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S92] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S93] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_CUBBURN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_FLAMBEAR] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_BRUINUS] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_PALSSIO] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_PRESSIO] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_DONMARIN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_VULPII] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_BURGELA] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_JUNGELA] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_HANEEI] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_KAZAPPELIN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_ORFRY] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_MOLAMBINO] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_ANGORE] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_LUREEL] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_PARASPOR] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_MIMMEO] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_DODAERIE] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_COINPUR] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_MOIBELLE] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_BELLEDAM] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_KOLTA] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_DISTURBAN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_SMUJJ] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_PUPPERON] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_BELLIGNAN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_GRENMAR] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_TYKER] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_STRAIGAR] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_LUXWAN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_STROMEN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_PHANDARIN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_TRICULES] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_WARFURS] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_WEARLYCAN] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_GOROCHU] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_MISSINGNO_YELLOW] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_MISSINGNO_GHOST] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_MISSINGNO_FOSSIL] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S133] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S134] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S135] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S136] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S137] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S138] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S139] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S140] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S141] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S142] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S143] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S144] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S145] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S146] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S147] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S148] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S149] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S150] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S151] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S152] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S153] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S154] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S155] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S156] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S157] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S158] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S159] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S160] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S161] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S162] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S163] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S164] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S165] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S166] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S167] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S168] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S169] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S170] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S171] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S172] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S173] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S174] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S175] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S176] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S177] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S178] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S179] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S180] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S181] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S182] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S183] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S184] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S185] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S186] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S187] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S188] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S189] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S190] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S191] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S192] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S193] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S194] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S195] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S196] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S197] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S198] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S199] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S200] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S201] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S202] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S203] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S204] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S205] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S206] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S207] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S208] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S209] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S210] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S211] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S212] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S213] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S214] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S215] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S216] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S217] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S218] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S219] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S220] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S221] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S222] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S223] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S224] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S225] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S226] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S227] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S228] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S229] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S230] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S231] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S232] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S233] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S234] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S235] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S236] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S237] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S238] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S239] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S240] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S241] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S242] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S243] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S244] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S245] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S246] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S247] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S248] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S249] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S250] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S251] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S252] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S253] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S254] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S255] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S256] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S257] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S258] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S259] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S260] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S261] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S262] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S263] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S264] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S265] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S266] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S267] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S268] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S269] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S270] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S271] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S272] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S273] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S274] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S275] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S276] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S277] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S278] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S279] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S280] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S281] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S282] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S283] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S284] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S285] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S286] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S287] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S288] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S289] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S290] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S291] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S292] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S293] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S294] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S295] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S296] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S297] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S298] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S299] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
	[SPECIES_S300] =
	{
	.size = 0x0,
	.y_offset = 0x0,
	},
};

