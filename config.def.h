/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "JetBrainsMono-Regular:size=8", "SymbolsNerdFontMono-Regular:size=6" };
static const char *prompt = "=";            /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { "#FFFFFF", "#202020" },
	[SchemeSel]  = { "#202020", "#40E0D0" },
	[SchemeOut]  = { "#202020", "#FFFFFF" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
