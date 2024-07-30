#!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
cat << EOF
Usage: $0 [OPTIONS] <program> [ARGUMENTS...]

  --tool=TOOL  Run with the specified TOOL. It can be strace, rpctrace,
               valgrind or container. The container will run within
               support/test-container.  For strace and valgrind,
               additional arguments can be passed after the tool name.
EOF

  exit 1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux-aarch64.so.1 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace*)
    exec $toolname  -EGCONV_PATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/iconvdata  -ELOCPATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/localedata  -ELC_ALL=C  /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf/ld-linux-aarch64.so.1 --library-path /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/math:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/dlfcn:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nss:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nis:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/rt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/resolv:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/mathvec:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/support:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/crypt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nptl ${1+"$@"}
    ;;
  rpctrace)
    exec rpctrace  -EGCONV_PATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/iconvdata  -ELOCPATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/localedata  -ELC_ALL=C  /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf/ld-linux-aarch64.so.1 --library-path /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/math:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/dlfcn:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nss:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nis:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/rt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/resolv:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/mathvec:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/support:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/crypt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nptl ${1+"$@"}
    ;;
  valgrind*)
    exec env GCONV_PATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/iconvdata LOCPATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/localedata LC_ALL=C $toolname  /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf/ld-linux-aarch64.so.1 --library-path /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/math:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/dlfcn:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nss:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nis:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/rt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/resolv:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/mathvec:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/support:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/crypt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nptl ${1+"$@"}
    ;;
  container)
    exec env GCONV_PATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/iconvdata LOCPATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/localedata LC_ALL=C  /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf/ld-linux-aarch64.so.1 --library-path /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/math:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/dlfcn:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nss:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nis:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/rt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/resolv:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/mathvec:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/support:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/crypt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nptl /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/support/test-container env GCONV_PATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/iconvdata LOCPATH=/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/localedata LC_ALL=C  /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf/ld-linux-aarch64.so.1 --library-path /home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/math:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/elf:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/dlfcn:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nss:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nis:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/rt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/resolv:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/mathvec:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/support:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/crypt:/home/erion/Projects/buildroot/output/build/glibc-2.38-44-gd37c2b20a4787463d192b32041c3406c2bd91de0/build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
