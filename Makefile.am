## Process this file with automake to produce Makefile.in
include $(top_srcdir)/Makefile.decl

ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

SUBDIRS = po

if HAVE_LIBPROXY
SUBDIRS += proxy/libproxy
endif

if HAVE_GNOME_PROXY
SUBDIRS += proxy/gnome
endif

SUBDIRS += proxy/tests

if HAVE_GNUTLS
SUBDIRS += tls/gnutls
endif

SUBDIRS += tls/tests

install-exec-hook:
	if test -n "$(GIO_QUERYMODULES)" -a -z "$(DESTDIR)"; then \
		$(GIO_QUERYMODULES) $(GIO_MODULE_DIR) ;           \
	fi

uninstall-hook:
	if test -n "$(GIO_QUERYMODULES)" -a -z "$(DESTDIR)"; then \
		$(GIO_QUERYMODULES) $(GIO_MODULE_DIR) ;           \
	fi
