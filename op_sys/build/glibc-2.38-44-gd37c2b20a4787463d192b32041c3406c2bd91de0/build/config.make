# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.38
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /usr
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib64
bindir = ${exec_prefix}/bin
slibdir = /lib64
rtlddir = /lib
complocaledir = ${exec_prefix}/lib/locale
sysconfdir = /etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = /sbin
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = /var
localedir = ${datarootdir}/locale
multidir= .

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = no

# System configuration.
config-machine = aarch64
base-machine = aarch64
config-vendor = buildroot
config-os = linux-gnu
config-sysdirs =  sysdeps/unix/sysv/linux/aarch64 sysdeps/aarch64/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix sysdeps/posix sysdeps/aarch64/fpu sysdeps/aarch64/multiarch sysdeps/aarch64 sysdeps/wordsize-64 sysdeps/ieee754/ldbl-128 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-extra-cppflags = 
config-cflags-nofma = -ffp-contract=off

defines = 
sysheaders = /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include
sysincludes = -nostdinc -isystem /home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include -isystem /home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include-fixed -isystem /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include
c++-sysincludes = 
c++-cstdlib-header = 
c++-cmath-header = 
c++-bits-std_abs-h = 
all-warnings = 
enable-werror = no

have-z-execstack = yes
have-protected-data = yes
have-insert = yes
have-glob-dat-reloc = yes
with-fp = yes
enable-timezone-tools = yes
unwind-find-fde = no
have-fpie = yes
have-ssp = no
stack-protector = -fno-stack-protector
no-stack-protector = 
fortify-source = -Wp,-U_FORTIFY_SOURCE
no-fortify-source = -Wp,-U_FORTIFY_SOURCE
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
bind-now = no
have-cxx-thread_local = no
have-loop-to-function = yes
have-textrel_ifunc = yes

multi-arch = default

mach-interface-list = 

memory-tagging = no

nss-crypt = no
static-nss-crypt = no

# Configuration options.
build-shared = yes
build-profile = no
build-static-nss = no
cross-compiling = yes
force-install = yes
build-crypt = yes
build-nscd = yes
use-nscd = yes
build-hardcoded-path-in-tests= no
build-pt-chown = no
pthread-in-libc = yes

# Build tools.
CC = /home/erion/Projects/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc
CXX = 
BUILD_CC = gcc
CFLAGS = -O2 -fno-lto
CPPFLAGS-config = 
extra-nonshared-cflags = 
rtld-early-cflags = 
ASFLAGS-config =  -Wa,--noexecstack
AR = /home/erion/Projects/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc-ar
NM = /home/erion/Projects/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-gcc-nm
MAKEINFO = makeinfo
AS = $(CC) -c
BISON = bison
AUTOCONF = no
OBJDUMP = /home/erion/Projects/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-objdump
OBJCOPY = /home/erion/Projects/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-objcopy
GPROF = gprof
READELF = /home/erion/Projects/buildroot/output/host/bin/aarch64-buildroot-linux-gnu-readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
LN_S = ln -s
MSGFMT = msgfmt

# Script execution tools.
BASH = /bin/sh
AWK = gawk
PERL = /usr/bin/perl
PYTHON = python3 -B

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (Buildroot) 
PKGVERSION_TEXI = (Buildroot) 
REPORT_BUGS_TO = <https://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{https://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

with-lld = no
have-gnu-retain = yes
have-z-start-stop-gc = yes
have-depaudit = yes
have-dt-relr = no
have-no-dynamic-linker = yes
have-static-pie = yes
have-mtls-dialect-gnu2 = no
config-cflags-wno-ignored-attributes = 
config-cflags-signaling-nans = -fsignaling-nans
supported-fortify = 2
default-abi = lp64
aarch64-bti = no
aarch64-variant-pcs = yes
build-mathvec = yes
have-ifunc = yes
have-gcc-ifunc = yes
build-pic-default = yes
cc-pie-default = yes
build-pie-default = yes
enable-static-pie = yes
