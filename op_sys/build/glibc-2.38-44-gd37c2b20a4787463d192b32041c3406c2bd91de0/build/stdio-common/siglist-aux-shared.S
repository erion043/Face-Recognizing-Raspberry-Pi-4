	.arch armv8-a+crc
	.file	"siglist-gen.c"
	.text
#APP
	memmove = __GI_memmove
	memset = __GI_memset
	memcpy = __GI_memcpy
#NO_APP
	.hidden	__sys_sigabbrev
	.global	__sys_sigabbrev
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align	3
.LC0:
	.string	"HUP"
	.align	3
.LC1:
	.string	"INT"
	.align	3
.LC2:
	.string	"QUIT"
	.align	3
.LC3:
	.string	"ILL"
	.align	3
.LC4:
	.string	"TRAP"
	.align	3
.LC5:
	.string	"ABRT"
	.align	3
.LC6:
	.string	"BUS"
	.align	3
.LC7:
	.string	"FPE"
	.align	3
.LC8:
	.string	"KILL"
	.align	3
.LC9:
	.string	"USR1"
	.align	3
.LC10:
	.string	"SEGV"
	.align	3
.LC11:
	.string	"USR2"
	.align	3
.LC12:
	.string	"PIPE"
	.align	3
.LC13:
	.string	"ALRM"
	.align	3
.LC14:
	.string	"TERM"
	.align	3
.LC15:
	.string	"STKFLT"
	.align	3
.LC16:
	.string	"CHLD"
	.align	3
.LC17:
	.string	"CONT"
	.align	3
.LC18:
	.string	"STOP"
	.align	3
.LC19:
	.string	"TSTP"
	.align	3
.LC20:
	.string	"TTIN"
	.align	3
.LC21:
	.string	"TTOU"
	.align	3
.LC22:
	.string	"URG"
	.align	3
.LC23:
	.string	"XCPU"
	.align	3
.LC24:
	.string	"XFSZ"
	.align	3
.LC25:
	.string	"VTALRM"
	.align	3
.LC26:
	.string	"PROF"
	.align	3
.LC27:
	.string	"WINCH"
	.align	3
.LC28:
	.string	"POLL"
	.align	3
.LC29:
	.string	"PWR"
	.align	3
.LC30:
	.string	"SYS"
	.hidden	__sys_siglist
	.global	__sys_siglist
	.align	3
.LC31:
	.string	"Hangup"
	.align	3
.LC32:
	.string	"Interrupt"
	.align	3
.LC33:
	.string	"Quit"
	.align	3
.LC34:
	.string	"Illegal instruction"
	.align	3
.LC35:
	.string	"Trace/breakpoint trap"
	.align	3
.LC36:
	.string	"Aborted"
	.align	3
.LC37:
	.string	"Bus error"
	.align	3
.LC38:
	.string	"Floating point exception"
	.align	3
.LC39:
	.string	"Killed"
	.align	3
.LC40:
	.string	"User defined signal 1"
	.align	3
.LC41:
	.string	"Segmentation fault"
	.align	3
.LC42:
	.string	"User defined signal 2"
	.align	3
.LC43:
	.string	"Broken pipe"
	.align	3
.LC44:
	.string	"Alarm clock"
	.align	3
.LC45:
	.string	"Terminated"
	.align	3
.LC46:
	.string	"Stack fault"
	.align	3
.LC47:
	.string	"Child exited"
	.align	3
.LC48:
	.string	"Continued"
	.align	3
.LC49:
	.string	"Stopped (signal)"
	.align	3
.LC50:
	.string	"Stopped"
	.align	3
.LC51:
	.string	"Stopped (tty input)"
	.align	3
.LC52:
	.string	"Stopped (tty output)"
	.align	3
.LC53:
	.string	"Urgent I/O condition"
	.align	3
.LC54:
	.string	"CPU time limit exceeded"
	.align	3
.LC55:
	.string	"File size limit exceeded"
	.align	3
.LC56:
	.string	"Virtual timer expired"
	.align	3
.LC57:
	.string	"Profiling timer expired"
	.align	3
.LC58:
	.string	"Window changed"
	.align	3
.LC59:
	.string	"I/O possible"
	.align	3
.LC60:
	.string	"Power failure"
	.align	3
.LC61:
	.string	"Bad system call"
	.section	.data.rel.ro.local,"aw"
	.align	4
	.type	__sys_sigabbrev, %object
	.size	__sys_sigabbrev, 520
__sys_sigabbrev:
	.zero	8
	.xword	.LC0
	.xword	.LC1
	.xword	.LC2
	.xword	.LC3
	.xword	.LC4
	.xword	.LC5
	.xword	.LC6
	.xword	.LC7
	.xword	.LC8
	.xword	.LC9
	.xword	.LC10
	.xword	.LC11
	.xword	.LC12
	.xword	.LC13
	.xword	.LC14
	.xword	.LC15
	.xword	.LC16
	.xword	.LC17
	.xword	.LC18
	.xword	.LC19
	.xword	.LC20
	.xword	.LC21
	.xword	.LC22
	.xword	.LC23
	.xword	.LC24
	.xword	.LC25
	.xword	.LC26
	.xword	.LC27
	.xword	.LC28
	.xword	.LC29
	.xword	.LC30
	.zero	264
	.zero	8
	.type	__sys_siglist, %object
	.size	__sys_siglist, 520
__sys_siglist:
	.zero	8
	.xword	.LC31
	.xword	.LC32
	.xword	.LC33
	.xword	.LC34
	.xword	.LC35
	.xword	.LC36
	.xword	.LC37
	.xword	.LC38
	.xword	.LC39
	.xword	.LC40
	.xword	.LC41
	.xword	.LC42
	.xword	.LC43
	.xword	.LC44
	.xword	.LC45
	.xword	.LC46
	.xword	.LC47
	.xword	.LC48
	.xword	.LC49
	.xword	.LC50
	.xword	.LC51
	.xword	.LC52
	.xword	.LC53
	.xword	.LC54
	.xword	.LC55
	.xword	.LC56
	.xword	.LC57
	.xword	.LC58
	.xword	.LC59
	.xword	.LC60
	.xword	.LC61
	.zero	264
	.ident	"GCC: (Buildroot 2024.02.2) 12.3.0"
	.section	.note.GNU-stack,"",@progbits
