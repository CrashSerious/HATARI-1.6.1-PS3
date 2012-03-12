/* CMake config.h for Hatari */

/* Define if you have a PNG compatible library */
/* #undef HAVE_LIBPNG */

/* Define if you have a readline compatible library */
/* #undef HAVE_LIBREADLINE */

/* Define if you have the PortAudio library */
/* #undef HAVE_PORTAUDIO */

/* Define if you have a X11 environment */
/* #undef HAVE_X11 */

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the <glob.h> header file. */
/* #undef HAVE_GLOB_H */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <SDL/SDL_config.h> header file. */
/* #undef HAVE_SDL_SDL_CONFIG_H */

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the `cfmakeraw' function. */
/* #undef HAVE_CFMAKERAW */

/* Define to 1 if you have the 'setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have unix domain sockets */
/* #undef HAVE_UNIX_DOMAIN_SOCKETS */

/* Define to 1 if you have the 'posix_memalign' function. */
/* #undef HAVE_POSIX_MEMALIGN */

/* Define to 1 if you have the 'memalign' function. */
#define HAVE_MEMALIGN 1

/* Define to 1 if you have the 'gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the 'nanosleep' function. */
/* #undef HAVE_NANOSLEEP */

/* Define to 1 if you have the 'alphasort' function. */
/* #undef HAVE_ALPHASORT */

/* Define to 1 if you have the 'scandir' function. */
/* #undef HAVE_SCANDIR */

/* Define to 1 if you have the 'statvfs' function. */
/* #undef HAVE_STATVFS */

//hack ps3
/* Relative path from bindir to datadir */
#define BIN2DATADIR "."

/* Define to 1 to enable DSP 56k emulation for Falcon mode */
#define ENABLE_DSP_EMU 1

/* Define to 1 to enable WINUAE cpu  */
/* #undef ENABLE_WINUAE_CPU */

/* Define to 1 to use less memory - at the expense of emulation speed */
/* #undef ENABLE_SMALL_MEM */

/* Define to 1 to enable trace logs - undefine to slightly increase speed */
/*#undef  ENABLE_TRACING */
//fin hack ps3
