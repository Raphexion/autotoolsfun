AM_LDFLAGS = -L$(top_srcdir)/src/.libs

bin_PROGRAMS = foobar

foobar_SOURCES = \
	fw/foobar.c

foobar_LDADD = -lfw

foobar_CFLAGS = -I $(top_srcdir)/src

TESTS = foobar
