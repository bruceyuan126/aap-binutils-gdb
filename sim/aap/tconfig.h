/* AAP target configuration file.  -*- C -*- */

/* We properly handle LMA. -- TODO: check this */
#define SIM_HANDLES_LMA 1

/* For MSPR support  */
#define WITH_DEVICES 1

#if 0
/* Enable watchpoints.  */
#define WITH_WATCHPOINTS 1
#endif

/* ??? Temporary hack until model support unified.  */
#define SIM_HAVE_MODEL

/* Define this to enable the intrinsic breakpoint mechanism. */
/* FIXME: may be able to remove SIM_HAVE_BREAKPOINTS since it essentially
   duplicates ifdef SIM_BREAKPOINT (right?) */
#if 1
#define SIM_HAVE_BREAKPOINTS
#define SIM_BREAKPOINT { 0x10, 0xD }
#define SIM_BREAKPOINT_SIZE 2
#endif

/* This is a global setting.  Different cpu families can't mix-n-match -scache
   and -pbb.  However some cpu families may use -simple while others use
   one of -scache/-pbb. */
#define WITH_SCACHE_PBB 1
