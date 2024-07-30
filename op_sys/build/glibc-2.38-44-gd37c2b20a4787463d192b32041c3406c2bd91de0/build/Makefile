srcdir = /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0

# Uncomment the line below if you want to do parallel build.
# PARALLELMFLAGS = -j 4

.PHONY: all install bench

all .DEFAULT:
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" -C $(srcdir) objdir=`pwd` $@

install:
	LC_ALL=C; export LC_ALL; \
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" -C $(srcdir) objdir=`pwd` $@

bench bench-clean bench-build:
	$(MAKE) -C $(srcdir)/benchtests $(PARALLELMFLAGS) objdir=`pwd` $@

# Convenience target to rebuild ULPs for all math tests.
regen-ulps:
	$(MAKE) -C $(srcdir)/math $(PARALLELMFLAGS) objdir=`pwd` $@
