ELF          �                    h          @     @   �{��� ��S�� �  @�� �  ��[�  �� �� �  �  _ ����B  �  �R   �a@�� �!@�   �`�@�@ �B ����  �R   �`@��A�����" ����  �R   �a@�� �!@�   �`�@� ����[B��SA��{è�_� � � ��{��� �� �� �� ���   �   ���   �   ���   �   �  �R   �   ���   �   ���� � � ��{��   �   �� �   �  �R   � ��{��� �� �   �   ��[������S�  ��c�   ��@�� �   �   �   �   � @� �`�A� �? �H  T����   �  @� �? �H  T����`B� �? �H  T����  �   �!  �   �   ��@� �? �H  T������@�  �� �  �� �3 �R����  B ����  �R �R   ��D�  �R   �   �   �   ���   � r�  T3��4��   ����   �  �!  �  � �  �� ���� *     �_  q   �  �B  �  �!  �! ��   ��~S �R��   � r@ TS 5B ����  �R   ��D�  �R   ��D���@�   � ��7 5   �   �   ������   ����   �   �   ����s  5  �R   �   �   �   ����   �  @� �? ����T�����Y�[�   ����    .                (%s)
  %s: unrecognized option '%s'
   %s: missing program name
       Try '%s --help' for more information.
  ld.so (Buildroot) stable release version 2.38.
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.
There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.
 searched        masked  Usage: %s [OPTION]... EXECUTABLE-FILE [ARGS-FOR-PROGRAM...]
You have invoked 'ld.so', the program interpreter for dynamically-linked
ELF programs.  Usually, the program interpreter is invoked automatically
when a dynamically-linked executable is started.

You may invoke the program interpreter program directly from the command
line to load and run an ELF executable file; this is like executing that
file itself, but always uses the program interpreter you invoked,
instead of the program interpreter specified in the executable file you
run.  Invoking the program interpreter directly provides access to
additional diagnostics, and changing the dynamic linker behavior without
setting environment variables (which would be inherited by subprocesses).

  --list                list all dependencies and how they are resolved
  --verify              verify that given object really is a dynamically linked
                        object we can handle
  --inhibit-cache       Do not use /etc/ld.so.cache
  --library-path PATH   use given PATH instead of content of the environment
                        variable LD_LIBRARY_PATH
  --glibc-hwcaps-prepend LIST
                        search glibc-hwcaps subdirectories in LIST
  --glibc-hwcaps-mask LIST
                        only search built-in subdirectories if in LIST
  --inhibit-rpath LIST  ignore RUNPATH and RPATH information in object names
                        in LIST
  --audit LIST          use objects named in LIST as auditors
  --preload LIST        preload objects named in LIST
  --argv0 STRING        set argv[0] to STRING before running
  --list-tunables       list all tunables with minimum and maximum values
  --list-diagnostics    list diagnostics information
  --help                display this help and exit
  --version             output version information and exit

This program interpreter self-identifies as: /lib/ld-linux-aarch64.so.1
      
Shared library search path:
   /etc/ld.so.cache          (libraries located via %s)
   
Subdirectories of glibc-hwcaps directories, in priority order:
         (searched)
     (supported, %s)
        (masked)
      
       
No subdirectories of glibc-hwcaps directories are searched.
  GCC: (Buildroot 2024.02.2) 12.3.0               zR x (          �    A0��B��E��b��B����    D       T    A ��B�    `           A��(   x       4   AP�
�	E��C��B��                                 ��                                                                                                                                                                 �                                                                                              6                     @                     K    �       T       U                     f                      q                  }    @      4      �                     �                     �                     �                     �                     �                     �                                          dl-usage.c $d $x print_search_path_for_help_1.part.0 _dl_write _dl_printf _dl_usage _dl_error_printf __GI__exit _dl_version _dl_help __rtld_search_dirs _rtld_local __rtld_env_path_list _dl_hwcaps_split _dl_hwcaps_subdirs_active _dl_hwcaps_subdirs _dl_hwcaps_contains _dl_init_paths                                              $                    (                   ,                   D                    L                   T                    l                    �                    �                   �                    �                   �                   �                    �            X       �            X       �                    �                                8                  8                          $           �       (           �       0                   8                   L           �      P           �      d                   l                   p                   x           	      |           	      �                   �                   �                   �                   �                   �           8	      �           P	      �           8	      �           P	      �                   �                   �           p	                  p	                                          ,                   8                   <           �	      @           �	      D                   L                   `                   h                   l                   p                   t           p	      x           p	      |                  �                  �           �	      �           �	      �           x      �           x      �           �      �           �      �                   �                   �                   �                   �                              �	                 �	                                                        �	      $           �	      (                   8                   <           �	      @           �	      D                   L                   P                   l                                       H            �       d                   |            @       .symtab .strtab .shstrtab .rela.text .data .bss .rodata.str1.8 .comment .note.GNU-stack .rela.eh_frame                                                                                       @       t                                   @               x      (      
                    &                     �                                     ,                     �                                     1      2               �      6
                            @      0               �      #                             I                                                           ^                           �                              Y      @               �      `       
                                          �      �                          	                      X                                                                h                              