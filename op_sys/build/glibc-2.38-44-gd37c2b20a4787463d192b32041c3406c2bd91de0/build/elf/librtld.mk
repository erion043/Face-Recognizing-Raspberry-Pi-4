rtld-csu +=check_fds.os
rtld-csu +=errno.os
rtld-csu +=check_fds.os
rtld-setjmp +=setjmp.os
rtld-setjmp +=__longjmp.os
rtld-nptl +=lowlevellock.os
rtld-malloc +=scratch_buffer_set_array_size.os
rtld-string +=memchr.os
rtld-string +=memcmp.os
rtld-string +=memcpy.os
rtld-string +=memmove.os
rtld-string +=memset.os
rtld-string +=stpcpy.os
rtld-string +=strchr.os
rtld-string +=strcmp.os
rtld-string +=strcspn.os
rtld-string +=strdup.os
rtld-string +=strerrorname_np.os
rtld-string +=strlen.os
rtld-string +=strncmp.os
rtld-string +=strnlen.os
rtld-string +=memchr_generic.os
rtld-string +=memchr.os
rtld-string +=memchr_nosimd.os
rtld-string +=memchr.os
rtld-string +=memcpy_a64fx.os
rtld-string +=memcpy.os
rtld-string +=memcpy_falkor.os
rtld-string +=memcpy.os
rtld-string +=memcpy_generic.os
rtld-csu +=check_fds.os
rtld-string +=memcpy_sve.os
rtld-string +=memcpy.os
rtld-string +=memcpy_thunderx.os
rtld-string +=memmove.os
rtld-string +=memcpy_thunderx2.os
rtld-string +=memmove.os
rtld-string +=memset_a64fx.os
rtld-string +=memset.os
rtld-string +=memset_emag.os
rtld-string +=memset.os
rtld-string +=memset_falkor.os
rtld-string +=memset.os
rtld-string +=memset_generic.os
rtld-csu +=check_fds.os
rtld-string +=memset_kunpeng.os
rtld-string +=memset.os
rtld-string +=strlen_asimd.os
rtld-string +=strlen.os
rtld-string +=strlen_mte.os
rtld-string +=strdup.os
rtld-dirent +=closedir.os
rtld-dirent +=rewinddir.os
rtld-dirent +=readdir64.os
rtld-dirent +=fdopendir.os
rtld-posix +=_exit.os
rtld-posix +=getpid.os
rtld-posix +=uname.os
rtld-posix +=environ.os
rtld-io +=access.os
rtld-io +=fstat64.os
rtld-io +=fstatat64.os
rtld-io +=lseek64.os
rtld-dirent +=rewinddir.os
rtld-io +=lstat64.os
rtld-io +=openat64.os
rtld-io +=stat64.os
rtld-io +=close_nocancel.os
rtld-io +=fcntl_nocancel.os
rtld-io +=open64_nocancel.os
rtld-io +=pread64_nocancel.os
rtld-io +=read_nocancel.os
rtld-io +=write_nocancel.os
rtld-misc +=mmap64.os
rtld-misc +=mprotect.os
rtld-misc +=munmap.os
rtld-misc +=single_threaded.os
rtld-io +=openat64.os
rtld-gmon +=profil.os
rtld-gmon +=prof-freq.os
rtld-gmon +=profil.os
rtld-elf +=dl-addr-obj.os
rtld-csu +=sysdep.os
rtld-posix +=uname.os
rtld-signal +=sigaction.os
rtld-gmon +=profil.os
rtld-signal +=libc_sigaction.os
rtld-signal +=sigaction.os
rtld-stdio-common +=errname.os
rtld-string +=strerrorname_np.os
rtld-string +=strchrnul.os
rtld-string +=strcspn.os
rtld-time +=setitimer.os
rtld-gmon +=profil.os
rtld-dirent +=getdents64.os
rtld-dirent +=readdir64.os
rtld-nptl +=lowlevellock.os
rtld-misc +=getauxval.os
rtld-subdirs = csu dirent elf gmon io malloc misc nptl posix setjmp signal stdio-common string time
