/*  
 *  EDIT THIS FILE WITH CAUTION  (ntpq-opts.c)
 *  
 *  It has been AutoGen-ed  July  9, 2010 at 02:24:18 AM by AutoGen 5.10
 *  From the definitions    ntpq-opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 33:0:8 templates.
 */

/*
 *  This file was produced by an AutoOpts template.  AutoOpts is a
 *  copyrighted work.  This source file is not encumbered by AutoOpts
 *  licensing, but is provided under the licensing terms chosen by the
 *  ntpq author or copyright holder.  AutoOpts is licensed under
 *  the terms of the LGPL.  The redistributable library (``libopts'') is
 *  licensed under the terms of either the LGPL or, at the users discretion,
 *  the BSD license.  See the AutoOpts and/or libopts sources for details.
 *
 * This source file is copyrighted and licensed under the following terms:
 *
 * ntpq copyright (c) 1970-2010 David L. Mills and/or others - all rights reserved
 *
 * see html/copyright.html
 */

#include <sys/types.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define OPTION_CODE_COMPILE 1
#include "ntpq-opts.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* TRANSLATORS: choose the translation for option names wisely because you
                cannot ever change your mind. */
tSCC zCopyright[] =
       "ntpq copyright (c) 1970-2010 David L. Mills and/or others, all rights reserved"
/* extracted from ../include/copyright.def near line 8 */
;
tSCC zCopyrightNotice[24] =
"see html/copyright.html";

extern tUsageProc optionUsage;

/*
 *  global included definitions
 */
#ifdef __windows
  extern int atoi(const char*);
#else
# include <stdlib.h>
#endif

#ifndef NULL
#  define NULL 0
#endif
#ifndef EXIT_SUCCESS
#  define  EXIT_SUCCESS 0
#endif
#ifndef EXIT_FAILURE
#  define  EXIT_FAILURE 1
#endif

/*
 *  Ipv4 option description with
 *  "Must also have options" and "Incompatible options":
 */
tSCC    zIpv4Text[] =
        "Force IPv4 DNS name resolution";
tSCC    zIpv4_NAME[]               = "IPV4";
tSCC    zIpv4_Name[]               = "ipv4";
static const int
    aIpv4CantList[] = {
    INDEX_OPT_IPV6, NO_EQUIVALENT };
#define IPV4_FLAGS       (OPTST_DISABLED)

/*
 *  Ipv6 option description with
 *  "Must also have options" and "Incompatible options":
 */
tSCC    zIpv6Text[] =
        "Force IPv6 DNS name resolution";
tSCC    zIpv6_NAME[]               = "IPV6";
tSCC    zIpv6_Name[]               = "ipv6";
static const int
    aIpv6CantList[] = {
    INDEX_OPT_IPV4, NO_EQUIVALENT };
#define IPV6_FLAGS       (OPTST_DISABLED)

/*
 *  Command option description:
 */
tSCC    zCommandText[] =
        "run a command and exit";
tSCC    zCommand_NAME[]            = "COMMAND";
tSCC    zCommand_Name[]            = "command";
#define COMMAND_FLAGS       (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/*
 *  Debug_Level option description:
 */
tSCC    zDebug_LevelText[] =
        "Increase output debug message level";
tSCC    zDebug_Level_NAME[]        = "DEBUG_LEVEL";
tSCC    zDebug_Level_Name[]        = "debug-level";
#define DEBUG_LEVEL_FLAGS       (OPTST_DISABLED)

/*
 *  Set_Debug_Level option description:
 */
tSCC    zSet_Debug_LevelText[] =
        "Set the output debug message level";
tSCC    zSet_Debug_Level_NAME[]    = "SET_DEBUG_LEVEL";
tSCC    zSet_Debug_Level_Name[]    = "set-debug-level";
#define SET_DEBUG_LEVEL_FLAGS       (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/*
 *  Peers option description with
 *  "Must also have options" and "Incompatible options":
 */
tSCC    zPeersText[] =
        "Print a list of the peers";
tSCC    zPeers_NAME[]              = "PEERS";
tSCC    zPeers_Name[]              = "peers";
static const int
    aPeersCantList[] = {
    INDEX_OPT_INTERACTIVE, NO_EQUIVALENT };
#define PEERS_FLAGS       (OPTST_DISABLED)

/*
 *  Interactive option description with
 *  "Must also have options" and "Incompatible options":
 */
tSCC    zInteractiveText[] =
        "Force ntpq to operate in interactive mode";
tSCC    zInteractive_NAME[]        = "INTERACTIVE";
tSCC    zInteractive_Name[]        = "interactive";
static const int
    aInteractiveCantList[] = {
    INDEX_OPT_COMMAND,
    INDEX_OPT_PEERS, NO_EQUIVALENT };
#define INTERACTIVE_FLAGS       (OPTST_DISABLED)

/*
 *  Numeric option description:
 */
tSCC    zNumericText[] =
        "numeric host addresses";
tSCC    zNumeric_NAME[]            = "NUMERIC";
tSCC    zNumeric_Name[]            = "numeric";
#define NUMERIC_FLAGS       (OPTST_DISABLED)

/*
 *  Old_Rv option description:
 */
tSCC    zOld_RvText[] =
        "Always output status line with readvar";
tSCC    zOld_Rv_NAME[]             = "OLD_RV";
tSCC    zOld_Rv_Name[]             = "old-rv";
#define OLD_RV_FLAGS       (OPTST_DISABLED)

/*
 *  Help/More_Help/Version option descriptions:
 */
tSCC zHelpText[]          = "Display extended usage information and exit";
tSCC zHelp_Name[]         = "help";
#ifdef HAVE_WORKING_FORK
#define OPTST_MORE_HELP_FLAGS   (OPTST_IMM | OPTST_NO_INIT)
tSCC zMore_Help_Name[]    = "more-help";
tSCC zMore_HelpText[]     = "Extended usage information passed thru pager";
#else
#define OPTST_MORE_HELP_FLAGS   (OPTST_OMITTED | OPTST_NO_INIT)
#define zMore_Help_Name   NULL
#define zMore_HelpText    NULL
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define OPTST_VERSION_FLAGS   OPTST_IMM | OPTST_NO_INIT
#else
#  define OPTST_VERSION_FLAGS   OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                                OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT
#endif

tSCC zVersionText[]       = "Output version information and exit";
tSCC zVersion_Name[]      = "version";
tSCC zSave_OptsText[]     = "Save the option state to a config file";
tSCC zSave_Opts_Name[]    = "save-opts";
tSCC zLoad_OptsText[]     = "Load options from a config file";
tSCC zLoad_Opts_NAME[]    = "LOAD_OPTS";
tSCC zNotLoad_Opts_Name[] = "no-load-opts";
tSCC zNotLoad_Opts_Pfx[]  = "no";
#define zLoad_Opts_Name   (zNotLoad_Opts_Name + 3)
/*
 *  Declare option callback procedures
 */
#if defined(TEST_NTPQ_OPTS)
/*
 *  Under test, omit argument processing, or call optionStackArg,
 *  if multiple copies are allowed.
 */
extern tOptProc
    optionPagedUsage, optionStackArg, optionVersionStderr;
static tOptProc
    doUsageOpt;

/*
 *  #define map the "normal" callout procs to the test ones...
 */
#define COMMAND_OPT_PROC optionStackArg
#define SET_DEBUG_LEVEL_OPT_PROC optionStackArg
#define PEERS_OPT_PROC optionStackArg


#else /* NOT defined TEST_NTPQ_OPTS */
/*
 *  When not under test, there are different procs to use
 */
extern tOptProc
    ntpq_custom_opt_handler, optionPagedUsage, optionPrintVersion;
static tOptProc
    doOptSet_Debug_Level, doUsageOpt;

/*
 *  #define map the "normal" callout procs
 */
#define COMMAND_OPT_PROC ntpq_custom_opt_handler
#define SET_DEBUG_LEVEL_OPT_PROC doOptSet_Debug_Level
#define PEERS_OPT_PROC ntpq_custom_opt_handler

#define COMMAND_OPT_PROC ntpq_custom_opt_handler
#define SET_DEBUG_LEVEL_OPT_PROC doOptSet_Debug_Level
#define PEERS_OPT_PROC ntpq_custom_opt_handler
#endif /* defined(TEST_NTPQ_OPTS) */
#ifdef TEST_NTPQ_OPTS
# define DOVERPROC optionVersionStderr
#else
# define DOVERPROC optionPrintVersion
#endif /* TEST_NTPQ_OPTS */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the Ntpq Option Descriptions.
 */
static tOptDesc optDesc[ OPTION_CT ] = {
  {  /* entry idx, value */ 0, VALUE_OPT_IPV4,
     /* equiv idx, value */ 0, VALUE_OPT_IPV4,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ IPV4_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, aIpv4CantList,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zIpv4Text, zIpv4_NAME, zIpv4_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_IPV6,
     /* equiv idx, value */ 1, VALUE_OPT_IPV6,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ IPV6_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, aIpv6CantList,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zIpv6Text, zIpv6_NAME, zIpv6_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_COMMAND,
     /* equiv idx, value */ 2, VALUE_OPT_COMMAND,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ COMMAND_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ COMMAND_OPT_PROC,
     /* desc, NAME, name */ zCommandText, zCommand_NAME, zCommand_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 3, VALUE_OPT_DEBUG_LEVEL,
     /* equiv idx, value */ 3, VALUE_OPT_DEBUG_LEVEL,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ DEBUG_LEVEL_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zDebug_LevelText, zDebug_Level_NAME, zDebug_Level_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 4, VALUE_OPT_SET_DEBUG_LEVEL,
     /* equiv idx, value */ 4, VALUE_OPT_SET_DEBUG_LEVEL,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ SET_DEBUG_LEVEL_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ SET_DEBUG_LEVEL_OPT_PROC,
     /* desc, NAME, name */ zSet_Debug_LevelText, zSet_Debug_Level_NAME, zSet_Debug_Level_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 5, VALUE_OPT_PEERS,
     /* equiv idx, value */ 5, VALUE_OPT_PEERS,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PEERS_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, aPeersCantList,
     /* option proc      */ PEERS_OPT_PROC,
     /* desc, NAME, name */ zPeersText, zPeers_NAME, zPeers_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 6, VALUE_OPT_INTERACTIVE,
     /* equiv idx, value */ 6, VALUE_OPT_INTERACTIVE,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ INTERACTIVE_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, aInteractiveCantList,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zInteractiveText, zInteractive_NAME, zInteractive_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 7, VALUE_OPT_NUMERIC,
     /* equiv idx, value */ 7, VALUE_OPT_NUMERIC,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ NUMERIC_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zNumericText, zNumeric_NAME, zNumeric_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 8, VALUE_OPT_OLD_RV,
     /* equiv idx, value */ 8, VALUE_OPT_OLD_RV,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OLD_RV_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zOld_RvText, zOld_Rv_NAME, zOld_Rv_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_VERSION_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ DOVERPROC,
     /* desc, NAME, name */ zVersionText, NULL, zVersion_Name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ zHelpText, NULL, zHelp_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_MORE_HELP_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ zMore_HelpText, NULL, zMore_Help_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_SAVE_OPTS, VALUE_OPT_SAVE_OPTS,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_SET_ARGTYPE(OPARG_TYPE_STRING)
                          | OPTST_ARG_OPTIONAL | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ zSave_OptsText, NULL, zSave_Opts_Name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_LOAD_OPTS, VALUE_OPT_LOAD_OPTS,
     /* equiv idx value  */ NO_EQUIVALENT, 0,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ OPTST_SET_ARGTYPE(OPARG_TYPE_STRING)
			  | OPTST_DISABLE_IMM, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ optionLoadOpt,
     /* desc, NAME, name */ zLoad_OptsText, zLoad_Opts_NAME, zLoad_Opts_Name,
     /* disablement strs */ zNotLoad_Opts_Name, zNotLoad_Opts_Pfx }
};

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the Ntpq Option Environment
 */
tSCC   zPROGNAME[]   = "NTPQ";
tSCC   zUsageTitle[] =
"ntpq - standard NTP query program - Ver. 4.2.6p2\n\
USAGE:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... [ host ...]\n";
tSCC   zRcName[]     = ".ntprc";
tSCC*  apzHomeList[] = {
       "$HOME",
       ".",
       NULL };

tSCC   zBugsAddr[]    = "http://bugs.ntp.org, bugs@ntp.org";
#define zExplain NULL
tSCC    zDetail[]     = "\n\
The\n\
[= prog-name =]\n\
utility program is used to query NTP servers which\n\
implement the standard NTP mode 6 control message formats defined\n\
in Appendix B of the NTPv3 specification RFC1305, requesting\n\
information about current state and/or changes in that state.\n\
The same formats are used in NTPv4, although some of the\n\
variables have changed and new ones added.\n";
tSCC    zFullVersion[] = NTPQ_FULL_VERSION;
/* extracted from /usr/local/gnu/share/autogen/optcode.tpl near line 495 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */


#define ntpq_full_usage NULL
#define ntpq_short_usage NULL
tOptions ntpqOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_ENVIRON ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zCopyrightNotice,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage,       /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      INDEX_OPT_SAVE_OPTS, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    14 /* full option count */, 9 /* user option count */,
    ntpq_full_usage, ntpq_short_usage,
    NULL, NULL
};

/*
 *  Create the static procedure(s) declared above.
 */
static void
doUsageOpt(
    tOptions*   pOptions,
    tOptDesc*   pOptDesc )
{
    (void)pOptions;
    USAGE( EXIT_SUCCESS );
}

#if ! defined(TEST_NTPQ_OPTS)

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   For the set-debug-level option.
 */
static void
doOptSet_Debug_Level(tOptions* pOptions, tOptDesc* pOptDesc)
{
    /* extracted from ../include/debug-opt.def, line 27 */
DESC(DEBUG_LEVEL).optOccCt = atoi( pOptDesc->pzLastArg );
}
#endif /* defined(TEST_NTPQ_OPTS) */
/* extracted from /usr/local/gnu/share/autogen/optmain.tpl near line 109 */

#if defined(TEST_NTPQ_OPTS) /* TEST MAIN PROCEDURE: */

extern void optionPutShell( tOptions* );

int
main(int argc, char** argv)
{
    int res = EXIT_SUCCESS;
    (void)optionProcess( &ntpqOptions, argc, argv );
    optionPutShell( &ntpqOptions );
    return res;
}
#endif  /* defined TEST_NTPQ_OPTS */
/* extracted from /usr/local/gnu/share/autogen/optcode.tpl near line 627 */

#if ENABLE_NLS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <autoopts/usage-txt.h>

static char* AO_gettext( char const* pz );
static void  coerce_it(void** s);

static char*
AO_gettext( char const* pz )
{
    char* pzRes;
    if (pz == NULL)
        return NULL;
    pzRes = _(pz);
    if (pzRes == pz)
        return pzRes;
    pzRes = strdup( pzRes );
    if (pzRes == NULL) {
        fputs( _("No memory for duping translated strings\n"), stderr );
        exit( EXIT_FAILURE );
    }
    return pzRes;
}

static void coerce_it(void** s) { *s = AO_gettext(*s); }
#define COERSION(_f) \
  coerce_it((void*)&(ntpqOptions._f))

/*
 *  This invokes the translation code (e.g. gettext(3)).
 */
static void
translate_option_strings( void )
{
    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_usage_text.field_ct != 0) {

        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        tOptDesc* pOD = ntpqOptions.pOptDesc;
        char**    ppz = (char**)(void*)&(option_usage_text);
        int       ix  = option_usage_text.field_ct;

        do {
            ppz++;
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);

        COERSION(pzCopyright);
        COERSION(pzCopyNotice);
        COERSION(pzFullVersion);
        COERSION(pzUsageTitle);
        COERSION(pzExplain);
        COERSION(pzDetail);
        option_usage_text.field_ct = 0;

        for (ix = ntpqOptions.optCt; ix > 0; ix--, pOD++)
            coerce_it((void*)&(pOD->pzText));
    }

    if ((ntpqOptions.fOptSet & OPTPROC_NXLAT_OPT_CFG) == 0) {
        tOptDesc* pOD = ntpqOptions.pOptDesc;
        int       ix;

        for (ix = ntpqOptions.optCt; ix > 0; ix--, pOD++) {
            coerce_it((void*)&(pOD->pz_Name));
            coerce_it((void*)&(pOD->pz_DisableName));
            coerce_it((void*)&(pOD->pz_DisablePfx));
        }
        /* prevent re-translation */
        ntpqOptions.fOptSet |= OPTPROC_NXLAT_OPT_CFG | OPTPROC_NXLAT_OPT;
    }
}

#endif /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
/* ntpq-opts.c ends here */
