AC_PREREQ([2.61])
AC_INIT([fw], [0.1], [raphexion@gmail.com])

AM_INIT_AUTOMAKE([foreign subdir-objects -Wall no-dist-gzip dist-bzip2])
AM_SILENT_RULES([yes])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src])

m4_ifdef([AM_PROG_AR], [AM_PROG_AR])

AC_PROG_CC
AC_PROG_INSTALL

AC_CONFIG_FILES([Makefile
		 src/Makefile
		 test/Makefile])

LT_PREREQ([2.2])
LT_INIT

AC_OUTPUT
