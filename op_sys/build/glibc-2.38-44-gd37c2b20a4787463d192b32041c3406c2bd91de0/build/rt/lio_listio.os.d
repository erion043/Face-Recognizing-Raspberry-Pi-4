$(common-objpfx)rt/lio_listio.os: \
 lio_listio.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../rt/lio_listio-common.c ../sysdeps/aarch64/bits/wordsize.h \
 ../include/aio.h ../rt/aio.h ../include/features.h \
 ../include/features-time64.h \
 ../sysdeps/unix/sysv/linux/features-time64.h ../bits/timesize.h \
 ../include/stdc-predef.h ../include/sys/cdefs.h ../misc/sys/cdefs.h \
 ../sysdeps/ieee754/ldbl-128/bits/long-double.h ../include/gnu/stubs.h \
 ../include/sys/types.h ../posix/sys/types.h ../include/bits/types.h \
 ../posix/bits/types.h ../sysdeps/unix/sysv/linux/bits/typesizes.h \
 ../bits/time64.h ../include/bits/types/clock_t.h \
 ../time/bits/types/clock_t.h ../include/bits/types/clockid_t.h \
 ../time/bits/types/clockid_t.h ../include/bits/types/time_t.h \
 ../time/bits/types/time_t.h ../include/bits/types/timer_t.h \
 ../time/bits/types/timer_t.h \
 /home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include/stddef.h \
 ../bits/stdint-intn.h ../include/endian.h ../string/endian.h \
 ../include/bits/endian.h ../string/bits/endian.h \
 ../sysdeps/aarch64/bits/endianness.h ../bits/byteswap.h \
 ../bits/uintn-identity.h ../include/sys/select.h ../misc/sys/select.h \
 ../bits/select.h ../include/bits/types/sigset_t.h \
 ../signal/bits/types/sigset_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h \
 ../include/bits/types/struct_timeval.h \
 ../time/bits/types/struct_timeval.h \
 ../include/bits/types/struct_timespec.h \
 ../time/bits/types/struct_timespec.h ../include/bits/select-decl.h \
 ../misc/bits/select-decl.h ../sysdeps/nptl/bits/pthreadtypes.h \
 ../sysdeps/nptl/bits/thread-shared-types.h \
 ../sysdeps/aarch64/nptl/bits/pthreadtypes-arch.h \
 ../include/bits/atomic_wide_counter.h ../bits/atomic_wide_counter.h \
 ../sysdeps/nptl/bits/struct_mutex.h \
 ../sysdeps/aarch64/nptl/bits/struct_rwlock.h \
 ../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h \
 ../include/bits/types/__sigval_t.h ../signal/bits/types/__sigval_t.h \
 ../sysdeps/unix/sysv/linux/bits/sigevent-consts.h ../include/assert.h \
 ../assert/assert.h ../include/errno.h ../stdlib/errno.h \
 ../sysdeps/unix/sysv/linux/bits/errno.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/errno.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/errno.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno-base.h \
 ../bits/types/error_t.h ../include/stdlib.h \
 /home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include/stdbool.h \
 ../sysdeps/ieee754/ldbl-128/bits/floatn.h ../bits/floatn-common.h \
 ../stdlib/stdlib.h ../bits/libc-header-start.h \
 ../sysdeps/unix/sysv/linux/bits/waitflags.h ../bits/waitstatus.h \
 ../include/bits/types/locale_t.h ../locale/bits/types/locale_t.h \
 ../include/bits/types/__locale_t.h ../locale/bits/types/__locale_t.h \
 ../include/alloca.h ../stdlib/alloca.h ../include/stackinfo.h \
 ../sysdeps/aarch64/stackinfo.h ../include/elf.h ../elf/elf.h \
 ../include/stdint.h ../stdlib/stdint.h ../bits/wchar.h \
 ../bits/stdint-uintn.h ../include/libc-pointer-arith.h \
 ../sysdeps/aarch64/dl-dtprocnum.h ../sysdeps/pthread/allocalim.h \
 ../include/limits.h \
 /home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include-fixed/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../sysdeps/unix/sysv/linux/bits/local_lim.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/limits.h \
 ../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h \
 ../sysdeps/unix/sysv/linux/aarch64/bits/pthread_stack_min.h \
 ../include/bits/posix2_lim.h ../posix/bits/posix2_lim.h \
 ../include/bits/xopen_lim.h ../sysdeps/unix/sysv/linux/bits/uio_lim.h \
 ../bits/stdlib-bsearch.h ../include/bits/stdlib-float.h \
 ../stdlib/bits/stdlib-float.h ../include/sys/stat.h ../io/sys/stat.h \
 ../sysdeps/unix/sysv/linux/bits/stat.h \
 ../sysdeps/unix/sysv/linux/bits/struct_stat.h ../include/bits/statx.h \
 ../io/bits/statx.h ../include/bits/statx-generic.h \
 ../io/bits/statx-generic.h \
 ../include/bits/types/struct_statx_timestamp.h \
 ../io/bits/types/struct_statx_timestamp.h \
 ../include/bits/types/struct_statx.h ../io/bits/types/struct_statx.h \
 ../sysdeps/unix/sysv/linux/xstatver.h ../include/struct___timespec64.h \
 ../sysdeps/unix/sysv/linux/struct_stat_time64.h ../include/rtld-malloc.h \
 ../include/unistd.h ../posix/unistd.h \
 ../sysdeps/unix/sysv/linux/bits/posix_opt.h ../bits/environments.h \
 ../bits/confname.h ../include/bits/getopt_posix.h \
 ../posix/bits/getopt_posix.h ../include/bits/getopt_core.h \
 ../posix/bits/getopt_core.h ../include/bits/unistd_ext.h \
 ../sysdeps/unix/sysv/linux/bits/unistd_ext.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/close_range.h \
 ../sysdeps/unix/sysv/linux/aarch64/kernel-features.h \
 ../sysdeps/unix/sysv/linux/kernel-features.h \
 ../include/bits/unistd-decl.h ../posix/bits/unistd-decl.h \
 ../sysdeps/nptl/pthreadP.h ../include/pthread.h \
 ../sysdeps/nptl/pthread.h ../include/sched.h ../posix/sched.h \
 ../sysdeps/unix/sysv/linux/bits/sched.h \
 ../bits/types/struct_sched_param.h ../include/bits/cpu-set.h \
 ../posix/bits/cpu-set.h ../include/time.h ../time/time.h \
 ../sysdeps/unix/sysv/linux/bits/time.h \
 ../sysdeps/unix/sysv/linux/bits/timex.h \
 ../include/bits/types/struct_tm.h ../time/bits/types/struct_tm.h \
 ../include/bits/types/struct_itimerspec.h \
 ../time/bits/types/struct_itimerspec.h ../include/struct___timeval64.h \
 ../time/mktime-internal.h ../include/sys/time.h ../time/sys/time.h \
 ../sysdeps/unix/sysv/linux/time-clockid.h \
 ../sysdeps/aarch64/bits/setjmp.h \
 ../include/bits/types/struct___jmp_buf_tag.h \
 ../setjmp/bits/types/struct___jmp_buf_tag.h ../include/setjmp.h \
 ../setjmp/setjmp.h ../sysdeps/unix/sysv/linux/include/sys/syscall.h \
 ../sysdeps/unix/sysv/linux/aarch64/arch-syscall.h ../nptl/descr.h \
 ../sysdeps/aarch64/hp-timing.h ../sysdeps/generic/hp-timing-common.h \
 ../include/string.h ../include/locale.h ../locale/locale.h \
 ../include/bits/locale.h ../locale/bits/locale.h ../string/string.h \
 ../include/strings.h ../string/strings.h ../include/sys/param.h \
 ../misc/sys/param.h ../include/signal.h ../signal/signal.h \
 ../bits/signum-generic.h ../sysdeps/unix/sysv/linux/bits/signum-arch.h \
 ../include/bits/types/sig_atomic_t.h ../signal/bits/types/sig_atomic_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-arch.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-consts.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h \
 ../include/bits/types/sigval_t.h ../signal/bits/types/sigval_t.h \
 ../sysdeps/unix/sysv/linux/bits/sigaction.h \
 ../sysdeps/unix/sysv/linux/bits/sigcontext.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/sigcontext.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/types.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/types.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/types.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/int-ll64.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/bitsperlong.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/bitsperlong.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/posix_types.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/stddef.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/posix_types.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/posix_types.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/sve_context.h \
 ../sysdeps/unix/sysv/linux/bits/types/stack_t.h \
 ../sysdeps/unix/sysv/linux/aarch64/sys/ucontext.h \
 ../sysdeps/unix/sysv/linux/sys/procfs.h \
 ../sysdeps/unix/sysv/linux/aarch64/sys/user.h \
 ../sysdeps/unix/sysv/linux/aarch64/bits/procfs.h \
 ../sysdeps/unix/sysv/linux/bits/procfs-id.h \
 ../sysdeps/unix/sysv/linux/bits/procfs-prregset.h \
 ../sysdeps/unix/sysv/linux/bits/procfs-extra.h \
 ../include/bits/sigstack.h \
 ../sysdeps/unix/sysv/linux/aarch64/bits/sigstack.h \
 ../include/bits/sigstksz.h ../sysdeps/unix/sysv/linux/bits/ss_flags.h \
 ../include/bits/types/struct_sigstack.h \
 ../signal/bits/types/struct_sigstack.h \
 ../sysdeps/pthread/bits/sigthread.h \
 ../sysdeps/unix/sysv/linux/bits/signal_ext.h \
 ../sysdeps/unix/sysv/linux/sigsetops.h \
 ../sysdeps/unix/sysv/linux/bits/param.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/param.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/param.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/param.h \
 ../sysdeps/generic/_itoa.h ../include/libc-symbols.h ../include/list_t.h \
 ../sysdeps/nptl/lowlevellock.h ../include/atomic.h \
 ../sysdeps/aarch64/atomic-machine.h ../sysdeps/pthread/elision-conf.h \
 ../sysdeps/nptl/lowlevellock-futex.h \
 ../sysdeps/unix/sysv/linux/aarch64/sysdep.h ../sysdeps/unix/sysdep.h \
 ../sysdeps/generic/sysdep.h ../sysdeps/generic/dwarf2.h \
 ../sysdeps/unix/sysv/linux/aarch64/single-thread.h \
 ../sysdeps/unix/sysv/linux/single-thread.h \
 ../include/sys/single_threaded.h ../misc/sys/single_threaded.h \
 ../sysdeps/aarch64/sysdep.h ../sysdeps/unix/sysv/linux/sysdep.h \
 ../sysdeps/unix/sysv/linux/dl-sysdep.h ../sysdeps/generic/dl-sysdep.h \
 ../sysdeps/aarch64/nptl/tls.h ../sysdeps/generic/dl-dtv.h \
 ../sysdeps/nptl/tcb-access.h ../sysdeps/unix/sysv/linux/sysdep-cancel.h \
 ../sysdeps/aarch64/nptl/pthreaddef.h ../sysdeps/nptl/thread_db.h \
 ../sysdeps/generic/unwind.h ../include/bits/types/res_state.h \
 ../resolv/bits/types/res_state.h ../include/netinet/in.h \
 ../inet/netinet/in.h ../include/sys/socket.h ../socket/sys/socket.h \
 ../include/bits/types/struct_iovec.h ../misc/bits/types/struct_iovec.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h \
 ../sysdeps/unix/sysv/linux/bits/socket_type.h ../bits/sockaddr.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/socket.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/socket.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/sockios.h \
 /home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/sockios.h \
 ../include/bits/types/struct_osockaddr.h \
 ../socket/bits/types/struct_osockaddr.h \
 ../sysdeps/unix/sysv/linux/bits/in.h \
 ../sysdeps/generic/tls-internal-struct.h \
 ../sysdeps/unix/sysv/linux/internal-sigset.h \
 ../sysdeps/nptl/internaltypes.h \
 ../sysdeps/unix/sysv/linux/internal-signals.h \
 ../sysdeps/nptl/pthread_mutex_backoff.h \
 ../sysdeps/nptl/pthread_mutex_conf.h \
 ../sysdeps/generic/adaptive_spin_count.h \
 ../sysdeps/unix/sysv/linux/aio_misc.h ../sysdeps/nptl/aio_misc.h \
 ../sysdeps/nptl/futex-internal.h ../include/stdio.h ../libio/stdio.h \
 /home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include/stdarg.h \
 ../include/bits/types/__fpos_t.h ../libio/bits/types/__fpos_t.h \
 ../include/bits/types/__mbstate_t.h ../wcsmbs/bits/types/__mbstate_t.h \
 ../include/bits/types/__fpos64_t.h ../libio/bits/types/__fpos64_t.h \
 ../include/bits/types/__FILE.h ../libio/bits/types/__FILE.h \
 ../include/bits/types/FILE.h ../libio/bits/types/FILE.h \
 ../include/bits/types/struct_FILE.h ../libio/bits/types/struct_FILE.h \
 ../include/bits/types/cookie_io_functions_t.h \
 ../libio/bits/types/cookie_io_functions_t.h \
 ../sysdeps/unix/sysv/linux/bits/stdio_lim.h ../include/bits/stdio.h \
 ../libio/bits/stdio.h ../libio/libio.h ../include/bits/types/wint_t.h \
 ../wcsmbs/bits/types/wint_t.h ../include/gconv.h ../iconv/gconv.h \
 ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h \
 ../include/libc-diag.h ../sysdeps/generic/aio_misc.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../rt/lio_listio-common.c:
../sysdeps/aarch64/bits/wordsize.h:
../include/aio.h:
../rt/aio.h:
../include/features.h:
../include/features-time64.h:
../sysdeps/unix/sysv/linux/features-time64.h:
../bits/timesize.h:
../include/stdc-predef.h:
../include/sys/cdefs.h:
../misc/sys/cdefs.h:
../sysdeps/ieee754/ldbl-128/bits/long-double.h:
../include/gnu/stubs.h:
../include/sys/types.h:
../posix/sys/types.h:
../include/bits/types.h:
../posix/bits/types.h:
../sysdeps/unix/sysv/linux/bits/typesizes.h:
../bits/time64.h:
../include/bits/types/clock_t.h:
../time/bits/types/clock_t.h:
../include/bits/types/clockid_t.h:
../time/bits/types/clockid_t.h:
../include/bits/types/time_t.h:
../time/bits/types/time_t.h:
../include/bits/types/timer_t.h:
../time/bits/types/timer_t.h:
/home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include/stddef.h:
../bits/stdint-intn.h:
../include/endian.h:
../string/endian.h:
../include/bits/endian.h:
../string/bits/endian.h:
../sysdeps/aarch64/bits/endianness.h:
../bits/byteswap.h:
../bits/uintn-identity.h:
../include/sys/select.h:
../misc/sys/select.h:
../bits/select.h:
../include/bits/types/sigset_t.h:
../signal/bits/types/sigset_t.h:
../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h:
../include/bits/types/struct_timeval.h:
../time/bits/types/struct_timeval.h:
../include/bits/types/struct_timespec.h:
../time/bits/types/struct_timespec.h:
../include/bits/select-decl.h:
../misc/bits/select-decl.h:
../sysdeps/nptl/bits/pthreadtypes.h:
../sysdeps/nptl/bits/thread-shared-types.h:
../sysdeps/aarch64/nptl/bits/pthreadtypes-arch.h:
../include/bits/atomic_wide_counter.h:
../bits/atomic_wide_counter.h:
../sysdeps/nptl/bits/struct_mutex.h:
../sysdeps/aarch64/nptl/bits/struct_rwlock.h:
../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h:
../include/bits/types/__sigval_t.h:
../signal/bits/types/__sigval_t.h:
../sysdeps/unix/sysv/linux/bits/sigevent-consts.h:
../include/assert.h:
../assert/assert.h:
../include/errno.h:
../stdlib/errno.h:
../sysdeps/unix/sysv/linux/bits/errno.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/errno.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/errno.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/errno-base.h:
../bits/types/error_t.h:
../include/stdlib.h:
/home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include/stdbool.h:
../sysdeps/ieee754/ldbl-128/bits/floatn.h:
../bits/floatn-common.h:
../stdlib/stdlib.h:
../bits/libc-header-start.h:
../sysdeps/unix/sysv/linux/bits/waitflags.h:
../bits/waitstatus.h:
../include/bits/types/locale_t.h:
../locale/bits/types/locale_t.h:
../include/bits/types/__locale_t.h:
../locale/bits/types/__locale_t.h:
../include/alloca.h:
../stdlib/alloca.h:
../include/stackinfo.h:
../sysdeps/aarch64/stackinfo.h:
../include/elf.h:
../elf/elf.h:
../include/stdint.h:
../stdlib/stdint.h:
../bits/wchar.h:
../bits/stdint-uintn.h:
../include/libc-pointer-arith.h:
../sysdeps/aarch64/dl-dtprocnum.h:
../sysdeps/pthread/allocalim.h:
../include/limits.h:
/home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include-fixed/limits.h:
../include/bits/posix1_lim.h:
../posix/bits/posix1_lim.h:
../sysdeps/unix/sysv/linux/bits/local_lim.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/limits.h:
../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h:
../sysdeps/unix/sysv/linux/aarch64/bits/pthread_stack_min.h:
../include/bits/posix2_lim.h:
../posix/bits/posix2_lim.h:
../include/bits/xopen_lim.h:
../sysdeps/unix/sysv/linux/bits/uio_lim.h:
../bits/stdlib-bsearch.h:
../include/bits/stdlib-float.h:
../stdlib/bits/stdlib-float.h:
../include/sys/stat.h:
../io/sys/stat.h:
../sysdeps/unix/sysv/linux/bits/stat.h:
../sysdeps/unix/sysv/linux/bits/struct_stat.h:
../include/bits/statx.h:
../io/bits/statx.h:
../include/bits/statx-generic.h:
../io/bits/statx-generic.h:
../include/bits/types/struct_statx_timestamp.h:
../io/bits/types/struct_statx_timestamp.h:
../include/bits/types/struct_statx.h:
../io/bits/types/struct_statx.h:
../sysdeps/unix/sysv/linux/xstatver.h:
../include/struct___timespec64.h:
../sysdeps/unix/sysv/linux/struct_stat_time64.h:
../include/rtld-malloc.h:
../include/unistd.h:
../posix/unistd.h:
../sysdeps/unix/sysv/linux/bits/posix_opt.h:
../bits/environments.h:
../bits/confname.h:
../include/bits/getopt_posix.h:
../posix/bits/getopt_posix.h:
../include/bits/getopt_core.h:
../posix/bits/getopt_core.h:
../include/bits/unistd_ext.h:
../sysdeps/unix/sysv/linux/bits/unistd_ext.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/close_range.h:
../sysdeps/unix/sysv/linux/aarch64/kernel-features.h:
../sysdeps/unix/sysv/linux/kernel-features.h:
../include/bits/unistd-decl.h:
../posix/bits/unistd-decl.h:
../sysdeps/nptl/pthreadP.h:
../include/pthread.h:
../sysdeps/nptl/pthread.h:
../include/sched.h:
../posix/sched.h:
../sysdeps/unix/sysv/linux/bits/sched.h:
../bits/types/struct_sched_param.h:
../include/bits/cpu-set.h:
../posix/bits/cpu-set.h:
../include/time.h:
../time/time.h:
../sysdeps/unix/sysv/linux/bits/time.h:
../sysdeps/unix/sysv/linux/bits/timex.h:
../include/bits/types/struct_tm.h:
../time/bits/types/struct_tm.h:
../include/bits/types/struct_itimerspec.h:
../time/bits/types/struct_itimerspec.h:
../include/struct___timeval64.h:
../time/mktime-internal.h:
../include/sys/time.h:
../time/sys/time.h:
../sysdeps/unix/sysv/linux/time-clockid.h:
../sysdeps/aarch64/bits/setjmp.h:
../include/bits/types/struct___jmp_buf_tag.h:
../setjmp/bits/types/struct___jmp_buf_tag.h:
../include/setjmp.h:
../setjmp/setjmp.h:
../sysdeps/unix/sysv/linux/include/sys/syscall.h:
../sysdeps/unix/sysv/linux/aarch64/arch-syscall.h:
../nptl/descr.h:
../sysdeps/aarch64/hp-timing.h:
../sysdeps/generic/hp-timing-common.h:
../include/string.h:
../include/locale.h:
../locale/locale.h:
../include/bits/locale.h:
../locale/bits/locale.h:
../string/string.h:
../include/strings.h:
../string/strings.h:
../include/sys/param.h:
../misc/sys/param.h:
../include/signal.h:
../signal/signal.h:
../bits/signum-generic.h:
../sysdeps/unix/sysv/linux/bits/signum-arch.h:
../include/bits/types/sig_atomic_t.h:
../signal/bits/types/sig_atomic_t.h:
../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h:
../sysdeps/unix/sysv/linux/bits/siginfo-arch.h:
../sysdeps/unix/sysv/linux/bits/siginfo-consts.h:
../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h:
../include/bits/types/sigval_t.h:
../signal/bits/types/sigval_t.h:
../sysdeps/unix/sysv/linux/bits/sigaction.h:
../sysdeps/unix/sysv/linux/bits/sigcontext.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/sigcontext.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/types.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/types.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/types.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/int-ll64.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/bitsperlong.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/bitsperlong.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/posix_types.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/stddef.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/posix_types.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/posix_types.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/sve_context.h:
../sysdeps/unix/sysv/linux/bits/types/stack_t.h:
../sysdeps/unix/sysv/linux/aarch64/sys/ucontext.h:
../sysdeps/unix/sysv/linux/sys/procfs.h:
../sysdeps/unix/sysv/linux/aarch64/sys/user.h:
../sysdeps/unix/sysv/linux/aarch64/bits/procfs.h:
../sysdeps/unix/sysv/linux/bits/procfs-id.h:
../sysdeps/unix/sysv/linux/bits/procfs-prregset.h:
../sysdeps/unix/sysv/linux/bits/procfs-extra.h:
../include/bits/sigstack.h:
../sysdeps/unix/sysv/linux/aarch64/bits/sigstack.h:
../include/bits/sigstksz.h:
../sysdeps/unix/sysv/linux/bits/ss_flags.h:
../include/bits/types/struct_sigstack.h:
../signal/bits/types/struct_sigstack.h:
../sysdeps/pthread/bits/sigthread.h:
../sysdeps/unix/sysv/linux/bits/signal_ext.h:
../sysdeps/unix/sysv/linux/sigsetops.h:
../sysdeps/unix/sysv/linux/bits/param.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/linux/param.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/param.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/param.h:
../sysdeps/generic/_itoa.h:
../include/libc-symbols.h:
../include/list_t.h:
../sysdeps/nptl/lowlevellock.h:
../include/atomic.h:
../sysdeps/aarch64/atomic-machine.h:
../sysdeps/pthread/elision-conf.h:
../sysdeps/nptl/lowlevellock-futex.h:
../sysdeps/unix/sysv/linux/aarch64/sysdep.h:
../sysdeps/unix/sysdep.h:
../sysdeps/generic/sysdep.h:
../sysdeps/generic/dwarf2.h:
../sysdeps/unix/sysv/linux/aarch64/single-thread.h:
../sysdeps/unix/sysv/linux/single-thread.h:
../include/sys/single_threaded.h:
../misc/sys/single_threaded.h:
../sysdeps/aarch64/sysdep.h:
../sysdeps/unix/sysv/linux/sysdep.h:
../sysdeps/unix/sysv/linux/dl-sysdep.h:
../sysdeps/generic/dl-sysdep.h:
../sysdeps/aarch64/nptl/tls.h:
../sysdeps/generic/dl-dtv.h:
../sysdeps/nptl/tcb-access.h:
../sysdeps/unix/sysv/linux/sysdep-cancel.h:
../sysdeps/aarch64/nptl/pthreaddef.h:
../sysdeps/nptl/thread_db.h:
../sysdeps/generic/unwind.h:
../include/bits/types/res_state.h:
../resolv/bits/types/res_state.h:
../include/netinet/in.h:
../inet/netinet/in.h:
../include/sys/socket.h:
../socket/sys/socket.h:
../include/bits/types/struct_iovec.h:
../misc/bits/types/struct_iovec.h:
../sysdeps/unix/sysv/linux/bits/socket.h:
../sysdeps/unix/sysv/linux/bits/socket_type.h:
../bits/sockaddr.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/socket.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/socket.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm/sockios.h:
/home/erion/Projects/buildroot/output/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/asm-generic/sockios.h:
../include/bits/types/struct_osockaddr.h:
../socket/bits/types/struct_osockaddr.h:
../sysdeps/unix/sysv/linux/bits/in.h:
../sysdeps/generic/tls-internal-struct.h:
../sysdeps/unix/sysv/linux/internal-sigset.h:
../sysdeps/nptl/internaltypes.h:
../sysdeps/unix/sysv/linux/internal-signals.h:
../sysdeps/nptl/pthread_mutex_backoff.h:
../sysdeps/nptl/pthread_mutex_conf.h:
../sysdeps/generic/adaptive_spin_count.h:
../sysdeps/unix/sysv/linux/aio_misc.h:
../sysdeps/nptl/aio_misc.h:
../sysdeps/nptl/futex-internal.h:
../include/stdio.h:
../libio/stdio.h:
/home/erion/Projects/buildroot/output/host/lib/gcc/aarch64-buildroot-linux-gnu/12.3.0/include/stdarg.h:
../include/bits/types/__fpos_t.h:
../libio/bits/types/__fpos_t.h:
../include/bits/types/__mbstate_t.h:
../wcsmbs/bits/types/__mbstate_t.h:
../include/bits/types/__fpos64_t.h:
../libio/bits/types/__fpos64_t.h:
../include/bits/types/__FILE.h:
../libio/bits/types/__FILE.h:
../include/bits/types/FILE.h:
../libio/bits/types/FILE.h:
../include/bits/types/struct_FILE.h:
../libio/bits/types/struct_FILE.h:
../include/bits/types/cookie_io_functions_t.h:
../libio/bits/types/cookie_io_functions_t.h:
../sysdeps/unix/sysv/linux/bits/stdio_lim.h:
../include/bits/stdio.h:
../libio/bits/stdio.h:
../libio/libio.h:
../include/bits/types/wint_t.h:
../wcsmbs/bits/types/wint_t.h:
../include/gconv.h:
../iconv/gconv.h:
../include/shlib-compat.h:
$(common-objpfx)abi-versions.h:
../include/libc-diag.h:
../sysdeps/generic/aio_misc.h:
