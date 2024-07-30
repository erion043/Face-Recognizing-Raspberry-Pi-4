/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#define IN_TARGET_CODE 1
#include "bconfig.h"
#define INCLUDE_STRING
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef CHECKING_P
#define CHECKING_P 0
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT
#define USE_ENUM_MODES

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "hard-reg-set.h"
#include "function.h"
#include "emit-rtl.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "predict.h"
#include "basic-block.h"
#include "bitmap.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#include "except.h"

/* Dummy external declarations.  */
extern rtx_insn *insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 >= 32",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 32)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 32)
    : -1 },
#line 9068 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_I8MM",
    __builtin_constant_p 
#line 9068 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_I8MM)
    ? (int) 
#line 9068 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_I8MM)
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x21 & 0x22) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0)
    : -1 },
#line 7950 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])",
    __builtin_constant_p 
#line 7950 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6]))
    ? (int) 
#line 7950 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6]))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V8HImode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8HImode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8HImode))))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SImode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SImode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SImode) >= 64)
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 2563 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2_AES",
    __builtin_constant_p 
#line 2563 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_AES)
    ? (int) 
#line 2563 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_AES)
    : -1 },
#line 5507 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode) &&\n\
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (SImode))",
    __builtin_constant_p 
#line 5507 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode) &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (SImode)))
    ? (int) 
#line 5507 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode) &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V2DImode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V2DImode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V2DImode) - 1))
    : -1 },
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SFmode)",
    __builtin_constant_p 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SFmode))
    ? (int) 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SFmode))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V8BFmode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8BFmode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8BFmode, operands[1], operands[2]))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x24) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2DImode)\n\
       || register_operand (operands[1], V3x2DImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DImode)
       || register_operand (operands[1], V3x2DImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DImode)
       || register_operand (operands[1], V3x2DImode)))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[4]))\n\
   && (XOR != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (XOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (XOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SImode)",
    __builtin_constant_p 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SImode))
    ? (int) 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SImode))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5670 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5670 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V4SFmode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V4SFmode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V4SFmode))))
    : -1 },
  { "(TARGET_SVE) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 7178 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 7178 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[2], V4HImode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[2], V4HImode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[2], V4HImode)))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4BFmode)\n\
       || register_operand (operands[1], V4x4BFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4BFmode)
       || register_operand (operands[1], V4x4BFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4BFmode)
       || register_operand (operands[1], V4x4BFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x16QImode)\n\
       || register_operand (operands[1], V2x16QImode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x16QImode)
       || register_operand (operands[1], V2x16QImode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x16QImode)
       || register_operand (operands[1], V2x16QImode)))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x43 & 0x24) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x24) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x24) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4SImode)\n\
       || register_operand (operands[1], V4x4SImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SImode)
       || register_operand (operands[1], V4x4SImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SImode)
       || register_operand (operands[1], V4x4SImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx16BFmode)\n\
       || register_operand (operands[2], VNx16BFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16BFmode)
       || register_operand (operands[2], VNx16BFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16BFmode)
       || register_operand (operands[2], VNx16BFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 5549 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[3]) < 32 &&\n\
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32)",
    __builtin_constant_p 
#line 5549 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < 32 &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32))
    ? (int) 
#line 5549 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < 32 &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32))
    : -1 },
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16BImode)\n\
       || register_operand (operands[1], VNx16BImode))",
    __builtin_constant_p 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16BImode)
       || register_operand (operands[1], VNx16BImode)))
    ? (int) 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16BImode)
       || register_operand (operands[1], VNx16BImode)))
    : -1 },
#line 5850 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])\n\
   && INTVAL (operands[4])\n\
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])\n\
       <= GET_MODE_BITSIZE (DImode))",
    __builtin_constant_p 
#line 5850 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])
       <= GET_MODE_BITSIZE (DImode)))
    ? (int) 
#line 5850 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])
       <= GET_MODE_BITSIZE (DImode)))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 269 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, false, DImode)",
    __builtin_constant_p 
#line 269 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, DImode))
    ? (int) 
#line 269 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, DImode))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[2], DImode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[2], DImode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[2], DImode)))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && (TARGET_SVE2)",
    __builtin_constant_p (
#line 2984 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && 
#line 2214 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    ? (int) (
#line 2984 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && 
#line 2214 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x41) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16BFmode)\n\
       || register_operand (operands[2], VNx16BFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16BFmode)
       || register_operand (operands[2], VNx16BFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16BFmode)
       || register_operand (operands[2], VNx16BFmode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x41 & 0x42) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0)
    : -1 },
#line 5881 "../../gcc/config/aarch64/aarch64.md"
  { "!(UINTVAL (operands[1]) == 0\n\
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])\n\
	 > GET_MODE_BITSIZE (SImode)))",
    __builtin_constant_p 
#line 5881 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (SImode))))
    ? (int) 
#line 5881 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (SImode))))
    : -1 },
#line 264 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && reload_completed\n\
   && ((FP_REGNUM_P (REGNO (operands[0])) && GP_REGNUM_P (REGNO (operands[1])))\n\
       || (GP_REGNUM_P (REGNO (operands[0])) && FP_REGNUM_P (REGNO (operands[1]))))",
    __builtin_constant_p 
#line 264 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && reload_completed
   && ((FP_REGNUM_P (REGNO (operands[0])) && GP_REGNUM_P (REGNO (operands[1])))
       || (GP_REGNUM_P (REGNO (operands[0])) && FP_REGNUM_P (REGNO (operands[1])))))
    ? (int) 
#line 264 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && reload_completed
   && ((FP_REGNUM_P (REGNO (operands[0])) && GP_REGNUM_P (REGNO (operands[1])))
       || (GP_REGNUM_P (REGNO (operands[0])) && FP_REGNUM_P (REGNO (operands[1])))))
    : -1 },
#line 6540 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && !flag_rounding_math",
    __builtin_constant_p 
#line 6540 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && !flag_rounding_math)
    ? (int) 
#line 6540 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && !flag_rounding_math)
    : -1 },
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, V2SFmode)",
    __builtin_constant_p 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V2SFmode))
    ? (int) 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V2SFmode))
    : -1 },
  { "(TARGET_SVE) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 5730 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5734 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 5730 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5734 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx32BFmode)\n\
       || register_operand (operands[2], VNx32BFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32BFmode)
       || register_operand (operands[2], VNx32BFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32BFmode)
       || register_operand (operands[2], VNx32BFmode)))
    : -1 },
#line 7576 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_RNG",
    __builtin_constant_p 
#line 7576 "../../gcc/config/aarch64/aarch64.md"
(TARGET_RNG)
    ? (int) 
#line 7576 "../../gcc/config/aarch64/aarch64.md"
(TARGET_RNG)
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5814 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5814 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 26 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, DImode)",
    __builtin_constant_p 
#line 26 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, DImode))
    ? (int) 
#line 26 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, DImode))
    : -1 },
#line 6970 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE_I8MM",
    __builtin_constant_p 
#line 6970 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE_I8MM)
    ? (int) 
#line 6970 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE_I8MM)
    : -1 },
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DImode)",
    __builtin_constant_p 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DImode))
    ? (int) 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DImode))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( 1)",
    __builtin_constant_p (
#line 7154 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7165 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    ? (int) (
#line 7154 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7165 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x43 & 0x41) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx24BFmode)\n\
       || register_operand (operands[2], VNx24BFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24BFmode)
       || register_operand (operands[2], VNx24BFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24BFmode)
       || register_operand (operands[2], VNx24BFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x22) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x22) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2HImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HImode))))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8HImode)\n\
       || register_operand (operands[1], V3x8HImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HImode)
       || register_operand (operands[1], V3x8HImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HImode)
       || register_operand (operands[1], V3x8HImode)))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8HImode)\n\
       || register_operand (operands[1], V4x8HImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HImode)
       || register_operand (operands[1], V4x8HImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HImode)
       || register_operand (operands[1], V4x8HImode)))
    : -1 },
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, V4HFmode)",
    __builtin_constant_p 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V4HFmode))
    ? (int) 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V4HFmode))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx16QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 >= 64",
    __builtin_constant_p 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 64)
    ? (int) 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 64)
    : -1 },
#line 8939 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_AES",
    __builtin_constant_p 
#line 8939 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_AES)
    ? (int) 
#line 8939 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_AES)
    : -1 },
  { "(TARGET_SVE) && ( !rtx_equal_p (operands[1], operands[3]))",
    __builtin_constant_p (
#line 3444 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 3448 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[3])))
    ? (int) (
#line 3444 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 3448 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[3])))
    : -1 },
#line 142 "../../gcc/config/aarch64/iterators.md"
  { "ptr_mode == DImode",
    __builtin_constant_p 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode)
    ? (int) 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode)
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2DFmode)\n\
       || register_operand (operands[2], VNx2DFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode)))
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[4]))\n\
   && (AND != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (AND != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (AND != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
  { "(TARGET_SVE\n\
   && 64 >= 64\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[3], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[1], 0),\n\
				  GET_MODE_SIZE (V2SFmode)))",
    __builtin_constant_p 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V2SFmode))))
    ? (int) 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V2SFmode))))
    : -1 },
#line 7518 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FRINT && TARGET_FLOAT\n\
   && !(VECTOR_MODE_P (SFmode) && !TARGET_SIMD)",
    __builtin_constant_p 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (SFmode) && !TARGET_SIMD))
    ? (int) 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (SFmode) && !TARGET_SIMD))
    : -1 },
#line 62 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, false, DFmode)",
    __builtin_constant_p 
#line 62 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, DFmode))
    ? (int) 
#line 62 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, DFmode))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx2DFmode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx2DFmode)\n\
	   && nonmemory_operand (operands[1], VNx2DFmode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx2DFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx2DFmode)
	   && nonmemory_operand (operands[1], VNx2DFmode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx2DFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx2DFmode)
	   && nonmemory_operand (operands[1], VNx2DFmode))))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx6DImode)\n\
       || register_operand (operands[2], VNx6DImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DImode)
       || register_operand (operands[2], VNx6DImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DImode)
       || register_operand (operands[2], VNx6DImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x81 & 0x21) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x21) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x21) == 0)
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 > 64",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 64)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 64)
    : -1 },
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[2], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[0], 0),\n\
				  GET_MODE_SIZE (V4HFmode)))",
    __builtin_constant_p 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V4HFmode))))
    ? (int) 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V4HFmode))))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx16SFmode)\n\
       || register_operand (operands[2], VNx16SFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SFmode)
       || register_operand (operands[2], VNx16SFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SFmode)
       || register_operand (operands[2], VNx16SFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 10652 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 10656 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 10652 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 10656 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 1554 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (register_operand (operands[0], TFmode)\n\
    || aarch64_reg_or_fp_zero (operands[1], TFmode))",
    __builtin_constant_p 
#line 1554 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], TFmode)
    || aarch64_reg_or_fp_zero (operands[1], TFmode)))
    ? (int) 
#line 1554 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], TFmode)
    || aarch64_reg_or_fp_zero (operands[1], TFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x41) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x43 & 0x41) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x41) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x41) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx32HFmode)\n\
       || register_operand (operands[2], VNx32HFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HFmode)
       || register_operand (operands[2], VNx32HFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HFmode)
       || register_operand (operands[2], VNx32HFmode)))
    : -1 },
#line 142 "../../gcc/config/aarch64/iterators.md"
  { "ptr_mode == SImode",
    __builtin_constant_p 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode)
    ? (int) 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode)
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 > 8",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 8)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 8)
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 2772 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_mode_t (operands[5], DImode)\n\
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode))",
    __builtin_constant_p 
#line 2772 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[5], DImode)
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode)))
    ? (int) 
#line 2772 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[5], DImode)
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode)))
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[3]))\n\
   && (AND != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (AND != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (AND != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x43 & 0x42) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x42) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x42) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x81) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 3572 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_uxt_size (INTVAL (operands[2]),INTVAL (operands[3])) != 0",
    __builtin_constant_p 
#line 3572 "../../gcc/config/aarch64/aarch64.md"
(aarch64_uxt_size (INTVAL (operands[2]),INTVAL (operands[3])) != 0)
    ? (int) 
#line 3572 "../../gcc/config/aarch64/aarch64.md"
(aarch64_uxt_size (INTVAL (operands[2]),INTVAL (operands[3])) != 0)
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 1, 15))
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8BFmode)\n\
       || register_operand (operands[1], V2x8BFmode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8BFmode)
       || register_operand (operands[1], V2x8BFmode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8BFmode)
       || register_operand (operands[1], V2x8BFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x42) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 6018 "../../gcc/config/aarch64/aarch64.md"
  { "(INTVAL (operands[3]) == ~INTVAL (operands[4]))\n\
  && (aarch64_high_bits_all_ones_p (INTVAL (operands[3]))\n\
    || aarch64_high_bits_all_ones_p (INTVAL (operands[4])))",
    __builtin_constant_p 
#line 6018 "../../gcc/config/aarch64/aarch64.md"
((INTVAL (operands[3]) == ~INTVAL (operands[4]))
  && (aarch64_high_bits_all_ones_p (INTVAL (operands[3]))
    || aarch64_high_bits_all_ones_p (INTVAL (operands[4]))))
    ? (int) 
#line 6018 "../../gcc/config/aarch64/aarch64.md"
((INTVAL (operands[3]) == ~INTVAL (operands[4]))
  && (aarch64_high_bits_all_ones_p (INTVAL (operands[3]))
    || aarch64_high_bits_all_ones_p (INTVAL (operands[4]))))
    : -1 },
#line 1356 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[1]) < GET_MODE_BITSIZE (SImode)\n\
   && UINTVAL (operands[1]) % 16 == 0",
    __builtin_constant_p 
#line 1356 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) < GET_MODE_BITSIZE (SImode)
   && UINTVAL (operands[1]) % 16 == 0)
    ? (int) 
#line 1356 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) < GET_MODE_BITSIZE (SImode)
   && UINTVAL (operands[1]) % 16 == 0)
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V8HImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8HImode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8HImode, operands[1], operands[2]))
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V4SImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V4SImode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4SImode)
       || aarch64_simd_reg_or_zero (operands[1], V4SImode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4SImode)
       || aarch64_simd_reg_or_zero (operands[1], V4SImode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4BFmode)\n\
       || register_operand (operands[1], V3x4BFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4BFmode)
       || register_operand (operands[1], V3x4BFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4BFmode)
       || register_operand (operands[1], V3x4BFmode)))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8SImode)\n\
       || register_operand (operands[2], VNx8SImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SImode)
       || register_operand (operands[2], VNx8SImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SImode)
       || register_operand (operands[2], VNx8SImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx8HImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 5938 "../../gcc/config/aarch64/aarch64.md"
  { "IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),\n\
	     1, GET_MODE_BITSIZE (SImode) - 1)",
    __builtin_constant_p 
#line 5938 "../../gcc/config/aarch64/aarch64.md"
(IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
	     1, GET_MODE_BITSIZE (SImode) - 1))
    ? (int) 
#line 5938 "../../gcc/config/aarch64/aarch64.md"
(IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
	     1, GET_MODE_BITSIZE (SImode) - 1))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && REG_P (operands[0])\n\
   && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p (
#line 2763 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2778 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && REG_P (operands[0])
   && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) (
#line 2763 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2778 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && REG_P (operands[0])
   && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4BFmode)\n\
       || register_operand (operands[2], VNx4BFmode))) && ( register_operand (operands[0], VNx4BFmode)\n\
   && register_operand (operands[2], VNx4BFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4BFmode)
   && register_operand (operands[2], VNx4BFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4BFmode)
   && register_operand (operands[2], VNx4BFmode)))
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V8BFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8BFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8BFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 431 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])",
    __builtin_constant_p 
#line 431 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4]))
    ? (int) 
#line 431 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4]))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx16QImode)\n\
       || register_operand (operands[2], VNx16QImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx16QImode)
       || register_operand (operands[2], VNx16QImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx16QImode)
       || register_operand (operands[2], VNx16QImode)))
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (HFmode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (HFmode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (HFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (HFmode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (HFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (HFmode), 0, 63))
    : -1 },
#line 5677 "../../gcc/config/aarch64/aarch64.md"
  { "IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]), 1,\n\
	     GET_MODE_BITSIZE (DImode) - 1)\n\
   && (INTVAL (operands[2]) + INTVAL (operands[3]))\n\
       == GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5677 "../../gcc/config/aarch64/aarch64.md"
(IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]), 1,
	     GET_MODE_BITSIZE (DImode) - 1)
   && (INTVAL (operands[2]) + INTVAL (operands[3]))
       == GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5677 "../../gcc/config/aarch64/aarch64.md"
(IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]), 1,
	     GET_MODE_BITSIZE (DImode) - 1)
   && (INTVAL (operands[2]) + INTVAL (operands[3]))
       == GET_MODE_BITSIZE (SImode))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx4HFmode)\n\
       || register_operand (operands[2], VNx4HFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode)))
    : -1 },
#line 1794 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[2], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[0], 0),\n\
				GET_MODE_SIZE (DImode)))",
    __builtin_constant_p 
#line 1794 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (DImode))))
    ? (int) 
#line 1794 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (DImode))))
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx12SFmode)\n\
       || register_operand (operands[2], VNx12SFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SFmode)
       || register_operand (operands[2], VNx12SFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SFmode)
       || register_operand (operands[2], VNx12SFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SFmode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SFmode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (SFmode) >= 64)
    : -1 },
  { "(TARGET_SVE) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 10611 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 10615 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 10611 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 10615 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SIMD\n\
   && INTVAL (operands[5])\n\
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 1, 15))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx2DImode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx2DImode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx2DImode).is_constant ())
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( 1)",
    __builtin_constant_p (
#line 5628 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5634 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    ? (int) (
#line 5628 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5634 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HImode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HImode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HImode) >= 64)
    : -1 },
#line 62 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, false, SFmode)",
    __builtin_constant_p 
#line 62 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, SFmode))
    ? (int) 
#line 62 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, SFmode))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x81 & 0x42) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x42) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x42) == 0)
    : -1 },
  { "(!aarch64_move_imm (INTVAL (operands[1]), SImode)\n\
   && !aarch64_plus_operand (operands[1], SImode)\n\
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x43 & 0x42) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x42) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x42) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 189 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, true, DImode)",
    __builtin_constant_p 
#line 189 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, DImode))
    ? (int) 
#line 189 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, DImode))
    : -1 },
#line 2752 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_mode_t (operands[4], DImode)\n\
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode))",
    __builtin_constant_p 
#line 2752 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[4], DImode)
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode)))
    ? (int) 
#line 2752 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[4], DImode)
   == (wi::shwi (1, DImode) << (unsigned) GET_MODE_BITSIZE (SImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2DImode)\n\
       || register_operand (operands[2], VNx2DImode))) && ( register_operand (operands[0], VNx2DImode)\n\
   && register_operand (operands[2], VNx2DImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DImode)
       || register_operand (operands[2], VNx2DImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2DImode)
   && register_operand (operands[2], VNx2DImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DImode)
       || register_operand (operands[2], VNx2DImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2DImode)
   && register_operand (operands[2], VNx2DImode)))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx8QImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx8QImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx8QImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx16HImode)\n\
       || register_operand (operands[2], VNx16HImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HImode)
       || register_operand (operands[2], VNx16HImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HImode)
       || register_operand (operands[2], VNx16HImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx4SImode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx4SImode)\n\
	   && nonmemory_operand (operands[1], VNx4SImode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx4SImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx4SImode)
	   && nonmemory_operand (operands[1], VNx4SImode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx4SImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx4SImode)
	   && nonmemory_operand (operands[1], VNx4SImode))))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[2], DFmode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[2], DFmode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[2], DFmode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x27 & 0x42) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x42) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x42) == 0)
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4QImode)\n\
       || register_operand (operands[2], VNx4QImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4QImode)
       || register_operand (operands[2], VNx4QImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4QImode)
       || register_operand (operands[2], VNx4QImode)))
    : -1 },
#line 5736 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[1]) <= 16",
    __builtin_constant_p 
#line 5736 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) <= 16)
    ? (int) 
#line 5736 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) <= 16)
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx8QImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2HFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2HFmode))))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x27 & 0x24) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x24) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x24) == 0)
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2DImode)\n\
       || register_operand (operands[1], V4x2DImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DImode)
       || register_operand (operands[1], V4x2DImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DImode)
       || register_operand (operands[1], V4x2DImode)))
    : -1 },
#line 8956 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD",
    __builtin_constant_p 
#line 8956 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD)
    ? (int) 
#line 8956 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD)
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x42) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 5836 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]), 0,\n\
				      UINTVAL (operands[4]))",
    __builtin_constant_p 
#line 5836 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]), 0,
				      UINTVAL (operands[4])))
    ? (int) 
#line 5836 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]), 0,
				      UINTVAL (operands[4])))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HFmode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HFmode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (HFmode) >= 64)
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2SFmode)\n\
       || register_operand (operands[2], VNx2SFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode)))
    : -1 },
#line 5234 "../../gcc/config/aarch64/aarch64.md"
  { "((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)\n\
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)",
    __builtin_constant_p 
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode))
    ? (int) 
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2DFmode)\n\
       || register_operand (operands[2], VNx2DFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4SFmode)\n\
       || register_operand (operands[1], V4x4SFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SFmode)
       || register_operand (operands[1], V4x4SFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SFmode)
       || register_operand (operands[1], V4x4SFmode)))
    : -1 },
  { "(TARGET_SVE && 16 >= 16) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 16) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 16) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx24HFmode)\n\
       || register_operand (operands[2], VNx24HFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HFmode)
       || register_operand (operands[2], VNx24HFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HFmode)
       || register_operand (operands[2], VNx24HFmode)))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 == 32",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 32)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 32)
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V16QImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V16QImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V16QImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V8BFmode)\n\
       || register_operand (operands[2], V4BFmode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[2], V4BFmode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[2], V4BFmode)))
    : -1 },
#line 8134 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_SHA2 && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 8134 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA2 && BYTES_BIG_ENDIAN)
    ? (int) 
#line 8134 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA2 && BYTES_BIG_ENDIAN)
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4BFmode)\n\
       || register_operand (operands[1], V2x4BFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4BFmode)
       || register_operand (operands[1], V2x4BFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4BFmode)
       || register_operand (operands[1], V2x4BFmode)))
    : -1 },
#line 2672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && aarch64_check_zero_based_sve_index_immediate (operands[2])",
    __builtin_constant_p 
#line 2672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && aarch64_check_zero_based_sve_index_immediate (operands[2]))
    ? (int) 
#line 2672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && aarch64_check_zero_based_sve_index_immediate (operands[2]))
    : -1 },
#line 5521 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode)\n\
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])\n\
       == GET_MODE_BITSIZE (SImode))",
    __builtin_constant_p 
#line 5521 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode)
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])
       == GET_MODE_BITSIZE (SImode)))
    ? (int) 
#line 5521 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (SImode)
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])
       == GET_MODE_BITSIZE (SImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx24HImode)\n\
       || register_operand (operands[2], VNx24HImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HImode)
       || register_operand (operands[2], VNx24HImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HImode)
       || register_operand (operands[2], VNx24HImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 862 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 862 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && BYTES_BIG_ENDIAN)
    ? (int) 
#line 862 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && BYTES_BIG_ENDIAN)
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx4SImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4SImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4SImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SImode))))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x41 & 0x22) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x22) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x22) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx2DFmode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7207 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7207 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, V4HImode)",
    __builtin_constant_p 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V4HImode))
    ? (int) 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V4HImode))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2SFmode)\n\
       || register_operand (operands[2], VNx2SFmode))) && ( register_operand (operands[0], VNx2SFmode)\n\
   && register_operand (operands[2], VNx2SFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2SFmode)
   && register_operand (operands[2], VNx2SFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2SFmode)
   && register_operand (operands[2], VNx2SFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x24) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (BFmode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (BFmode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (BFmode) >= 64)
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x27 & 0x41) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x41) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x41) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x1DFmode)\n\
       || register_operand (operands[1], V2x1DFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DFmode)
       || register_operand (operands[1], V2x1DFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DFmode)
       || register_operand (operands[1], V2x1DFmode)))
    : -1 },
  { "(TARGET_SVE && 32 >= 32) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 32) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 32) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V8HFmode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8HFmode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8HFmode))))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6096 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6096 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x81 & 0x24) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x24) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x24) == 0)
    : -1 },
  { "(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)\n\
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && ( true)",
    __builtin_constant_p (
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && 
#line 5237 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && 
#line 5237 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x21 & 0x42) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x42) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x42) == 0)
    : -1 },
#line 7709 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_LS64",
    __builtin_constant_p 
#line 7709 "../../gcc/config/aarch64/aarch64.md"
(TARGET_LS64)
    ? (int) 
#line 7709 "../../gcc/config/aarch64/aarch64.md"
(TARGET_LS64)
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)) && ( true)",
    __builtin_constant_p (
#line 5209 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)) && 
#line 5211 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 5209 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)) && 
#line 5211 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx8QImode)\n\
       || register_operand (operands[2], VNx8QImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8QImode)
       || register_operand (operands[2], VNx8QImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8QImode)
       || register_operand (operands[2], VNx8QImode)))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2DFmode)\n\
       || register_operand (operands[1], V3x2DFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DFmode)
       || register_operand (operands[1], V3x2DFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DFmode)
       || register_operand (operands[1], V3x2DFmode)))
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx8BFmode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx8BFmode)\n\
	   && nonmemory_operand (operands[1], VNx8BFmode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx8BFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8BFmode)
	   && nonmemory_operand (operands[1], VNx8BFmode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx8BFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8BFmode)
	   && nonmemory_operand (operands[1], VNx8BFmode))))
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 8 >= 8\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 5051 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[1]) > 0\n\
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))\n\
	<= GET_MODE_BITSIZE (SImode))\n\
   && aarch64_bitmask_imm (\n\
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],\n\
						 operands[2])),\n\
	SImode)",
    __builtin_constant_p 
#line 5051 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[1]) > 0
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))
	<= GET_MODE_BITSIZE (SImode))
   && aarch64_bitmask_imm (
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],
						 operands[2])),
	SImode))
    ? (int) 
#line 5051 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[1]) > 0
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))
	<= GET_MODE_BITSIZE (SImode))
   && aarch64_bitmask_imm (
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],
						 operands[2])),
	SImode))
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (SFmode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (SFmode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (SFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (SFmode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (SFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (SFmode), 0, 63))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x81 & 0x81) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x81) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x81) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x81) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x23 & 0x81) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x81) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x81) == 0)
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 > 64",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 64)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 64)
    : -1 },
  { "(TARGET_SVE) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1913 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 1917 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1913 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 1917 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x81 & 0x42) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x42) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x42) == 0)
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (HImode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (HImode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (HImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (HImode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (HImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (HImode), 0, 63))
    : -1 },
#line 5628 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) < GET_MODE_BITSIZE (QImode)",
    __builtin_constant_p 
#line 5628 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (QImode))
    ? (int) 
#line 5628 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (QImode))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE && 64 >= 32) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 32) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 32) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx16QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 5575 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)",
    __builtin_constant_p 
#line 5575 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode))
    ? (int) 
#line 5575 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode))
    : -1 },
#line 1727 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[3], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[1], 0),\n\
				GET_MODE_SIZE (SFmode)))",
    __builtin_constant_p 
#line 1727 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (SFmode))))
    ? (int) 
#line 1727 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (SFmode))))
    : -1 },
#line 166 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, false, DImode)",
    __builtin_constant_p 
#line 166 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, DImode))
    ? (int) 
#line 166 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, DImode))
    : -1 },
#line 8100 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_AES\n\
   && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC)",
    __builtin_constant_p 
#line 8100 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_AES
   && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC))
    ? (int) 
#line 8100 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_AES
   && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5814 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5814 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4QImode)\n\
       || register_operand (operands[2], VNx4QImode))) && ( register_operand (operands[0], VNx4QImode)\n\
   && register_operand (operands[2], VNx4QImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4QImode)
       || register_operand (operands[2], VNx4QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4QImode)
   && register_operand (operands[2], VNx4QImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4QImode)
       || register_operand (operands[2], VNx4QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4QImode)
   && register_operand (operands[2], VNx4QImode)))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V2DFmode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2DFmode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2DFmode, operands[1], operands[2]))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx32HImode)\n\
       || register_operand (operands[2], VNx32HImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HImode)
       || register_operand (operands[2], VNx32HImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HImode)
       || register_operand (operands[2], VNx32HImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8SImode)\n\
       || register_operand (operands[2], VNx8SImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SImode)
       || register_operand (operands[2], VNx8SImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SImode)
       || register_operand (operands[2], VNx8SImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 1810 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_SIMD &&\n\
    rtx_equal_p (XEXP (operands[2], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[0], 0),\n\
				GET_MODE_SIZE (TFmode)))",
    __builtin_constant_p 
#line 1810 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD &&
    rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (TFmode))))
    ? (int) 
#line 1810 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD &&
    rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (TFmode))))
    : -1 },
#line 5836 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]), 0,\n\
				      UINTVAL (operands[4]))",
    __builtin_constant_p 
#line 5836 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]), 0,
				      UINTVAL (operands[4])))
    ? (int) 
#line 5836 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]), 0,
				      UINTVAL (operands[4])))
    : -1 },
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2BImode)\n\
       || register_operand (operands[1], VNx2BImode))",
    __builtin_constant_p 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2BImode)
       || register_operand (operands[1], VNx2BImode)))
    ? (int) 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2BImode)
       || register_operand (operands[1], VNx2BImode)))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16QImode)\n\
       || register_operand (operands[2], VNx16QImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16QImode)
       || register_operand (operands[2], VNx16QImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16QImode)
       || register_operand (operands[2], VNx16QImode)))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 == 32",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 32)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 32)
    : -1 },
#line 4477 "../../gcc/config/aarch64/aarch64.md"
  { "true",
    __builtin_constant_p 
#line 4477 "../../gcc/config/aarch64/aarch64.md"
(true)
    ? (int) 
#line 4477 "../../gcc/config/aarch64/aarch64.md"
(true)
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 1, 15))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x43 & 0x41) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x41) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x41) == 0)
    : -1 },
  { "(TARGET_SVE) && ( (!CONSTANT_P (operands[2]) || !CONSTANT_P (operands[3])))",
    __builtin_constant_p (
#line 1057 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 1061 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[2]) || !CONSTANT_P (operands[3]))))
    ? (int) (
#line 1057 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 1061 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[2]) || !CONSTANT_P (operands[3]))))
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6096 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6096 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 528 "../../gcc/config/aarch64/atomics.md"
  { "TARGET_LSE",
    __builtin_constant_p 
#line 528 "../../gcc/config/aarch64/atomics.md"
(TARGET_LSE)
    ? (int) 
#line 528 "../../gcc/config/aarch64/atomics.md"
(TARGET_LSE)
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 64 >= 8\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, V2SImode)",
    __builtin_constant_p 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V2SImode))
    ? (int) 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V2SImode))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx4HFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HFmode))))
    : -1 },
#line 5881 "../../gcc/config/aarch64/aarch64.md"
  { "!(UINTVAL (operands[1]) == 0\n\
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])\n\
	 > GET_MODE_BITSIZE (DImode)))",
    __builtin_constant_p 
#line 5881 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (DImode))))
    ? (int) 
#line 5881 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[3]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (DImode))))
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 > 32",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 32)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 32)
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V16QImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V16QImode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V16QImode)
       || aarch64_simd_reg_or_zero (operands[1], V16QImode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V16QImode)
       || aarch64_simd_reg_or_zero (operands[1], V16QImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx32BFmode)\n\
       || register_operand (operands[2], VNx32BFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32BFmode)
       || register_operand (operands[2], VNx32BFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32BFmode)
       || register_operand (operands[2], VNx32BFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed\n\
  && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0)",
    __builtin_constant_p (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0))
    ? (int) (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0))
    : -1 },
#line 249 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, true, SImode)",
    __builtin_constant_p 
#line 249 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, SImode))
    ? (int) 
#line 249 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, SImode))
    : -1 },
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && !rtx_equal_p (operands[3], operands[4])",
    __builtin_constant_p 
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4]))
    ? (int) 
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4]))
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 1, 15))
    : -1 },
#line 289 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, false, SFmode)",
    __builtin_constant_p 
#line 289 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, SFmode))
    ? (int) 
#line 289 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, SFmode))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4HFmode)\n\
       || register_operand (operands[1], V3x4HFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HFmode)
       || register_operand (operands[1], V3x4HFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HFmode)
       || register_operand (operands[1], V3x4HFmode)))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2HImode)\n\
       || register_operand (operands[2], VNx2HImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2HImode)
       || register_operand (operands[2], VNx2HImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2HImode)
       || register_operand (operands[2], VNx2HImode)))
    : -1 },
#line 4449 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_maxmin_plus_const (UMIN, operands, false)",
    __builtin_constant_p 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMIN, operands, false))
    ? (int) 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMIN, operands, false))
    : -1 },
#line 9015 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_BF16_SIMD",
    __builtin_constant_p 
#line 9015 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_BF16_SIMD)
    ? (int) 
#line 9015 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_BF16_SIMD)
    : -1 },
#line 4046 "../../gcc/config/aarch64/aarch64.md"
  { "!aarch64_move_imm (INTVAL (operands[2]), DImode)\n\
   && !aarch64_plus_operand (operands[2], DImode)\n\
   && !reload_completed",
    __builtin_constant_p 
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), DImode)
   && !aarch64_plus_operand (operands[2], DImode)
   && !reload_completed)
    ? (int) 
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), DImode)
   && !aarch64_plus_operand (operands[2], DImode)
   && !reload_completed)
    : -1 },
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V4BFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V4BFmode))",
    __builtin_constant_p 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4BFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4BFmode)))
    ? (int) 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4BFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4BFmode)))
    : -1 },
  { "(TARGET_SVE2\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4]))) && ( 1)",
    __builtin_constant_p (
#line 633 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4]))) && 
#line 646 "../../gcc/config/aarch64/aarch64-sve2.md"
( 1))
    ? (int) (
#line 633 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4]))) && 
#line 646 "../../gcc/config/aarch64/aarch64-sve2.md"
( 1))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4DFmode)\n\
       || register_operand (operands[2], VNx4DFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DFmode)
       || register_operand (operands[2], VNx4DFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DFmode)
       || register_operand (operands[2], VNx4DFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[2], SImode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[2], SImode)))
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 1, 15))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x41) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2HFmode)\n\
       || register_operand (operands[2], VNx2HFmode))) && ( register_operand (operands[0], VNx2HFmode)\n\
   && register_operand (operands[2], VNx2HFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2HFmode)
   && register_operand (operands[2], VNx2HFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2HFmode)
   && register_operand (operands[2], VNx2HFmode)))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && register_operand (operands[3], VNx4SFmode)\n\
   && INTVAL (operands[4]) == SVE_RELAXED_GP)",
    __builtin_constant_p (
#line 6123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 6132 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[3], VNx4SFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    ? (int) (
#line 6123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 6132 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[3], VNx4SFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    : -1 },
#line 1777 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[2], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[0], 0),\n\
				GET_MODE_SIZE (SFmode)))",
    __builtin_constant_p 
#line 1777 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (SFmode))))
    ? (int) 
#line 1777 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (SFmode))))
    : -1 },
#line 2427 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[1]) == INTVAL (operands[2])",
    __builtin_constant_p 
#line 2427 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[1]) == INTVAL (operands[2]))
    ? (int) 
#line 2427 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[1]) == INTVAL (operands[2]))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4SFmode)\n\
       || register_operand (operands[2], VNx4SFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x1DImode)\n\
       || register_operand (operands[1], V2x1DImode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DImode)
       || register_operand (operands[1], V2x1DImode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DImode)
       || register_operand (operands[1], V2x1DImode)))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V4SFmode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V4SFmode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V4SFmode))))
    : -1 },
#line 3187 "../../gcc/config/aarch64/aarch64.md"
  { "!reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 3187 "../../gcc/config/aarch64/aarch64.md"
(!reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 3187 "../../gcc/config/aarch64/aarch64.md"
(!reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x27 & 0x42) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x42) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x42) == 0)
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V2DFmode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V2DFmode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V2DFmode))))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x42) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 >= 16",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 16)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 16)
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx8BFmode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx8BFmode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx8BFmode).is_constant ())
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V8BFmode)\n\
       || register_operand (operands[2], V4BFmode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[2], V4BFmode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[2], V4BFmode)))
    : -1 },
#line 8284 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_SHA3",
    __builtin_constant_p 
#line 8284 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA3)
    ? (int) 
#line 8284 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA3)
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2SFmode)\n\
       || register_operand (operands[1], V4x2SFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SFmode)
       || register_operand (operands[1], V4x2SFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SFmode)
       || register_operand (operands[1], V4x2SFmode)))
    : -1 },
#line 6834 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 6834 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (reload_completed || reload_in_progress))
    ? (int) 
#line 6834 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (reload_completed || reload_in_progress))
    : -1 },
#line 8343 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_SM4",
    __builtin_constant_p 
#line 8343 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SM4)
    ? (int) 
#line 8343 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SM4)
    : -1 },
#line 6907 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_ILP32",
    __builtin_constant_p 
#line 6907 "../../gcc/config/aarch64/aarch64.md"
(TARGET_ILP32)
    ? (int) 
#line 6907 "../../gcc/config/aarch64/aarch64.md"
(TARGET_ILP32)
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx4HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx4QImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx4QImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx4QImode)))
    : -1 },
  { "(aarch64_maxmin_plus_const (UMAX, operands, false)) && ( 1)",
    __builtin_constant_p (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMAX, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    ? (int) (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMAX, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[2], V8QImode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[2], V8QImode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[2], V8QImode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x43 & 0x22) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x22) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x22) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[3], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[1], 0),\n\
				  GET_MODE_SIZE (V4HFmode)))",
    __builtin_constant_p 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V4HFmode))))
    ? (int) 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V4HFmode))))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx2SImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 2648 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2_SM4",
    __builtin_constant_p 
#line 2648 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_SM4)
    ? (int) 
#line 2648 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_SM4)
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "(TARGET_SVE) && (TARGET_SVE_F64MM)",
    __builtin_constant_p (
#line 7541 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 498 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE_F64MM))
    ? (int) (
#line 7541 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 498 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE_F64MM))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx2HImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2HImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2HImode)))
    : -1 },
  { "(TARGET_SVE2) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 1981 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 1983 "../../gcc/config/aarch64/aarch64-sve2.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 1981 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 1983 "../../gcc/config/aarch64/aarch64-sve2.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 5234 "../../gcc/config/aarch64/aarch64.md"
  { "((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)\n\
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode))
    : -1 },
#line 252 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && reload_completed\n\
   && GP_REGNUM_P (REGNO (operands[0]))\n\
   && GP_REGNUM_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 252 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && reload_completed
   && GP_REGNUM_P (REGNO (operands[0]))
   && GP_REGNUM_P (REGNO (operands[1])))
    ? (int) 
#line 252 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && reload_completed
   && GP_REGNUM_P (REGNO (operands[0]))
   && GP_REGNUM_P (REGNO (operands[1])))
    : -1 },
#line 5724 "../../gcc/config/aarch64/aarch64.md"
  { "!(UINTVAL (operands[1]) == 0\n\
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])\n\
	 > GET_MODE_BITSIZE (SImode)))",
    __builtin_constant_p 
#line 5724 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (SImode))))
    ? (int) 
#line 5724 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (SImode))))
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V16QImode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V16QImode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V16QImode) - 1))
    : -1 },
#line 1777 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[2], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[0], 0),\n\
				GET_MODE_SIZE (SImode)))",
    __builtin_constant_p 
#line 1777 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (SImode))))
    ? (int) 
#line 1777 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (SImode))))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x27 & 0x81) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x81) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x81) == 0)
    : -1 },
#line 6398 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 6398 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 6398 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN)
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x1DFmode)\n\
       || register_operand (operands[1], V4x1DFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DFmode)
       || register_operand (operands[1], V4x1DFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DFmode)
       || register_operand (operands[1], V4x1DFmode)))
    : -1 },
  { "(TARGET_SVE) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 2335 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2339 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 2335 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2339 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
#line 7229 "../../gcc/config/aarch64/aarch64-simd.md"
  { "(register_operand (operands[0], V8DImode)\n\
    || register_operand (operands[1], V8DImode))",
    __builtin_constant_p 
#line 7229 "../../gcc/config/aarch64/aarch64-simd.md"
((register_operand (operands[0], V8DImode)
    || register_operand (operands[1], V8DImode)))
    ? (int) 
#line 7229 "../../gcc/config/aarch64/aarch64-simd.md"
((register_operand (operands[0], V8DImode)
    || register_operand (operands[1], V8DImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x23 & 0x22) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
  { "(TARGET_SVE\n\
   && 8 >= 32\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x81 & 0x21) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x21) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x21) == 0)
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V8BFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V8BFmode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8BFmode)
       || aarch64_simd_reg_or_zero (operands[1], V8BFmode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8BFmode)
       || aarch64_simd_reg_or_zero (operands[1], V8BFmode)))
    : -1 },
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 >= 32",
    __builtin_constant_p 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 32)
    ? (int) 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 32)
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (SImode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (SImode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (SImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (SImode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (SImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (SImode), 0, 63))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8DFmode)\n\
       || register_operand (operands[2], VNx8DFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DFmode)
       || register_operand (operands[2], VNx8DFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DFmode)
       || register_operand (operands[2], VNx8DFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8DFmode)\n\
       || register_operand (operands[2], VNx8DFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DFmode)
       || register_operand (operands[2], VNx8DFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DFmode)
       || register_operand (operands[2], VNx8DFmode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2DImode)\n\
       || register_operand (operands[1], V4x2DImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DImode)
       || register_operand (operands[1], V4x2DImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DImode)
       || register_operand (operands[1], V4x2DImode)))
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8HFmode)\n\
       || register_operand (operands[1], V2x8HFmode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HFmode)
       || register_operand (operands[1], V2x8HFmode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HFmode)
       || register_operand (operands[1], V2x8HFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4SImode)\n\
       || register_operand (operands[2], VNx4SImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SImode)
       || register_operand (operands[2], VNx4SImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SImode)
       || register_operand (operands[2], VNx4SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 == 32",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 32)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 32)
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx8HImode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx8HImode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx8HImode).is_constant ())
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x16QImode)\n\
       || register_operand (operands[1], V2x16QImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x16QImode)
       || register_operand (operands[1], V2x16QImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x16QImode)
       || register_operand (operands[1], V2x16QImode)))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE && 16 >= 32) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 32) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 32) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2QImode)\n\
       || register_operand (operands[2], VNx2QImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2QImode)
       || register_operand (operands[2], VNx2QImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2QImode)
       || register_operand (operands[2], VNx2QImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x23 & 0x24) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0)
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 8 >= 32\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 >= 64",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 64)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 64)
    : -1 },
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 > 16",
    __builtin_constant_p 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 16)
    ? (int) 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 16)
    : -1 },
#line 2391 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2",
    __builtin_constant_p 
#line 2391 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2)
    ? (int) 
#line 2391 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2)
    : -1 },
  { "(TARGET_SVE2\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( 1)",
    __builtin_constant_p (
#line 431 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 440 "../../gcc/config/aarch64/aarch64-sve2.md"
( 1))
    ? (int) (
#line 431 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 440 "../../gcc/config/aarch64/aarch64-sve2.md"
( 1))
    : -1 },
  { "(TARGET_COMPLEX) && (TARGET_SIMD_F16INST)",
    __builtin_constant_p (
#line 513 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    ? (int) (
#line 513 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8SFmode)\n\
       || register_operand (operands[2], VNx8SFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SFmode)
       || register_operand (operands[2], VNx8SFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SFmode)
       || register_operand (operands[2], VNx8SFmode)))
    : -1 },
  { "(TARGET_SVE) && ( (operands[4] != CONST0_RTX (VNx16BImode)\n\
       || operands[5] != CONST0_RTX (VNx16BImode)))",
    __builtin_constant_p (
#line 9720 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 9722 "../../gcc/config/aarch64/aarch64-sve.md"
( (operands[4] != CONST0_RTX (VNx16BImode)
       || operands[5] != CONST0_RTX (VNx16BImode))))
    ? (int) (
#line 9720 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 9722 "../../gcc/config/aarch64/aarch64-sve.md"
( (operands[4] != CONST0_RTX (VNx16BImode)
       || operands[5] != CONST0_RTX (VNx16BImode))))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx8HFmode)\n\
       || register_operand (operands[2], VNx8HFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode)))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx4SFmode)\n\
       || register_operand (operands[2], VNx4SFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode)))
    : -1 },
  { "((!aarch64_move_imm (INTVAL (operands[1]), DImode)\n\
   && !aarch64_plus_operand (operands[1], DImode)\n\
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)) && ( true)",
    __builtin_constant_p ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 7333 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 7333 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 7333 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x24) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x24) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8BFmode)\n\
       || register_operand (operands[1], V4x8BFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8BFmode)
       || register_operand (operands[1], V4x8BFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8BFmode)
       || register_operand (operands[1], V4x8BFmode)))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 == 32",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 32)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 32)
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx8HFmode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7436 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7436 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && register_operand (operands[2], VNx4SFmode)\n\
   && INTVAL (operands[4]) == SVE_RELAXED_GP)",
    __builtin_constant_p (
#line 5698 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5708 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[2], VNx4SFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    ? (int) (
#line 5698 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5708 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[2], VNx4SFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    : -1 },
#line 1577 "../../gcc/config/aarch64/aarch64.md"
  { "reload_completed && aarch64_split_128bit_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 1577 "../../gcc/config/aarch64/aarch64.md"
(reload_completed && aarch64_split_128bit_move_p (operands[0], operands[1]))
    ? (int) 
#line 1577 "../../gcc/config/aarch64/aarch64.md"
(reload_completed && aarch64_split_128bit_move_p (operands[0], operands[1]))
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HFmode), 16, 63))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x27 & 0x24) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x24) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x24) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x81) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed)",
    __builtin_constant_p (
#line 7756 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 7758 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed))
    ? (int) (
#line 7756 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 7758 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
  { "(TARGET_SVE) && ( !CONSTANT_P (operands[5]))",
    __builtin_constant_p (
#line 3958 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 3960 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[5])))
    ? (int) (
#line 3958 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 3960 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[5])))
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[4]))\n\
   && (XOR != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (XOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (XOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x43 & 0x81) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x81) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x81) == 0)
    : -1 },
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 >= 16",
    __builtin_constant_p 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 16)
    ? (int) 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 16)
    : -1 },
  { "(TARGET_SVE && operands[0] != stack_pointer_rtx) && ( epilogue_completed\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && aarch64_split_add_offset_immediate (operands[2], SImode))",
    __builtin_constant_p (
#line 2181 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE && operands[0] != stack_pointer_rtx) && 
#line 2190 "../../gcc/config/aarch64/aarch64.md"
( epilogue_completed
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && aarch64_split_add_offset_immediate (operands[2], SImode)))
    ? (int) (
#line 2181 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE && operands[0] != stack_pointer_rtx) && 
#line 2190 "../../gcc/config/aarch64/aarch64.md"
( epilogue_completed
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && aarch64_split_add_offset_immediate (operands[2], SImode)))
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SFmode), 16, 63))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V8QImode))",
    __builtin_constant_p (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V8QImode)))
    ? (int) (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V8QImode)))
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2DFmode)\n\
       || register_operand (operands[1], V2x2DFmode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DFmode)
       || register_operand (operands[1], V2x2DFmode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DFmode)
       || register_operand (operands[1], V2x2DFmode)))
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 >= 16",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 16)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 16)
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2DImode)\n\
       || register_operand (operands[1], V3x2DImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DImode)
       || register_operand (operands[1], V3x2DImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DImode)
       || register_operand (operands[1], V3x2DImode)))
    : -1 },
#line 2597 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2_AES && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC)",
    __builtin_constant_p 
#line 2597 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_AES && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC))
    ? (int) 
#line 2597 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_AES && aarch64_fusion_enabled_p (AARCH64_FUSE_AES_AESMC))
    : -1 },
#line 3160 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) == -UINTVAL (operands[3])",
    __builtin_constant_p 
#line 3160 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == -UINTVAL (operands[3]))
    ? (int) 
#line 3160 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == -UINTVAL (operands[3]))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8HImode)\n\
       || register_operand (operands[2], VNx8HImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HImode)
       || register_operand (operands[2], VNx8HImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HImode)
       || register_operand (operands[2], VNx8HImode)))
    : -1 },
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V4HImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V4HImode))",
    __builtin_constant_p 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4HImode)
       || aarch64_simd_reg_or_zero (operands[1], V4HImode)))
    ? (int) 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4HImode)
       || aarch64_simd_reg_or_zero (operands[1], V4HImode)))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4HFmode)\n\
       || register_operand (operands[1], V2x4HFmode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HFmode)
       || register_operand (operands[1], V2x4HFmode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HFmode)
       || register_operand (operands[1], V2x4HFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x41) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx8HFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8HFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HFmode))))
    : -1 },
  { "(TARGET_TLS_DESC) && (ptr_mode == DImode)",
    __builtin_constant_p (
#line 7035 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    ? (int) (
#line 7035 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    : -1 },
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[2], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[0], 0),\n\
				  GET_MODE_SIZE (V2SFmode)))",
    __builtin_constant_p 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V2SFmode))))
    ? (int) 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V2SFmode))))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 == 16",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 16)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 16)
    : -1 },
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[3]) * 16 / 8, 0, 255)",
    __builtin_constant_p 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 16 / 8, 0, 255))
    ? (int) 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 16 / 8, 0, 255))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 == 16",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 16)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 16)
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2DFmode)\n\
       || register_operand (operands[2], VNx2DFmode))) && ( register_operand (operands[0], VNx2DFmode)\n\
   && register_operand (operands[2], VNx2DFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2DFmode)
   && register_operand (operands[2], VNx2DFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DFmode)
       || register_operand (operands[2], VNx2DFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2DFmode)
   && register_operand (operands[2], VNx2DFmode)))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 == 16",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 16)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 16)
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx8HImode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx8HImode)\n\
	   && nonmemory_operand (operands[1], VNx8HImode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx8HImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8HImode)
	   && nonmemory_operand (operands[1], VNx8HImode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx8HImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8HImode)
	   && nonmemory_operand (operands[1], VNx8HImode))))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
  { "(TARGET_FLOAT) && (AARCH64_ISA_F16)",
    __builtin_constant_p (
#line 6587 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT) && 
#line 58 "../../gcc/config/aarch64/iterators.md"
(AARCH64_ISA_F16))
    ? (int) (
#line 6587 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT) && 
#line 58 "../../gcc/config/aarch64/iterators.md"
(AARCH64_ISA_F16))
    : -1 },
#line 1368 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_movk_shift (rtx_mode_t (operands[2], DImode),\n\
		       rtx_mode_t (operands[3], DImode)) >= 0",
    __builtin_constant_p 
#line 1368 "../../gcc/config/aarch64/aarch64.md"
(aarch64_movk_shift (rtx_mode_t (operands[2], DImode),
		       rtx_mode_t (operands[3], DImode)) >= 0)
    ? (int) 
#line 1368 "../../gcc/config/aarch64/aarch64.md"
(aarch64_movk_shift (rtx_mode_t (operands[2], DImode),
		       rtx_mode_t (operands[3], DImode)) >= 0)
    : -1 },
  { "(TARGET_COMPLEX && !BYTES_BIG_ENDIAN) && (TARGET_SIMD_F16INST)",
    __builtin_constant_p (
#line 580 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX && !BYTES_BIG_ENDIAN) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    ? (int) (
#line 580 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX && !BYTES_BIG_ENDIAN) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    : -1 },
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DFmode)",
    __builtin_constant_p 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DFmode))
    ? (int) 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DFmode))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x22) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, V8QImode)",
    __builtin_constant_p 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V8QImode))
    ? (int) 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, V8QImode))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x23 & 0x41) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x41) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x41) == 0)
    : -1 },
#line 5628 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) < GET_MODE_BITSIZE (HImode)",
    __builtin_constant_p 
#line 5628 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (HImode))
    ? (int) 
#line 5628 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (HImode))
    : -1 },
  { "(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)) && ( true)",
    __builtin_constant_p (
#line 5209 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)) && 
#line 5211 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 5209 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)) && 
#line 5211 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x1DImode)\n\
       || register_operand (operands[1], V3x1DImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DImode)
       || register_operand (operands[1], V3x1DImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DImode)
       || register_operand (operands[1], V3x1DImode)))
    : -1 },
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, DFmode)",
    __builtin_constant_p 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, DFmode))
    ? (int) 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, DFmode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8HImode)\n\
       || register_operand (operands[1], V4x8HImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HImode)
       || register_operand (operands[1], V4x8HImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HImode)
       || register_operand (operands[1], V4x8HImode)))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V4SImode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V4SImode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V4SImode))))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4378 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 4387 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4378 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 4387 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx4HImode)\n\
       || register_operand (operands[2], VNx4HImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4HImode)
       || register_operand (operands[2], VNx4HImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4HImode)
       || register_operand (operands[2], VNx4HImode)))
    : -1 },
#line 1484 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (register_operand (operands[0], SFmode)\n\
    || aarch64_reg_or_fp_zero (operands[1], SFmode))",
    __builtin_constant_p 
#line 1484 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], SFmode)
    || aarch64_reg_or_fp_zero (operands[1], SFmode)))
    ? (int) 
#line 1484 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], SFmode)
    || aarch64_reg_or_fp_zero (operands[1], SFmode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8HFmode)\n\
       || register_operand (operands[1], V2x8HFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HFmode)
       || register_operand (operands[1], V2x8HFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HFmode)
       || register_operand (operands[1], V2x8HFmode)))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x1DFmode)\n\
       || register_operand (operands[1], V2x1DFmode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DFmode)
       || register_operand (operands[1], V2x1DFmode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DFmode)
       || register_operand (operands[1], V2x1DFmode)))
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V4SImode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V4SImode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V4SImode))))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 5804 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[4]),\n\
				      UINTVAL (operands[2]),\n\
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) )",
    __builtin_constant_p 
#line 5804 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[4]),
				      UINTVAL (operands[2]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) ))
    ? (int) 
#line 5804 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[4]),
				      UINTVAL (operands[2]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) ))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed\n\
  && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0)",
    __builtin_constant_p (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0))
    ? (int) (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx4HImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4HImode))))
    : -1 },
#line 7482 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && reload_completed",
    __builtin_constant_p 
#line 7482 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && reload_completed)
    ? (int) 
#line 7482 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && reload_completed)
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 >= 64",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 64)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 64)
    : -1 },
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * 16 / 8, 0, 63)",
    __builtin_constant_p 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 16 / 8, 0, 63))
    ? (int) 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 16 / 8, 0, 63))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4SFmode)\n\
       || register_operand (operands[1], V3x4SFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SFmode)
       || register_operand (operands[1], V3x4SFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SFmode)
       || register_operand (operands[1], V3x4SFmode)))
    : -1 },
#line 3246 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[3]) == -INTVAL (operands[2])",
    __builtin_constant_p 
#line 3246 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[3]) == -INTVAL (operands[2]))
    ? (int) 
#line 3246 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[3]) == -INTVAL (operands[2]))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8QImode)\n\
       || register_operand (operands[1], V3x8QImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8QImode)
       || register_operand (operands[1], V3x8QImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8QImode)
       || register_operand (operands[1], V3x8QImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x81 & 0x41) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x41) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x41) == 0)
    : -1 },
#line 6411 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 6411 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN)
    ? (int) 
#line 6411 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_SVE\n\
   && 8 >= 16\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
  { "(TARGET_SVE2) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 2179 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 2184 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 2179 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 2184 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[3], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[1], 0),\n\
				  GET_MODE_SIZE (DFmode)))",
    __builtin_constant_p 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (DFmode))))
    ? (int) 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (DFmode))))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4HImode)\n\
       || register_operand (operands[1], V4x4HImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HImode)
       || register_operand (operands[1], V4x4HImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HImode)
       || register_operand (operands[1], V4x4HImode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4HImode)\n\
       || register_operand (operands[1], V4x4HImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HImode)
       || register_operand (operands[1], V4x4HImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HImode)
       || register_operand (operands[1], V4x4HImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx6DFmode)\n\
       || register_operand (operands[2], VNx6DFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DFmode)
       || register_operand (operands[2], VNx6DFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DFmode)
       || register_operand (operands[2], VNx6DFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x27 & 0x81) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x81) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x81) == 0)
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2SFmode)\n\
       || register_operand (operands[2], VNx2SFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2SFmode)
       || register_operand (operands[2], VNx2SFmode)))
    : -1 },
  { "(TARGET_SIMD\n\
   && INTVAL (operands[5])\n\
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 16, 63))
    : -1 },
#line 1532 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && !aarch64_can_const_movi_rtx_p (operands[1], SFmode)\n\
   && !aarch64_float_const_representable_p (operands[1])\n\
   &&  aarch64_float_const_rtx_p (operands[1])",
    __builtin_constant_p 
#line 1532 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], SFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1]))
    ? (int) 
#line 1532 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], SFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1]))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2DImode)\n\
       || register_operand (operands[1], V2x2DImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DImode)
       || register_operand (operands[1], V2x2DImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DImode)
       || register_operand (operands[1], V2x2DImode)))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[2], DFmode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[2], DFmode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[2], DFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && 8 >= 64\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
  { "(TARGET_SVE) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 7178 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 7178 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x1DFmode)\n\
       || register_operand (operands[1], V3x1DFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DFmode)
       || register_operand (operands[1], V3x1DFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DFmode)
       || register_operand (operands[1], V3x1DFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx4QImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 6112 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT\n\
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,\n\
		GET_MODE_BITSIZE (DImode))",
    __builtin_constant_p 
#line 6112 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (DImode)))
    ? (int) 
#line 6112 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (DImode)))
    : -1 },
#line 873 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && reload_completed",
    __builtin_constant_p 
#line 873 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && reload_completed)
    ? (int) 
#line 873 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && reload_completed)
    : -1 },
#line 8781 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE_F64MM",
    __builtin_constant_p 
#line 8781 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE_F64MM)
    ? (int) 
#line 8781 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE_F64MM)
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 == 16",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 16)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 16)
    : -1 },
#line 4449 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_maxmin_plus_const (SMIN, operands, false)",
    __builtin_constant_p 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMIN, operands, false))
    ? (int) 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMIN, operands, false))
    : -1 },
#line 10635 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE",
    __builtin_constant_p 
#line 10635 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE)
    ? (int) 
#line 10635 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE)
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx16QImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V2DFmode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V2DFmode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V2DFmode) - 1))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2BFmode)\n\
       || register_operand (operands[2], VNx2BFmode))) && ( register_operand (operands[0], VNx2BFmode)\n\
   && register_operand (operands[2], VNx2BFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2BFmode)
   && register_operand (operands[2], VNx2BFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2BFmode)
   && register_operand (operands[2], VNx2BFmode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4HFmode)\n\
       || register_operand (operands[1], V4x4HFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HFmode)
       || register_operand (operands[1], V4x4HFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HFmode)
       || register_operand (operands[1], V4x4HFmode)))
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4SFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4SFmode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4SFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4SFmode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx64QImode)\n\
       || register_operand (operands[2], VNx64QImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx64QImode)
       || register_operand (operands[2], VNx64QImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx64QImode)
       || register_operand (operands[2], VNx64QImode)))
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 8 >= 64\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x27 & 0x22) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x81) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V8HFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V8HFmode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8HFmode)
       || aarch64_simd_reg_or_zero (operands[1], V8HFmode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8HFmode)
       || aarch64_simd_reg_or_zero (operands[1], V8HFmode)))
    : -1 },
#line 1138 "../../gcc/config/aarch64/aarch64.md"
  { "SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1138 "../../gcc/config/aarch64/aarch64.md"
(SIBLING_CALL_P (insn))
    ? (int) 
#line 1138 "../../gcc/config/aarch64/aarch64.md"
(SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_SVE && 64 >= 16) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 16) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 16) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 696 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_FLOAT && TARGET_SIMD",
    __builtin_constant_p 
#line 696 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_FLOAT && TARGET_SIMD)
    ? (int) 
#line 696 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_FLOAT && TARGET_SIMD)
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V8HFmode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8HFmode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8HFmode) - 1))
    : -1 },
  { "(TARGET_SVE && operands[0] != stack_pointer_rtx) && ( epilogue_completed\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && aarch64_split_add_offset_immediate (operands[2], DImode))",
    __builtin_constant_p (
#line 2181 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE && operands[0] != stack_pointer_rtx) && 
#line 2190 "../../gcc/config/aarch64/aarch64.md"
( epilogue_completed
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && aarch64_split_add_offset_immediate (operands[2], DImode)))
    ? (int) (
#line 2181 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE && operands[0] != stack_pointer_rtx) && 
#line 2190 "../../gcc/config/aarch64/aarch64.md"
( epilogue_completed
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && aarch64_split_add_offset_immediate (operands[2], DImode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[4]))\n\
   && (PLUS != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (PLUS != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (PLUS != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
  { "(TARGET_SVE2) && ( !CONSTANT_P (operands[5]))",
    __builtin_constant_p (
#line 1766 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 1770 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[5])))
    ? (int) (
#line 1766 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 1770 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[5])))
    : -1 },
#line 5575 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5575 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5575 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode))
    : -1 },
  { "(TARGET_FLOAT && TARGET_SIMD) && (TARGET_SIMD_F16INST)",
    __builtin_constant_p (
#line 696 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_FLOAT && TARGET_SIMD) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    ? (int) (
#line 696 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_FLOAT && TARGET_SIMD) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    : -1 },
  { "(!aarch64_move_imm (INTVAL (operands[2]), DImode)\n\
   && !aarch64_plus_operand (operands[2], DImode)\n\
   && !reload_completed) && ( true)",
    __builtin_constant_p (
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), DImode)
   && !aarch64_plus_operand (operands[2], DImode)
   && !reload_completed) && 
#line 4050 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), DImode)
   && !aarch64_plus_operand (operands[2], DImode)
   && !reload_completed) && 
#line 4050 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8DImode)\n\
       || register_operand (operands[2], VNx8DImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DImode)
       || register_operand (operands[2], VNx8DImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DImode)
       || register_operand (operands[2], VNx8DImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx12SImode)\n\
       || register_operand (operands[2], VNx12SImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SImode)
       || register_operand (operands[2], VNx12SImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SImode)
       || register_operand (operands[2], VNx12SImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 209 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, true, DFmode)",
    __builtin_constant_p 
#line 209 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, DFmode))
    ? (int) 
#line 209 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, DFmode))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[2], V2SImode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[2], V2SImode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[2], V2SImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x43 & 0x42) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0)
    : -1 },
#line 1532 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && !aarch64_can_const_movi_rtx_p (operands[1], HFmode)\n\
   && !aarch64_float_const_representable_p (operands[1])\n\
   &&  aarch64_float_const_rtx_p (operands[1])",
    __builtin_constant_p 
#line 1532 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], HFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1]))
    ? (int) 
#line 1532 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], HFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1]))
    : -1 },
  { "(TARGET_SVE) && (TARGET_SVE2)",
    __builtin_constant_p (
#line 4771 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    ? (int) (
#line 4771 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x43 & 0x22) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x22) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x22) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx4SImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4DFmode)\n\
       || register_operand (operands[2], VNx4DFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DFmode)
       || register_operand (operands[2], VNx4DFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DFmode)
       || register_operand (operands[2], VNx4DFmode)))
    : -1 },
#line 5850 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])\n\
   && INTVAL (operands[4])\n\
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])\n\
       <= GET_MODE_BITSIZE (SImode))",
    __builtin_constant_p 
#line 5850 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])
       <= GET_MODE_BITSIZE (SImode)))
    ? (int) 
#line 5850 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && (UINTVAL (operands[4]) + UINTVAL (operands[5])
       <= GET_MODE_BITSIZE (SImode)))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DImode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DImode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DImode) >= 64)
    : -1 },
#line 6112 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT\n\
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,\n\
		GET_MODE_BITSIZE (SImode))",
    __builtin_constant_p 
#line 6112 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (SImode)))
    ? (int) 
#line 6112 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && IN_RANGE (aarch64_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (SImode)))
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (HImode), 1, 15))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x24) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx48QImode)\n\
       || register_operand (operands[2], VNx48QImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx48QImode)
       || register_operand (operands[2], VNx48QImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx48QImode)
       || register_operand (operands[2], VNx48QImode)))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed)",
    __builtin_constant_p (
#line 809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 811 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 811 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7096 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_JSCVT",
    __builtin_constant_p 
#line 7096 "../../gcc/config/aarch64/aarch64.md"
(TARGET_JSCVT)
    ? (int) 
#line 7096 "../../gcc/config/aarch64/aarch64.md"
(TARGET_JSCVT)
    : -1 },
#line 55 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !STRICT_ALIGNMENT",
    __builtin_constant_p 
#line 55 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !STRICT_ALIGNMENT)
    ? (int) 
#line 55 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !STRICT_ALIGNMENT)
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x27 & 0x41) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x41) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x41) == 0)
    : -1 },
  { "(TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3])) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 2239 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3])) && 
#line 2244 "../../gcc/config/aarch64/aarch64-sve2.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 2239 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3])) && 
#line 2244 "../../gcc/config/aarch64/aarch64-sve2.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
  { "(TARGET_TLS_DESC && TARGET_SVE) && (ptr_mode == DImode)",
    __builtin_constant_p (
#line 7076 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    ? (int) (
#line 7076 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx8HImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx8HImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx8HImode)))
    : -1 },
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V2SImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V2SImode))",
    __builtin_constant_p 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2SImode)
       || aarch64_simd_reg_or_zero (operands[1], V2SImode)))
    ? (int) 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2SImode)
       || aarch64_simd_reg_or_zero (operands[1], V2SImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x41 & 0x81) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x81) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x81) == 0)
    : -1 },
  { "(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)\n\
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && ( true)",
    __builtin_constant_p (
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && 
#line 5237 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 5234 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[4]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
   && INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && 
#line 5237 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
  { "(!aarch64_move_imm (INTVAL (operands[1]), DImode)\n\
   && !aarch64_plus_operand (operands[1], DImode)\n\
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && ( true)",
    __builtin_constant_p (
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && 
#line 5281 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)) && 
#line 5281 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0",
    __builtin_constant_p 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0)
    ? (int) 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0)
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2DImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2DImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2DImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DImode))))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16HFmode)\n\
       || register_operand (operands[2], VNx16HFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HFmode)
       || register_operand (operands[2], VNx16HFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HFmode)
       || register_operand (operands[2], VNx16HFmode)))
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx4QImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4QImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4QImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4QImode))))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8QImode)\n\
       || register_operand (operands[1], V2x8QImode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8QImode)
       || register_operand (operands[1], V2x8QImode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8QImode)
       || register_operand (operands[1], V2x8QImode)))
    : -1 },
#line 50 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, SFmode)",
    __builtin_constant_p 
#line 50 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, SFmode))
    ? (int) 
#line 50 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, SFmode))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x23 & 0x42) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x42) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x42) == 0)
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V16QImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V16QImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V16QImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 8124 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_SHA2 && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 8124 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA2 && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 8124 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA2 && !BYTES_BIG_ENDIAN)
    : -1 },
#line 1532 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && !aarch64_can_const_movi_rtx_p (operands[1], DFmode)\n\
   && !aarch64_float_const_representable_p (operands[1])\n\
   &&  aarch64_float_const_rtx_p (operands[1])",
    __builtin_constant_p 
#line 1532 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], DFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1]))
    ? (int) 
#line 1532 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && !aarch64_can_const_movi_rtx_p (operands[1], DFmode)
   && !aarch64_float_const_representable_p (operands[1])
   &&  aarch64_float_const_rtx_p (operands[1]))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V8HFmode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8HFmode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8HFmode))))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[3], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[1], 0),\n\
				  GET_MODE_SIZE (V8QImode)))",
    __builtin_constant_p 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V8QImode))))
    ? (int) 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V8QImode))))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx4SFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4SFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4SFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4SFmode))))
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[3]))\n\
   && (PLUS != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (PLUS != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (PLUS != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4HImode)\n\
       || register_operand (operands[1], V3x4HImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HImode)
       || register_operand (operands[1], V3x4HImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HImode)
       || register_operand (operands[1], V3x4HImode)))
    : -1 },
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 > 32",
    __builtin_constant_p 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 32)
    ? (int) 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 32)
    : -1 },
#line 1277 "../../gcc/config/aarch64/aarch64.md"
  { "(register_operand (operands[0], SImode)\n\
    || aarch64_reg_or_zero (operands[1], SImode))",
    __builtin_constant_p 
#line 1277 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], SImode)
    || aarch64_reg_or_zero (operands[1], SImode)))
    ? (int) 
#line 1277 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], SImode)
    || aarch64_reg_or_zero (operands[1], SImode)))
    : -1 },
#line 2137 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_move_imm (INTVAL (operands[2]), SImode)",
    __builtin_constant_p 
#line 2137 "../../gcc/config/aarch64/aarch64.md"
(aarch64_move_imm (INTVAL (operands[2]), SImode))
    ? (int) 
#line 2137 "../../gcc/config/aarch64/aarch64.md"
(aarch64_move_imm (INTVAL (operands[2]), SImode))
    : -1 },
#line 5893 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) < 32",
    __builtin_constant_p 
#line 5893 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < 32)
    ? (int) 
#line 5893 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < 32)
    : -1 },
#line 7311 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))",
    __builtin_constant_p 
#line 7311 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    ? (int) 
#line 7311 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 == 8",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 8)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 8)
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 == 8",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 8)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 8)
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 5521 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode)\n\
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])\n\
       == GET_MODE_BITSIZE (DImode))",
    __builtin_constant_p 
#line 5521 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode)
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])
       == GET_MODE_BITSIZE (DImode)))
    ? (int) 
#line 5521 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode)
   && (UINTVAL (operands[3]) + UINTVAL (operands[4])
       == GET_MODE_BITSIZE (DImode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx32QImode)\n\
       || register_operand (operands[2], VNx32QImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32QImode)
       || register_operand (operands[2], VNx32QImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32QImode)
       || register_operand (operands[2], VNx32QImode)))
    : -1 },
#line 1203 "../../gcc/config/aarch64/aarch64.md"
  { "(register_operand (operands[0], QImode)\n\
    || aarch64_reg_or_zero (operands[1], QImode))",
    __builtin_constant_p 
#line 1203 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], QImode)
    || aarch64_reg_or_zero (operands[1], QImode)))
    ? (int) 
#line 1203 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], QImode)
    || aarch64_reg_or_zero (operands[1], QImode)))
    : -1 },
  { "(TARGET_SVE) && ( (!CONSTANT_P (operands[4]) || !CONSTANT_P (operands[5])))",
    __builtin_constant_p (
#line 4088 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4092 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[4]) || !CONSTANT_P (operands[5]))))
    ? (int) (
#line 4088 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4092 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[4]) || !CONSTANT_P (operands[5]))))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx24HImode)\n\
       || register_operand (operands[2], VNx24HImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HImode)
       || register_operand (operands[2], VNx24HImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HImode)
       || register_operand (operands[2], VNx24HImode)))
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 64 >= 32\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4378 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 4387 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4378 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 4387 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x42) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 > 16",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 16)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 16)
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[3]))\n\
   && (IOR != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (IOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (IOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( 1)",
    __builtin_constant_p (
#line 7393 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7399 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    ? (int) (
#line 7393 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7399 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5670 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5670 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8QImode)\n\
       || register_operand (operands[1], V3x8QImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8QImode)
       || register_operand (operands[1], V3x8QImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8QImode)
       || register_operand (operands[1], V3x8QImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x43 & 0x24) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x24) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x24) == 0)
    : -1 },
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0",
    __builtin_constant_p 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0)
    ? (int) 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (8, INTVAL (operands[2])) == 0)
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 >= 32",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 32)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 32)
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x27 & 0x22) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x22) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x22) == 0)
    : -1 },
#line 5724 "../../gcc/config/aarch64/aarch64.md"
  { "!(UINTVAL (operands[1]) == 0\n\
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])\n\
	 > GET_MODE_BITSIZE (DImode)))",
    __builtin_constant_p 
#line 5724 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (DImode))))
    ? (int) 
#line 5724 "../../gcc/config/aarch64/aarch64.md"
(!(UINTVAL (operands[1]) == 0
     || (UINTVAL (operands[2]) + UINTVAL (operands[1])
	 > GET_MODE_BITSIZE (DImode))))
    : -1 },
#line 5358 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD_RDMA",
    __builtin_constant_p 
#line 5358 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD_RDMA)
    ? (int) 
#line 5358 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD_RDMA)
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x43 & 0x81) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x81) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x81) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SFmode)",
    __builtin_constant_p 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SFmode))
    ? (int) 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SFmode))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx4SFmode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7207 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7207 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x43 & 0x21) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x21) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x21) == 0)
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x21 & 0x21) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0)
    : -1 },
#line 664 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_DOTPROD",
    __builtin_constant_p 
#line 664 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_DOTPROD)
    ? (int) 
#line 664 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_DOTPROD)
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2DFmode)
       || aarch64_simd_reg_or_zero (operands[1], V2DFmode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2DFmode)
       || aarch64_simd_reg_or_zero (operands[1], V2DFmode)))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8HFmode)\n\
       || register_operand (operands[1], V3x8HFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HFmode)
       || register_operand (operands[1], V3x8HFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HFmode)
       || register_operand (operands[1], V3x8HFmode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx12SImode)\n\
       || register_operand (operands[2], VNx12SImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SImode)
       || register_operand (operands[2], VNx12SImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SImode)
       || register_operand (operands[2], VNx12SImode)))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2SImode)\n\
       || register_operand (operands[1], V2x2SImode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SImode)
       || register_operand (operands[1], V2x2SImode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SImode)
       || register_operand (operands[1], V2x2SImode)))
    : -1 },
#line 8835 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_F16FML",
    __builtin_constant_p 
#line 8835 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_F16FML)
    ? (int) 
#line 8835 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_F16FML)
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 == 64",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 64)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 64)
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx2DImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2DImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2DImode)))
    : -1 },
  { "(aarch64_maxmin_plus_const (SMIN, operands, false)) && ( 1)",
    __builtin_constant_p (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMIN, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    ? (int) (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMIN, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( 1)",
    __builtin_constant_p (
#line 5774 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5779 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    ? (int) (
#line 5774 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5779 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    : -1 },
#line 5804 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[4]),\n\
				      UINTVAL (operands[2]),\n\
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) )",
    __builtin_constant_p 
#line 5804 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[4]),
				      UINTVAL (operands[2]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) ))
    ? (int) 
#line 5804 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[4]),
				      UINTVAL (operands[2]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[2]) ))
    : -1 },
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8BImode)\n\
       || register_operand (operands[1], VNx8BImode))",
    __builtin_constant_p 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8BImode)
       || register_operand (operands[1], VNx8BImode)))
    ? (int) 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8BImode)
       || register_operand (operands[1], VNx8BImode)))
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (BFmode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (BFmode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (BFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (BFmode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (BFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (BFmode), 0, 63))
    : -1 },
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * 8 / 8, 0, 63)",
    __builtin_constant_p 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 8 / 8, 0, 63))
    ? (int) 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 8 / 8, 0, 63))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5814 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 5809 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[3], operands[4])) && 
#line 5814 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3330 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && !rtx_equal_p (operands[2], operands[6])",
    __builtin_constant_p 
#line 3330 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[6]))
    ? (int) 
#line 3330 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[6]))
    : -1 },
  { "(TARGET_SVE\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && ( !rtx_equal_p (operands[4], operands[6]))",
    __builtin_constant_p (
#line 7842 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && 
#line 7847 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[4], operands[6])))
    ? (int) (
#line 7842 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && 
#line 7847 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[4], operands[6])))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2SImode)\n\
       || register_operand (operands[2], VNx2SImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2SImode)
       || register_operand (operands[2], VNx2SImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2SImode)
       || register_operand (operands[2], VNx2SImode)))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed\n\
  && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0)",
    __builtin_constant_p (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0))
    ? (int) (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0))
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x27 & 0x21) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x21) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x21) == 0)
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x43 & 0x22) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x22) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x22) == 0)
    : -1 },
#line 6063 "../../gcc/config/aarch64/aarch64.md"
  { "aarch_rev16_shleft_mask_imm_p (operands[3], DImode)\n\
   && aarch_rev16_shright_mask_imm_p (operands[2], DImode)",
    __builtin_constant_p 
#line 6063 "../../gcc/config/aarch64/aarch64.md"
(aarch_rev16_shleft_mask_imm_p (operands[3], DImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], DImode))
    ? (int) 
#line 6063 "../../gcc/config/aarch64/aarch64.md"
(aarch_rev16_shleft_mask_imm_p (operands[3], DImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], DImode))
    : -1 },
#line 7518 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FRINT && TARGET_FLOAT\n\
   && !(VECTOR_MODE_P (V2DFmode) && !TARGET_SIMD)",
    __builtin_constant_p 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V2DFmode) && !TARGET_SIMD))
    ? (int) 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V2DFmode) && !TARGET_SIMD))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx16QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 16, 63))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x81 & 0x41) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x41) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x41) == 0)
    : -1 },
#line 2540 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 2540 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 2540 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !BYTES_BIG_ENDIAN)
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V8HImode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8HImode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8HImode) - 1))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx4QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (SImode), 16, 63))
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V4SFmode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V4SFmode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V4SFmode) - 1))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed\n\
  && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0)",
    __builtin_constant_p (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0))
    ? (int) (
#line 4205 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 4220 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed
  && ENDIAN_LANE_N (16, INTVAL (operands[2])) == 0))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && register_operand (operands[2], VNx2DFmode)\n\
   && INTVAL (operands[4]) == SVE_RELAXED_GP)",
    __builtin_constant_p (
#line 5698 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5708 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[2], VNx2DFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    ? (int) (
#line 5698 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5708 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[2], VNx2DFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(!aarch64_move_imm (INTVAL (operands[2]), SImode)\n\
   && !aarch64_plus_operand (operands[2], SImode)\n\
   && !reload_completed) && ( true)",
    __builtin_constant_p (
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), SImode)
   && !aarch64_plus_operand (operands[2], SImode)
   && !reload_completed) && 
#line 4050 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), SImode)
   && !aarch64_plus_operand (operands[2], SImode)
   && !reload_completed) && 
#line 4050 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 4649 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4649 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ())
    ? (int) 
#line 4649 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ())
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2SFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2SFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2SFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SFmode))))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x1DImode)\n\
       || register_operand (operands[1], V4x1DImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DImode)
       || register_operand (operands[1], V4x1DImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DImode)
       || register_operand (operands[1], V4x1DImode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE) && ( (!rtx_equal_p (operands[1], operands[5])\n\
       || !rtx_equal_p (operands[1], operands[6])))",
    __builtin_constant_p (
#line 8346 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 8348 "../../gcc/config/aarch64/aarch64-sve.md"
( (!rtx_equal_p (operands[1], operands[5])
       || !rtx_equal_p (operands[1], operands[6]))))
    ? (int) (
#line 8346 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 8348 "../../gcc/config/aarch64/aarch64-sve.md"
( (!rtx_equal_p (operands[1], operands[5])
       || !rtx_equal_p (operands[1], operands[6]))))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2SFmode)\n\
       || register_operand (operands[1], V2x2SFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SFmode)
       || register_operand (operands[1], V2x2SFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SFmode)
       || register_operand (operands[1], V2x2SFmode)))
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx8HFmode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx8HFmode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx8HFmode).is_constant ())
    : -1 },
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DImode)",
    __builtin_constant_p 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DImode))
    ? (int) 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2DImode))
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 1, 15))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx16QImode)\n\
       || register_operand (operands[2], VNx16QImode))) && ( register_operand (operands[0], VNx16QImode)\n\
   && register_operand (operands[2], VNx16QImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16QImode)
       || register_operand (operands[2], VNx16QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx16QImode)
   && register_operand (operands[2], VNx16QImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16QImode)
       || register_operand (operands[2], VNx16QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx16QImode)
   && register_operand (operands[2], VNx16QImode)))
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (DFmode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (DFmode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (DFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (DFmode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (DFmode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (DFmode), 0, 63))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x16QImode)\n\
       || register_operand (operands[1], V4x16QImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x16QImode)
       || register_operand (operands[1], V4x16QImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x16QImode)
       || register_operand (operands[1], V4x16QImode)))
    : -1 },
#line 1508 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (register_operand (operands[0], DFmode)\n\
    || aarch64_reg_or_fp_zero (operands[1], DFmode))",
    __builtin_constant_p 
#line 1508 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], DFmode)
    || aarch64_reg_or_fp_zero (operands[1], DFmode)))
    ? (int) 
#line 1508 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], DFmode)
    || aarch64_reg_or_fp_zero (operands[1], DFmode)))
    : -1 },
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V8QImode)",
    __builtin_constant_p 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8QImode))
    ? (int) 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8QImode))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x42) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2BFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2BFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2BFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2BFmode))))
    : -1 },
#line 6211 "../../gcc/config/aarch64/aarch64.md"
  { "!HONOR_SIGNED_ZEROS (SFmode) && TARGET_FLOAT",
    __builtin_constant_p 
#line 6211 "../../gcc/config/aarch64/aarch64.md"
(!HONOR_SIGNED_ZEROS (SFmode) && TARGET_FLOAT)
    ? (int) 
#line 6211 "../../gcc/config/aarch64/aarch64.md"
(!HONOR_SIGNED_ZEROS (SFmode) && TARGET_FLOAT)
    : -1 },
#line 3515 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && !rtx_equal_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 3515 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[3]))
    ? (int) 
#line 3515 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[3]))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx24BFmode)\n\
       || register_operand (operands[2], VNx24BFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24BFmode)
       || register_operand (operands[2], VNx24BFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24BFmode)
       || register_operand (operands[2], VNx24BFmode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8QImode)\n\
       || register_operand (operands[1], V2x8QImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8QImode)
       || register_operand (operands[1], V2x8QImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8QImode)
       || register_operand (operands[1], V2x8QImode)))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2HFmode)\n\
       || register_operand (operands[2], VNx2HFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6096 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6096 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V4HFmode))",
    __builtin_constant_p (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V4HFmode)))
    ? (int) (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V4HFmode)))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[2], V2SFmode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[2], V2SFmode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[2], V2SFmode)))
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x27 & 0x41) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x41) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x41) == 0)
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx4HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8HFmode)\n\
       || register_operand (operands[1], V3x8HFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HFmode)
       || register_operand (operands[1], V3x8HFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HFmode)
       || register_operand (operands[1], V3x8HFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx8QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x27 & 0x81) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x81) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x81) == 0)
    : -1 },
  { "((TARGET_SVE) && (TARGET_SVE2)) && ( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4])))",
    __builtin_constant_p ((
#line 8025 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2844 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 8029 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4]))))
    ? (int) ((
#line 8025 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2844 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 8029 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4]))))
    : -1 },
#line 7518 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FRINT && TARGET_FLOAT\n\
   && !(VECTOR_MODE_P (V4SFmode) && !TARGET_SIMD)",
    __builtin_constant_p 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V4SFmode) && !TARGET_SIMD))
    ? (int) 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V4SFmode) && !TARGET_SIMD))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x81 & 0x24) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x24) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x24) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 == 64",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 64)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 == 64)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx16SImode)\n\
       || register_operand (operands[2], VNx16SImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SImode)
       || register_operand (operands[2], VNx16SImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SImode)
       || register_operand (operands[2], VNx16SImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x27 & 0x81) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x81) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x81) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 5755 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),\n\
				      UINTVAL (operands[4]),\n\
				      UINTVAL(operands[5]))",
    __builtin_constant_p 
#line 5755 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      UINTVAL(operands[5])))
    ? (int) 
#line 5755 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      UINTVAL(operands[5])))
    : -1 },
#line 137 "../../gcc/config/aarch64/iterators.md"
  { "ptr_mode == SImode || Pmode == SImode",
    __builtin_constant_p 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode)
    ? (int) 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode)
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE) && ( 1)",
    __builtin_constant_p (
#line 8276 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 8278 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    ? (int) (
#line 8276 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 8278 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    : -1 },
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, DFmode)",
    __builtin_constant_p 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, DFmode))
    ? (int) 
#line 74 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, DFmode))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx12SFmode)\n\
       || register_operand (operands[2], VNx12SFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SFmode)
       || register_operand (operands[2], VNx12SFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx12SFmode)
       || register_operand (operands[2], VNx12SFmode)))
    : -1 },
  { "(aarch64_maxmin_plus_const (UMIN, operands, false)) && ( 1)",
    __builtin_constant_p (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMIN, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    ? (int) (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMIN, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx2QImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
  { "(TARGET_SVE) && ( !rtx_equal_p (operands[1], operands[5]))",
    __builtin_constant_p (
#line 7348 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 7352 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[5])))
    ? (int) (
#line 7348 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 7352 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[5])))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx2QImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2QImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2QImode)))
    : -1 },
#line 2752 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_mode_t (operands[4], TImode)\n\
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode))",
    __builtin_constant_p 
#line 2752 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[4], TImode)
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode)))
    ? (int) 
#line 2752 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[4], TImode)
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode)))
    : -1 },
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[3]) * 64 / 8, 0, 255)",
    __builtin_constant_p 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 64 / 8, 0, 255))
    ? (int) 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 64 / 8, 0, 255))
    : -1 },
  { "(TARGET_SVE) && ( (!rtx_equal_p (operands[1], operands[4])\n\
       || !rtx_equal_p (operands[1], operands[5])))",
    __builtin_constant_p (
#line 5986 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5990 "../../gcc/config/aarch64/aarch64-sve.md"
( (!rtx_equal_p (operands[1], operands[4])
       || !rtx_equal_p (operands[1], operands[5]))))
    ? (int) (
#line 5986 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5990 "../../gcc/config/aarch64/aarch64-sve.md"
( (!rtx_equal_p (operands[1], operands[4])
       || !rtx_equal_p (operands[1], operands[5]))))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx2HImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 7547 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_TME",
    __builtin_constant_p 
#line 7547 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TME)
    ? (int) 
#line 7547 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TME)
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 == 8",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 8)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 == 8)
    : -1 },
#line 7663 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_MEMTAG",
    __builtin_constant_p 
#line 7663 "../../gcc/config/aarch64/aarch64.md"
(TARGET_MEMTAG)
    ? (int) 
#line 7663 "../../gcc/config/aarch64/aarch64.md"
(TARGET_MEMTAG)
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,\n\
		GET_MODE_BITSIZE (GET_MODE_INNER (V4SFmode)))",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V4SFmode))))
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V4SFmode))))
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V8BFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8BFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8BFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[3], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[1], 0),\n\
				  GET_MODE_SIZE (V4HImode)))",
    __builtin_constant_p 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V4HImode))))
    ? (int) 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V4HImode))))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x81) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 6647 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT\n\
   && ((GET_MODE_BITSIZE (SFmode) <= LONG_TYPE_SIZE)\n\
   || !flag_trapping_math || flag_fp_int_builtin_inexact)",
    __builtin_constant_p 
#line 6647 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && ((GET_MODE_BITSIZE (SFmode) <= LONG_TYPE_SIZE)
   || !flag_trapping_math || flag_fp_int_builtin_inexact))
    ? (int) 
#line 6647 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && ((GET_MODE_BITSIZE (SFmode) <= LONG_TYPE_SIZE)
   || !flag_trapping_math || flag_fp_int_builtin_inexact))
    : -1 },
#line 2365 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2_BITPERM",
    __builtin_constant_p 
#line 2365 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_BITPERM)
    ? (int) 
#line 2365 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_BITPERM)
    : -1 },
#line 209 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, true, SFmode)",
    __builtin_constant_p 
#line 209 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, SFmode))
    ? (int) 
#line 209 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, true, SFmode))
    : -1 },
#line 5209 "../../gcc/config/aarch64/aarch64.md"
  { "((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)",
    __builtin_constant_p 
#line 5209 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0))
    ? (int) 
#line 5209 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0))
    : -1 },
#line 1685 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_MOPS",
    __builtin_constant_p 
#line 1685 "../../gcc/config/aarch64/aarch64.md"
(TARGET_MOPS)
    ? (int) 
#line 1685 "../../gcc/config/aarch64/aarch64.md"
(TARGET_MOPS)
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x21) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x24) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])",
    __builtin_constant_p 
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5]))
    ? (int) 
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5]))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x27 & 0x42) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x42) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x42) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x21) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx4SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && 16 >= 64) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 64) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 64) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 > 64",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 64)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 64)
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[3]))\n\
   && (XOR != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (XOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (XOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2DFmode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5670 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 5670 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8HFmode)\n\
       || register_operand (operands[2], VNx8HFmode))) && ( register_operand (operands[0], VNx8HFmode)\n\
   && register_operand (operands[2], VNx8HFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8HFmode)
   && register_operand (operands[2], VNx8HFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8HFmode)
   && register_operand (operands[2], VNx8HFmode)))
    : -1 },
  { "(!aarch64_move_imm (INTVAL (operands[1]), SImode)\n\
   && !aarch64_plus_operand (operands[1], SImode)\n\
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4DImode)\n\
       || register_operand (operands[2], VNx4DImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DImode)
       || register_operand (operands[2], VNx4DImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DImode)
       || register_operand (operands[2], VNx4DImode)))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x16QImode)\n\
       || register_operand (operands[1], V4x16QImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x16QImode)
       || register_operand (operands[1], V4x16QImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x16QImode)
       || register_operand (operands[1], V4x16QImode)))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2QImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2QImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2QImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2QImode))))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx32QImode)\n\
       || register_operand (operands[2], VNx32QImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32QImode)
       || register_operand (operands[2], VNx32QImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32QImode)
       || register_operand (operands[2], VNx32QImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 1203 "../../gcc/config/aarch64/aarch64.md"
  { "(register_operand (operands[0], HImode)\n\
    || aarch64_reg_or_zero (operands[1], HImode))",
    __builtin_constant_p 
#line 1203 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], HImode)
    || aarch64_reg_or_zero (operands[1], HImode)))
    ? (int) 
#line 1203 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], HImode)
    || aarch64_reg_or_zero (operands[1], HImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx48QImode)\n\
       || register_operand (operands[2], VNx48QImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx48QImode)
       || register_operand (operands[2], VNx48QImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx48QImode)
       || register_operand (operands[2], VNx48QImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (DImode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (DImode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (DImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (DImode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (DImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (DImode), 0, 63))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x22) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 4279 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_CRC32",
    __builtin_constant_p 
#line 4279 "../../gcc/config/aarch64/aarch64.md"
(TARGET_CRC32)
    ? (int) 
#line 4279 "../../gcc/config/aarch64/aarch64.md"
(TARGET_CRC32)
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx4HImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx4HImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx4HImode)))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x1DFmode)\n\
       || register_operand (operands[1], V3x1DFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DFmode)
       || register_operand (operands[1], V3x1DFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DFmode)
       || register_operand (operands[1], V3x1DFmode)))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[2], SFmode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[2], SFmode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[2], SFmode)))
    : -1 },
  { "(TARGET_SVE2) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 878 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 882 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 878 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 882 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V8BFmode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8BFmode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V8BFmode))))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V8HFmode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8HFmode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V8HFmode, operands[1], operands[2]))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4BFmode)\n\
       || register_operand (operands[2], VNx4BFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode)))
    : -1 },
#line 1356 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[1]) < GET_MODE_BITSIZE (DImode)\n\
   && UINTVAL (operands[1]) % 16 == 0",
    __builtin_constant_p 
#line 1356 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) < GET_MODE_BITSIZE (DImode)
   && UINTVAL (operands[1]) % 16 == 0)
    ? (int) 
#line 1356 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) < GET_MODE_BITSIZE (DImode)
   && UINTVAL (operands[1]) % 16 == 0)
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2HFmode)\n\
       || register_operand (operands[2], VNx2HFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2HFmode)
       || register_operand (operands[2], VNx2HFmode)))
    : -1 },
  { "(TARGET_SVE) && ( !rtx_equal_p (operands[0], operands[9]))",
    __builtin_constant_p (
#line 2048 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2057 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[0], operands[9])))
    ? (int) (
#line 2048 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2057 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[0], operands[9])))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x27 & 0x21) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x21) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x21) == 0)
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V8BFmode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8BFmode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8BFmode))))
    : -1 },
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0",
    __builtin_constant_p 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0)
    ? (int) 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (4, INTVAL (operands[2])) == 0)
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8HImode)\n\
       || register_operand (operands[1], V3x8HImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HImode)
       || register_operand (operands[1], V3x8HImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8HImode)
       || register_operand (operands[1], V3x8HImode)))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 1760 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
				   XEXP (operands[1], 0),\n\
				   GET_MODE_SIZE (TFmode)))",
    __builtin_constant_p 
#line 1760 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
				   XEXP (operands[1], 0),
				   GET_MODE_SIZE (TFmode))))
    ? (int) 
#line 1760 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
				   XEXP (operands[1], 0),
				   GET_MODE_SIZE (TFmode))))
    : -1 },
#line 144 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, true, SImode)",
    __builtin_constant_p 
#line 144 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, SImode))
    ? (int) 
#line 144 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, true, SImode))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx2DImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2DImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x41) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 5507 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode) &&\n\
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (DImode))",
    __builtin_constant_p 
#line 5507 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode) &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (DImode)))
    ? (int) 
#line 5507 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < GET_MODE_BITSIZE (DImode) &&
   (UINTVAL (operands[3]) + UINTVAL (operands[4]) == GET_MODE_BITSIZE (DImode)))
    : -1 },
#line 1297 "../../gcc/config/aarch64/aarch64.md"
  { "CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), SImode)\n\
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0]))",
    __builtin_constant_p 
#line 1297 "../../gcc/config/aarch64/aarch64.md"
(CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), SImode)
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0])))
    ? (int) 
#line 1297 "../../gcc/config/aarch64/aarch64.md"
(CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), SImode)
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0])))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 3492 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && 
#line 3497 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 3492 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[3])) && 
#line 3497 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2DFmode)\n\
       || register_operand (operands[1], V2x2DFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DFmode)
       || register_operand (operands[1], V2x2DFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DFmode)
       || register_operand (operands[1], V2x2DFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x21) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 1, 15)",
    __builtin_constant_p 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 1, 15))
    ? (int) 
#line 2797 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DFmode), 1, 15))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx16QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx16QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "((TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx4QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 2223 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE && 32 >= 16) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 16) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 16) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[2], V2SFmode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[2], V2SFmode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[2], V2SFmode)))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x81 & 0x22) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x22) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x81 & 0x22) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x41) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7518 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FRINT && TARGET_FLOAT\n\
   && !(VECTOR_MODE_P (V2SFmode) && !TARGET_SIMD)",
    __builtin_constant_p 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V2SFmode) && !TARGET_SIMD))
    ? (int) 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (V2SFmode) && !TARGET_SIMD))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x43 & 0x42) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x42) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x42) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DFmode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DFmode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (DFmode) >= 64)
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2QImode)\n\
       || register_operand (operands[2], VNx2QImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2QImode)
       || register_operand (operands[2], VNx2QImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2QImode)
       || register_operand (operands[2], VNx2QImode)))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx4SImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx4SImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx4SImode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8DImode)\n\
       || register_operand (operands[2], VNx8DImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DImode)
       || register_operand (operands[2], VNx8DImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8DImode)
       || register_operand (operands[2], VNx8DImode)))
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx4SImode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx4SImode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx4SImode).is_constant ())
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V8HFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[4]))\n\
   && (IOR != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (IOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (IOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8HImode)\n\
       || register_operand (operands[1], V2x8HImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HImode)
       || register_operand (operands[1], V2x8HImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HImode)
       || register_operand (operands[1], V2x8HImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2SImode)\n\
       || register_operand (operands[2], VNx2SImode))) && ( register_operand (operands[0], VNx2SImode)\n\
   && register_operand (operands[2], VNx2SImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SImode)
       || register_operand (operands[2], VNx2SImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2SImode)
   && register_operand (operands[2], VNx2SImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SImode)
       || register_operand (operands[2], VNx2SImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2SImode)
   && register_operand (operands[2], VNx2SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 >= 64",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 64)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 64)
    : -1 },
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 > 32",
    __builtin_constant_p 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 32)
    ? (int) 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 > 32)
    : -1 },
#line 633 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4]))",
    __builtin_constant_p 
#line 633 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4])))
    ? (int) 
#line 633 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && !rtx_equal_p (operands[2], operands[4])
   && (CONSTANT_P (operands[4]) || !rtx_equal_p (operands[3], operands[4])))
    : -1 },
#line 8200 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && TARGET_SHA2",
    __builtin_constant_p 
#line 8200 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA2)
    ? (int) 
#line 8200 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && TARGET_SHA2)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx32HFmode)\n\
       || register_operand (operands[2], VNx32HFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HFmode)
       || register_operand (operands[2], VNx32HFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HFmode)
       || register_operand (operands[2], VNx32HFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && !rtx_equal_p (operands[2], operands[4])",
    __builtin_constant_p 
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4]))
    ? (int) 
#line 5664 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4]))
    : -1 },
  { "(TARGET_SVE) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1884 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 1888 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1884 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 1888 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
#line 1744 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[3], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[1], 0),\n\
				GET_MODE_SIZE (DFmode)))",
    __builtin_constant_p 
#line 1744 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (DFmode))))
    ? (int) 
#line 1744 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (DFmode))))
    : -1 },
#line 1794 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[2], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[0], 0),\n\
				GET_MODE_SIZE (DFmode)))",
    __builtin_constant_p 
#line 1794 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (DFmode))))
    ? (int) 
#line 1794 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[2], 0),
		 plus_constant (Pmode,
				XEXP (operands[0], 0),
				GET_MODE_SIZE (DFmode))))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x21) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x21) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V2SFmode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2SFmode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2SFmode, operands[1], operands[2]))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4BFmode)\n\
       || register_operand (operands[1], V4x4BFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4BFmode)
       || register_operand (operands[1], V4x4BFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4BFmode)
       || register_operand (operands[1], V4x4BFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4HFmode)\n\
       || register_operand (operands[2], VNx4HFmode))) && ( register_operand (operands[0], VNx4HFmode)\n\
   && register_operand (operands[2], VNx4HFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4HFmode)
   && register_operand (operands[2], VNx4HFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4HFmode)
   && register_operand (operands[2], VNx4HFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && 64 >= 16\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V2DImode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V2DImode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V2DImode))))
    : -1 },
#line 4159 "../../gcc/config/aarch64/aarch64.md"
  { "!((operands[3] == const1_rtx && operands[4] == constm1_rtx)\n\
     || (operands[3] == constm1_rtx && operands[4] == const1_rtx))",
    __builtin_constant_p 
#line 4159 "../../gcc/config/aarch64/aarch64.md"
(!((operands[3] == const1_rtx && operands[4] == constm1_rtx)
     || (operands[3] == constm1_rtx && operands[4] == const1_rtx)))
    ? (int) 
#line 4159 "../../gcc/config/aarch64/aarch64.md"
(!((operands[3] == const1_rtx && operands[4] == constm1_rtx)
     || (operands[3] == constm1_rtx && operands[4] == const1_rtx)))
    : -1 },
#line 2181 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_SVE && operands[0] != stack_pointer_rtx",
    __builtin_constant_p 
#line 2181 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE && operands[0] != stack_pointer_rtx)
    ? (int) 
#line 2181 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SVE && operands[0] != stack_pointer_rtx)
    : -1 },
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SFmode)",
    __builtin_constant_p 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SFmode))
    ? (int) 
#line 309 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, false, V2SFmode))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx8BFmode)\n\
       || register_operand (operands[2], VNx8BFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode)))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V8HFmode)\n\
       || register_operand (operands[2], V4HFmode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[2], V4HFmode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[2], V4HFmode)))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x1DImode)\n\
       || register_operand (operands[1], V4x1DImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DImode)
       || register_operand (operands[1], V4x1DImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DImode)
       || register_operand (operands[1], V4x1DImode)))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V4SFmode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V4SFmode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V4SFmode, operands[1], operands[2]))
    : -1 },
#line 5952 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2])\n\
  && (INTVAL (operands[2]) + popcount_hwi (INTVAL (operands[3])))\n\
      == GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5952 "../../gcc/config/aarch64/aarch64.md"
(aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2])
  && (INTVAL (operands[2]) + popcount_hwi (INTVAL (operands[3])))
      == GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5952 "../../gcc/config/aarch64/aarch64.md"
(aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2])
  && (INTVAL (operands[2]) + popcount_hwi (INTVAL (operands[3])))
      == GET_MODE_BITSIZE (SImode))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V2DImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V2DImode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2DImode)
       || aarch64_simd_reg_or_zero (operands[1], V2DImode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2DImode)
       || aarch64_simd_reg_or_zero (operands[1], V2DImode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2SFmode)\n\
       || register_operand (operands[1], V4x2SFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SFmode)
       || register_operand (operands[1], V4x2SFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SFmode)
       || register_operand (operands[1], V4x2SFmode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8BFmode)\n\
       || register_operand (operands[1], V2x8BFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8BFmode)
       || register_operand (operands[1], V2x8BFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8BFmode)
       || register_operand (operands[1], V2x8BFmode)))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[2], V8QImode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[2], V8QImode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[2], V8QImode)))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x42) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx16QImode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx16QImode)\n\
	   && nonmemory_operand (operands[1], VNx16QImode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx16QImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx16QImode)
	   && nonmemory_operand (operands[1], VNx16QImode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx16QImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx16QImode)
	   && nonmemory_operand (operands[1], VNx16QImode))))
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (BFmode), 16, 63))
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2DImode)\n\
       || register_operand (operands[1], V2x2DImode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DImode)
       || register_operand (operands[1], V2x2DImode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2DImode)
       || register_operand (operands[1], V2x2DImode)))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V16QImode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V16QImode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V16QImode))))
    : -1 },
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * 64 / 8, 0, 63)",
    __builtin_constant_p 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 64 / 8, 0, 63))
    ? (int) 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 64 / 8, 0, 63))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx8HImode)\n\
       || register_operand (operands[2], VNx8HImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8HImode)
       || register_operand (operands[2], VNx8HImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx8HImode)
       || register_operand (operands[2], VNx8HImode)))
    : -1 },
#line 5893 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) < 64",
    __builtin_constant_p 
#line 5893 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < 64)
    ? (int) 
#line 5893 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) < 64)
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 7317 "../../gcc/config/aarch64/aarch64.md"
  { "optimize > 0 && flag_modulo_sched",
    __builtin_constant_p 
#line 7317 "../../gcc/config/aarch64/aarch64.md"
(optimize > 0 && flag_modulo_sched)
    ? (int) 
#line 7317 "../../gcc/config/aarch64/aarch64.md"
(optimize > 0 && flag_modulo_sched)
    : -1 },
  { "(TARGET_SVE\n\
   && 8 >= 8\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
#line 5787 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),\n\
				      UINTVAL (operands[4]),\n\
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) )",
    __builtin_constant_p 
#line 5787 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) ))
    ? (int) 
#line 5787 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) ))
    : -1 },
  { "(aarch64_maxmin_plus_const (SMAX, operands, false)) && ( 1)",
    __builtin_constant_p (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMAX, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    ? (int) (
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMAX, operands, false)) && 
#line 4451 "../../gcc/config/aarch64/aarch64.md"
( 1))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x22) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1847 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (SFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
  { "(TARGET_FLOAT) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 6763 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 6763 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && register_operand (operands[2], VNx8HFmode)\n\
   && INTVAL (operands[4]) == SVE_RELAXED_GP)",
    __builtin_constant_p (
#line 5698 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5708 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[2], VNx8HFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    ? (int) (
#line 5698 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 5708 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[2], VNx8HFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    : -1 },
  { "(TARGET_SVE\n\
   && 64 >= 32\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 32
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
#line 3225 "../../gcc/config/aarch64/aarch64.md"
  { "!reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && INTVAL (operands[3]) == -INTVAL (operands[2])",
    __builtin_constant_p 
#line 3225 "../../gcc/config/aarch64/aarch64.md"
(!reg_overlap_mentioned_p (operands[0], operands[1])
   && INTVAL (operands[3]) == -INTVAL (operands[2]))
    ? (int) 
#line 3225 "../../gcc/config/aarch64/aarch64.md"
(!reg_overlap_mentioned_p (operands[0], operands[1])
   && INTVAL (operands[3]) == -INTVAL (operands[2]))
    : -1 },
#line 7518 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FRINT && TARGET_FLOAT\n\
   && !(VECTOR_MODE_P (DFmode) && !TARGET_SIMD)",
    __builtin_constant_p 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (DFmode) && !TARGET_SIMD))
    ? (int) 
#line 7518 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FRINT && TARGET_FLOAT
   && !(VECTOR_MODE_P (DFmode) && !TARGET_SIMD))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8BFmode)\n\
       || register_operand (operands[2], VNx8BFmode))) && ( register_operand (operands[0], VNx8BFmode)\n\
   && register_operand (operands[2], VNx8BFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8BFmode)
   && register_operand (operands[2], VNx8BFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8BFmode)
   && register_operand (operands[2], VNx8BFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
  { "(TARGET_SIMD) && (TARGET_SIMD_F16INST)",
    __builtin_constant_p (
#line 6720 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    ? (int) (
#line 6720 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 151 "../../gcc/config/aarch64/iterators.md"
(TARGET_SIMD_F16INST))
    : -1 },
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (QImode) >= 64",
    __builtin_constant_p 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (QImode) >= 64)
    ? (int) 
#line 2838 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && INTVAL (operands[2]) * GET_MODE_SIZE (QImode) >= 64)
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4HFmode)\n\
       || register_operand (operands[2], VNx4HFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HFmode)
       || register_operand (operands[2], VNx4HFmode)))
    : -1 },
  { "(TARGET_SIMD\n\
   && INTVAL (operands[5])\n\
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 1972 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[3], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (SImode)))",
    __builtin_constant_p 
#line 1972 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (SImode))))
    ? (int) 
#line 1972 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (SImode))))
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4SImode)\n\
       || register_operand (operands[1], V2x4SImode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SImode)
       || register_operand (operands[1], V2x4SImode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SImode)
       || register_operand (operands[1], V2x4SImode)))
    : -1 },
  { "(TARGET_SVE && BYTES_BIG_ENDIAN) && ( reload_completed)",
    __builtin_constant_p (
#line 773 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && BYTES_BIG_ENDIAN) && 
#line 775 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 773 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && BYTES_BIG_ENDIAN) && 
#line 775 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 5923 "../../gcc/config/aarch64/aarch64.md"
  { "IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),\n\
	     1, GET_MODE_BITSIZE (DImode) - 1)",
    __builtin_constant_p 
#line 5923 "../../gcc/config/aarch64/aarch64.md"
(IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
	     1, GET_MODE_BITSIZE (DImode) - 1))
    ? (int) 
#line 5923 "../../gcc/config/aarch64/aarch64.md"
(IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
	     1, GET_MODE_BITSIZE (DImode) - 1))
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 5261 "../../gcc/config/aarch64/aarch64.md"
  { "((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)",
    __builtin_constant_p 
#line 5261 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0))
    ? (int) 
#line 5261 "../../gcc/config/aarch64/aarch64.md"
(((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,\n\
		GET_MODE_BITSIZE (GET_MODE_INNER (V2DFmode)))",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V2DFmode))))
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V2DFmode))))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 5770 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[5]),\n\
				      UINTVAL (operands[2]),\n\
				      UINTVAL(operands[3]))",
    __builtin_constant_p 
#line 5770 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[5]),
				      UINTVAL (operands[2]),
				      UINTVAL(operands[3])))
    ? (int) 
#line 5770 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[5]),
				      UINTVAL (operands[2]),
				      UINTVAL(operands[3])))
    : -1 },
#line 2868 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_uxt_size (INTVAL (operands[2]), INTVAL (operands[3])) != 0",
    __builtin_constant_p 
#line 2868 "../../gcc/config/aarch64/aarch64.md"
(aarch64_uxt_size (INTVAL (operands[2]), INTVAL (operands[3])) != 0)
    ? (int) 
#line 2868 "../../gcc/config/aarch64/aarch64.md"
(aarch64_uxt_size (INTVAL (operands[2]), INTVAL (operands[3])) != 0)
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V16QImode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V16QImode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V16QImode))))
    : -1 },
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2SFmode)
       || aarch64_simd_reg_or_zero (operands[1], V2SFmode)))
    ? (int) 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V2SFmode)
       || aarch64_simd_reg_or_zero (operands[1], V2SFmode)))
    : -1 },
  { "(TARGET_SIMD) && ( REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0])))",
    __builtin_constant_p (
#line 3688 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 3694 "../../gcc/config/aarch64/aarch64-simd.md"
( REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0]))))
    ? (int) (
#line 3688 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 3694 "../../gcc/config/aarch64/aarch64-simd.md"
( REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0]))))
    : -1 },
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && !rtx_equal_p (operands[4], operands[5])",
    __builtin_constant_p 
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5]))
    ? (int) 
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5]))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7])))",
    __builtin_constant_p (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    ? (int) (
#line 1653 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1657 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[6]) || !CONSTANT_P (operands[7]))))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x43 & 0x21) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x21) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x21) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
  { "((!aarch64_move_imm (INTVAL (operands[1]), SImode)\n\
   && !aarch64_plus_operand (operands[1], SImode)\n\
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)) && ( true)",
    __builtin_constant_p ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2DImode)\n\
       || register_operand (operands[2], VNx2DImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DImode)
       || register_operand (operands[2], VNx2DImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2DImode)
       || register_operand (operands[2], VNx2DImode)))
    : -1 },
  { "(TARGET_TLS_DESC && !TARGET_SVE) && (ptr_mode == DImode)",
    __builtin_constant_p (
#line 7060 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && !TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    ? (int) (
#line 7060 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && !TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    : -1 },
#line 7556 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_TME && (UINTVAL (operands[0]) <= 65535)",
    __builtin_constant_p 
#line 7556 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TME && (UINTVAL (operands[0]) <= 65535))
    ? (int) 
#line 7556 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TME && (UINTVAL (operands[0]) <= 65535))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x43 & 0x24) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x24) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x24) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8SFmode)\n\
       || register_operand (operands[2], VNx8SFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SFmode)
       || register_operand (operands[2], VNx8SFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8SFmode)
       || register_operand (operands[2], VNx8SFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2HImode)\n\
       || register_operand (operands[2], VNx2HImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HImode)
       || register_operand (operands[2], VNx2HImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HImode)
       || register_operand (operands[2], VNx2HImode)))
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V4SImode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V4SImode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V4SImode) - 1))
    : -1 },
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 > 16",
    __builtin_constant_p 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 16)
    ? (int) 
#line 9507 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 16)
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4SFmode)\n\
       || register_operand (operands[1], V2x4SFmode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SFmode)
       || register_operand (operands[1], V2x4SFmode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SFmode)
       || register_operand (operands[1], V2x4SFmode)))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x43 & 0x41) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x41) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x41) == 0)
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx4SFmode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7436 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7436 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4SFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 == 64",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 64)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 == 64)
    : -1 },
#line 1461 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (register_operand (operands[0], BFmode)\n\
    || aarch64_reg_or_fp_zero (operands[1], BFmode))",
    __builtin_constant_p 
#line 1461 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], BFmode)
    || aarch64_reg_or_fp_zero (operands[1], BFmode)))
    ? (int) 
#line 1461 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], BFmode)
    || aarch64_reg_or_fp_zero (operands[1], BFmode)))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V2DImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2DImode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2DImode, operands[1], operands[2]))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx8QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4HImode)\n\
       || register_operand (operands[1], V3x4HImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HImode)
       || register_operand (operands[1], V3x4HImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HImode)
       || register_operand (operands[1], V3x4HImode)))
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V4SImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 6476 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FP_F16INST",
    __builtin_constant_p 
#line 6476 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FP_F16INST)
    ? (int) 
#line 6476 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FP_F16INST)
    : -1 },
#line 3047 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 >= 8",
    __builtin_constant_p 
#line 3047 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 8)
    ? (int) 
#line 3047 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 8)
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V2DImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
  { "(aarch64_stack_protector_guard != SSP_GLOBAL) && (ptr_mode == DImode)",
    __builtin_constant_p (
#line 7228 "../../gcc/config/aarch64/aarch64.md"
(aarch64_stack_protector_guard != SSP_GLOBAL) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    ? (int) (
#line 7228 "../../gcc/config/aarch64/aarch64.md"
(aarch64_stack_protector_guard != SSP_GLOBAL) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode))
    : -1 },
#line 2617 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2_SHA3",
    __builtin_constant_p 
#line 2617 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_SHA3)
    ? (int) 
#line 2617 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2_SHA3)
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4BFmode)\n\
       || register_operand (operands[1], V3x4BFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4BFmode)
       || register_operand (operands[1], V3x4BFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4BFmode)
       || register_operand (operands[1], V3x4BFmode)))
    : -1 },
#line 4449 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_maxmin_plus_const (UMAX, operands, false)",
    __builtin_constant_p 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMAX, operands, false))
    ? (int) 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (UMAX, operands, false))
    : -1 },
#line 2125 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_move_imm (INTVAL (operands[2]), DImode)",
    __builtin_constant_p 
#line 2125 "../../gcc/config/aarch64/aarch64.md"
(aarch64_move_imm (INTVAL (operands[2]), DImode))
    ? (int) 
#line 2125 "../../gcc/config/aarch64/aarch64.md"
(aarch64_move_imm (INTVAL (operands[2]), DImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2SFmode)\n\
       || register_operand (operands[1], V3x2SFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SFmode)
       || register_operand (operands[1], V3x2SFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SFmode)
       || register_operand (operands[1], V3x2SFmode)))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4SImode)\n\
       || register_operand (operands[1], V3x4SImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SImode)
       || register_operand (operands[1], V3x4SImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SImode)
       || register_operand (operands[1], V3x4SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x41) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x41 & 0x24) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x24) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x24) == 0)
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[3]))\n\
   && (PLUS != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (PLUS != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (PLUS != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
  { "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[3], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[1], 0),\n\
				  GET_MODE_SIZE (V2SImode)))",
    __builtin_constant_p 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V2SImode))))
    ? (int) 
#line 198 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[3], 0),
		   plus_constant (Pmode,
				  XEXP (operands[1], 0),
				  GET_MODE_SIZE (V2SImode))))
    : -1 },
#line 5736 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[1]) <= 32",
    __builtin_constant_p 
#line 5736 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) <= 32)
    ? (int) 
#line 5736 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) <= 32)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4SImode)\n\
       || register_operand (operands[2], VNx4SImode))) && ( register_operand (operands[0], VNx4SImode)\n\
   && register_operand (operands[2], VNx4SImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SImode)
       || register_operand (operands[2], VNx4SImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4SImode)
   && register_operand (operands[2], VNx4SImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SImode)
       || register_operand (operands[2], VNx4SImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4SImode)
   && register_operand (operands[2], VNx4SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x22) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x22) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8BFmode)\n\
       || register_operand (operands[1], V3x8BFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8BFmode)
       || register_operand (operands[1], V3x8BFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8BFmode)
       || register_operand (operands[1], V3x8BFmode)))
    : -1 },
  { "(TARGET_SVE) && ( !rtx_equal_p (operands[5], operands[6]))",
    __builtin_constant_p (
#line 2435 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2439 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[5], operands[6])))
    ? (int) (
#line 2435 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2439 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[5], operands[6])))
    : -1 },
  { "((TARGET_SVE) && (TARGET_SVE2)) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p ((
#line 4791 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4795 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[4])))
    ? (int) ((
#line 4791 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4795 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4BFmode)\n\
       || register_operand (operands[1], V2x4BFmode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4BFmode)
       || register_operand (operands[1], V2x4BFmode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4BFmode)
       || register_operand (operands[1], V2x4BFmode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx6DImode)\n\
       || register_operand (operands[2], VNx6DImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DImode)
       || register_operand (operands[2], VNx6DImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DImode)
       || register_operand (operands[2], VNx6DImode)))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2DFmode)\n\
       || register_operand (operands[1], V4x2DFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DFmode)
       || register_operand (operands[1], V4x2DFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DFmode)
       || register_operand (operands[1], V4x2DFmode)))
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 5279 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)",
    __builtin_constant_p 
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode))
    ? (int) 
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8QImode)\n\
       || register_operand (operands[2], VNx8QImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8QImode)
       || register_operand (operands[2], VNx8QImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8QImode)
       || register_operand (operands[2], VNx8QImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && 64 >= 8\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && ( !rtx_equal_p (operands[2], operands[4]))",
    __builtin_constant_p (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    ? (int) (
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 8
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])) && 
#line 9839 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[2], operands[4])))
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x24) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x24) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 >= 16",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 16)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 >= 16)
    : -1 },
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[2], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[0], 0),\n\
				  GET_MODE_SIZE (V4HImode)))",
    __builtin_constant_p 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V4HImode))))
    ? (int) 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V4HImode))))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x81) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x81) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4SFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
  { "(TARGET_TLS_DESC && TARGET_SVE) && (ptr_mode == SImode)",
    __builtin_constant_p (
#line 7076 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    ? (int) (
#line 7076 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    : -1 },
#line 289 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, false, DFmode)",
    __builtin_constant_p 
#line 289 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, DFmode))
    ? (int) 
#line 289 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, DFmode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4SImode)\n\
       || register_operand (operands[1], V2x4SImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SImode)
       || register_operand (operands[1], V2x4SImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SImode)
       || register_operand (operands[1], V2x4SImode)))
    : -1 },
#line 2262 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 2262 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3]))
    ? (int) 
#line 2262 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2 && !rtx_equal_p (operands[2], operands[3]))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x42) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x42) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 5051 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[1]) > 0\n\
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))\n\
	<= GET_MODE_BITSIZE (DImode))\n\
   && aarch64_bitmask_imm (\n\
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],\n\
						 operands[2])),\n\
	DImode)",
    __builtin_constant_p 
#line 5051 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[1]) > 0
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))
	<= GET_MODE_BITSIZE (DImode))
   && aarch64_bitmask_imm (
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],
						 operands[2])),
	DImode))
    ? (int) 
#line 5051 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[1]) > 0
   && ((INTVAL (operands[1]) + INTVAL (operands[2]))
	<= GET_MODE_BITSIZE (DImode))
   && aarch64_bitmask_imm (
	UINTVAL (aarch64_mask_from_zextract_ops (operands[1],
						 operands[2])),
	DImode))
    : -1 },
#line 1712 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_SIMD || TARGET_MOPS",
    __builtin_constant_p 
#line 1712 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD || TARGET_MOPS)
    ? (int) 
#line 1712 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD || TARGET_MOPS)
    : -1 },
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V8QImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V8QImode))",
    __builtin_constant_p 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8QImode)
       || aarch64_simd_reg_or_zero (operands[1], V8QImode)))
    ? (int) 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8QImode)
       || aarch64_simd_reg_or_zero (operands[1], V8QImode)))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V4SImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V4SImode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V4SImode, operands[1], operands[2]))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x41) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1832 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == GET_MODE_SIZE (DImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16SFmode)\n\
       || register_operand (operands[2], VNx16SFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SFmode)
       || register_operand (operands[2], VNx16SFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SFmode)
       || register_operand (operands[2], VNx16SFmode)))
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[4]))\n\
   && (AND != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (AND != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (AND != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x21 & 0x24) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x24) == 0)
    : -1 },
  { "(TARGET_SVE && 64 >= 64) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 64) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 64) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V8HFmode)\n\
       || register_operand (operands[2], V4HFmode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[2], V4HFmode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[2], V4HFmode)))
    : -1 },
#line 269 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_adjust_ok_for_ldpstp (operands, false, SImode)",
    __builtin_constant_p 
#line 269 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, SImode))
    ? (int) 
#line 269 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_adjust_ok_for_ldpstp (operands, false, SImode))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx32HImode)\n\
       || register_operand (operands[2], VNx32HImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HImode)
       || register_operand (operands[2], VNx32HImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx32HImode)
       || register_operand (operands[2], VNx32HImode)))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx2DFmode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7436 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 7430 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[4], operands[5])) && 
#line 7436 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx2DFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,\n\
		GET_MODE_BITSIZE (GET_MODE_INNER (V2SFmode)))",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V2SFmode))))
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && IN_RANGE (aarch64_vec_fpconst_pow_of_2 (operands[2]), 1,
		GET_MODE_BITSIZE (GET_MODE_INNER (V2SFmode))))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx8BFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8BFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8BFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8BFmode))))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( !CONSTANT_P (operands[7]))",
    __builtin_constant_p (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    ? (int) (
#line 1682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1686 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[7])))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx4SImode)\n\
       || register_operand (operands[2], VNx4SImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4SImode)
       || register_operand (operands[2], VNx4SImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4SImode)
       || register_operand (operands[2], VNx4SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x42) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x42) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx6DFmode)\n\
       || register_operand (operands[2], VNx6DFmode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DFmode)
       || register_operand (operands[2], VNx6DFmode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx6DFmode)
       || register_operand (operands[2], VNx6DFmode)))
    : -1 },
#line 5197 "../../gcc/config/aarch64/aarch64.md"
  { "(~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0",
    __builtin_constant_p 
#line 5197 "../../gcc/config/aarch64/aarch64.md"
((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
    ? (int) 
#line 5197 "../../gcc/config/aarch64/aarch64.md"
((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1)) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4HFmode)\n\
       || register_operand (operands[1], V2x4HFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HFmode)
       || register_operand (operands[1], V2x4HFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HFmode)
       || register_operand (operands[1], V2x4HFmode)))
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DImode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DImode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 1315 "../../gcc/config/aarch64/aarch64.md"
  { "(register_operand (operands[0], DImode)\n\
    || aarch64_reg_or_zero (operands[1], DImode))",
    __builtin_constant_p 
#line 1315 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], DImode)
    || aarch64_reg_or_zero (operands[1], DImode)))
    ? (int) 
#line 1315 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], DImode)
    || aarch64_reg_or_zero (operands[1], DImode)))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x16QImode)\n\
       || register_operand (operands[1], V3x16QImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x16QImode)
       || register_operand (operands[1], V3x16QImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x16QImode)
       || register_operand (operands[1], V3x16QImode)))
    : -1 },
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[3]) * 32 / 8, 0, 255)",
    __builtin_constant_p 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 32 / 8, 0, 255))
    ? (int) 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 32 / 8, 0, 255))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2BFmode)\n\
       || register_operand (operands[2], VNx2BFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode)))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx2SImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2SImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx2SImode)))
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 16 > 8",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 8)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 16 > 8)
    : -1 },
#line 5770 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[5]),\n\
				      UINTVAL (operands[2]),\n\
				      UINTVAL(operands[3]))",
    __builtin_constant_p 
#line 5770 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[5]),
				      UINTVAL (operands[2]),
				      UINTVAL(operands[3])))
    ? (int) 
#line 5770 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[5]),
				      UINTVAL (operands[2]),
				      UINTVAL(operands[3])))
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx4SFmode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx4SFmode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx4SFmode).is_constant ())
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx4SFmode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx4SFmode)\n\
	   && nonmemory_operand (operands[1], VNx4SFmode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx4SFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx4SFmode)
	   && nonmemory_operand (operands[1], VNx4SFmode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx4SFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx4SFmode)
	   && nonmemory_operand (operands[1], VNx4SFmode))))
    : -1 },
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (INTVAL (XVECEXP (operands[2], 0, 0))\n\
       * GET_MODE_SIZE (QImode)) % 16 == 0\n\
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))\n\
		* GET_MODE_SIZE (QImode), 0, 63)",
    __builtin_constant_p 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (QImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (QImode), 0, 63))
    ? (int) 
#line 8710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (INTVAL (XVECEXP (operands[2], 0, 0))
       * GET_MODE_SIZE (QImode)) % 16 == 0
   && IN_RANGE (INTVAL (XVECEXP (operands[2], 0, 0))
		* GET_MODE_SIZE (QImode), 0, 63))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x41 & 0x41) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x41) == 0)
    : -1 },
#line 8520 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 >= 8",
    __builtin_constant_p 
#line 8520 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 8)
    ? (int) 
#line 8520 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 8)
    : -1 },
  { "(TARGET_FLOAT) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 6763 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 6763 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 138 "../../gcc/config/aarch64/iterators.md"
  { "ptr_mode == DImode || Pmode == DImode",
    __builtin_constant_p 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode)
    ? (int) 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode)
    : -1 },
#line 2520 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])",
    __builtin_constant_p 
#line 2520 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6]))
    ? (int) 
#line 2520 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6]))
    : -1 },
#line 2772 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_mode_t (operands[5], TImode)\n\
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode))",
    __builtin_constant_p 
#line 2772 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[5], TImode)
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode)))
    ? (int) 
#line 2772 "../../gcc/config/aarch64/aarch64.md"
(rtx_mode_t (operands[5], TImode)
   == (wi::shwi (1, TImode) << (unsigned) GET_MODE_BITSIZE (DImode)))
    : -1 },
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HImode)",
    __builtin_constant_p 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HImode))
    ? (int) 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HImode))
    : -1 },
#line 4765 "../../gcc/config/aarch64/aarch64.md"
  { "reload_completed && FP_REGNUM_P (REGNO (operands[0]))",
    __builtin_constant_p 
#line 4765 "../../gcc/config/aarch64/aarch64.md"
(reload_completed && FP_REGNUM_P (REGNO (operands[0])))
    ? (int) 
#line 4765 "../../gcc/config/aarch64/aarch64.md"
(reload_completed && FP_REGNUM_P (REGNO (operands[0])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x27 & 0x21) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0)
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx2DFmode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx2DFmode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx2DFmode).is_constant ())
    : -1 },
  { "(TARGET_SVE) && ( MEM_P (operands[1]))",
    __builtin_constant_p (
#line 2516 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2521 "../../gcc/config/aarch64/aarch64-sve.md"
( MEM_P (operands[1])))
    ? (int) (
#line 2516 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 2521 "../../gcc/config/aarch64/aarch64-sve.md"
( MEM_P (operands[1])))
    : -1 },
  { "(TARGET_TLS_DESC) && (ptr_mode == SImode)",
    __builtin_constant_p (
#line 7035 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    ? (int) (
#line 7035 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx8HFmode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7207 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 7196 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 7207 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx8HFmode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
  { "(aarch64_stack_protector_guard != SSP_GLOBAL) && (ptr_mode == SImode)",
    __builtin_constant_p (
#line 7228 "../../gcc/config/aarch64/aarch64.md"
(aarch64_stack_protector_guard != SSP_GLOBAL) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    ? (int) (
#line 7228 "../../gcc/config/aarch64/aarch64.md"
(aarch64_stack_protector_guard != SSP_GLOBAL) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4SFmode)\n\
       || register_operand (operands[1], V3x4SFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SFmode)
       || register_operand (operands[1], V3x4SFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SFmode)
       || register_operand (operands[1], V3x4SFmode)))
    : -1 },
#line 5910 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_mask_and_shift_for_ubfiz_p (SImode, operands[3], operands[2])",
    __builtin_constant_p 
#line 5910 "../../gcc/config/aarch64/aarch64.md"
(aarch64_mask_and_shift_for_ubfiz_p (SImode, operands[3], operands[2]))
    ? (int) 
#line 5910 "../../gcc/config/aarch64/aarch64.md"
(aarch64_mask_and_shift_for_ubfiz_p (SImode, operands[3], operands[2]))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8QImode)\n\
       || register_operand (operands[1], V4x8QImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8QImode)
       || register_operand (operands[1], V4x8QImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8QImode)
       || register_operand (operands[1], V4x8QImode)))
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[3]))\n\
   && (AND != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (AND != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (AND != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x1DImode)\n\
       || register_operand (operands[1], V3x1DImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DImode)
       || register_operand (operands[1], V3x1DImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x1DImode)
       || register_operand (operands[1], V3x1DImode)))
    : -1 },
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 114 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2DFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2HImode)\n\
       || register_operand (operands[2], VNx2HImode))) && ( register_operand (operands[0], VNx2HImode)\n\
   && register_operand (operands[2], VNx2HImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HImode)
       || register_operand (operands[2], VNx2HImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2HImode)
   && register_operand (operands[2], VNx2HImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2HImode)
       || register_operand (operands[2], VNx2HImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2HImode)
   && register_operand (operands[2], VNx2HImode)))
    : -1 },
#line 5787 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),\n\
				      UINTVAL (operands[4]),\n\
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) )",
    __builtin_constant_p 
#line 5787 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) ))
    ? (int) 
#line 5787 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (DImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      HOST_WIDE_INT_M1U << UINTVAL (operands[4]) ))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4HImode)\n\
       || register_operand (operands[1], V2x4HImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HImode)
       || register_operand (operands[1], V2x4HImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HImode)
       || register_operand (operands[1], V2x4HImode)))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx4QImode)\n\
       || register_operand (operands[2], VNx4QImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4QImode)
       || register_operand (operands[2], VNx4QImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4QImode)
       || register_operand (operands[2], VNx4QImode)))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x27 & 0x42) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x42) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x42) == 0)
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (QImode), 16, 63))
    : -1 },
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SImode)",
    __builtin_constant_p 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SImode))
    ? (int) 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2SImode))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx8HImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8HImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8HImode))))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4HImode)\n\
       || register_operand (operands[1], V2x4HImode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HImode)
       || register_operand (operands[1], V2x4HImode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4HImode)
       || register_operand (operands[1], V2x4HImode)))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V2SFmode))",
    __builtin_constant_p (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V2SFmode)))
    ? (int) (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V2SFmode)))
    : -1 },
#line 580 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_COMPLEX && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 580 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 580 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
    : -1 },
#line 1744 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[3], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[1], 0),\n\
				GET_MODE_SIZE (DImode)))",
    __builtin_constant_p 
#line 1744 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (DImode))))
    ? (int) 
#line 1744 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (DImode))))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4HImode)\n\
       || register_operand (operands[2], VNx4HImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HImode)
       || register_operand (operands[2], VNx4HImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HImode)
       || register_operand (operands[2], VNx4HImode)))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2SImode)\n\
       || register_operand (operands[1], V4x2SImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SImode)
       || register_operand (operands[1], V4x2SImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SImode)
       || register_operand (operands[1], V4x2SImode)))
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x24) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "((!aarch64_move_imm (INTVAL (operands[1]), SImode)\n\
   && !aarch64_plus_operand (operands[1], SImode)\n\
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)) && ( true)",
    __builtin_constant_p ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), SImode)
   && !aarch64_plus_operand (operands[1], SImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[2], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[0], 0),\n\
				  GET_MODE_SIZE (V2SImode)))",
    __builtin_constant_p 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V2SImode))))
    ? (int) 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V2SImode))))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V2SImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2SImode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V2SImode, operands[1], operands[2]))
    : -1 },
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HFmode)",
    __builtin_constant_p 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HFmode))
    ? (int) 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V4HFmode))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx2QImode)\n\
       || register_operand (operands[2], VNx2QImode))) && ( register_operand (operands[0], VNx2QImode)\n\
   && register_operand (operands[2], VNx2QImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2QImode)
       || register_operand (operands[2], VNx2QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2QImode)
   && register_operand (operands[2], VNx2QImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2QImode)
       || register_operand (operands[2], VNx2QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx2QImode)
   && register_operand (operands[2], VNx2QImode)))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V4BFmode))",
    __builtin_constant_p (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V4BFmode)))
    ? (int) (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V4BFmode)))
    : -1 },
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && GET_MODE_NUNITS (VNx16QImode).is_constant ()",
    __builtin_constant_p 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx16QImode).is_constant ())
    ? (int) 
#line 8637 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && GET_MODE_NUNITS (VNx16QImode).is_constant ())
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 1336 "../../gcc/config/aarch64/aarch64.md"
  { "CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), DImode)\n\
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0]))",
    __builtin_constant_p 
#line 1336 "../../gcc/config/aarch64/aarch64.md"
(CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), DImode)
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0])))
    ? (int) 
#line 1336 "../../gcc/config/aarch64/aarch64.md"
(CONST_INT_P (operands[1]) && !aarch64_move_imm (INTVAL (operands[1]), DImode)
    && REG_P (operands[0]) && GP_REGNUM_P (REGNO (operands[0])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4SFmode)\n\
       || register_operand (operands[2], VNx4SFmode))) && ( register_operand (operands[0], VNx4SFmode)\n\
   && register_operand (operands[2], VNx4SFmode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4SFmode)
   && register_operand (operands[2], VNx4SFmode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4SFmode)
       || register_operand (operands[2], VNx4SFmode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4SFmode)
   && register_operand (operands[2], VNx4SFmode)))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[2], SFmode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[2], SFmode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[2], SFmode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16HImode)\n\
       || register_operand (operands[2], VNx16HImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HImode)
       || register_operand (operands[2], VNx16HImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HImode)
       || register_operand (operands[2], VNx16HImode)))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 == 64",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 64)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 64)
    : -1 },
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[2], V2SImode))",
    __builtin_constant_p 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[2], V2SImode)))
    ? (int) 
#line 4283 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[2], V2SImode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2DFmode)\n\
       || register_operand (operands[1], V4x2DFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DFmode)
       || register_operand (operands[1], V4x2DFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2DFmode)
       || register_operand (operands[1], V4x2DFmode)))
    : -1 },
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 8 >= 8",
    __builtin_constant_p 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 8)
    ? (int) 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 8 >= 8)
    : -1 },
#line 4449 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_maxmin_plus_const (SMAX, operands, false)",
    __builtin_constant_p 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMAX, operands, false))
    ? (int) 
#line 4449 "../../gcc/config/aarch64/aarch64.md"
(aarch64_maxmin_plus_const (SMAX, operands, false))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x22) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x22) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(TARGET_TLS_DESC && !TARGET_SVE) && (ptr_mode == SImode)",
    __builtin_constant_p (
#line 7060 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && !TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    ? (int) (
#line 7060 "../../gcc/config/aarch64/aarch64.md"
(TARGET_TLS_DESC && !TARGET_SVE) && 
#line 142 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2SFmode)\n\
       || register_operand (operands[1], V3x2SFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SFmode)
       || register_operand (operands[1], V3x2SFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SFmode)
       || register_operand (operands[1], V3x2SFmode)))
    : -1 },
#line 3063 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD_F16INST",
    __builtin_constant_p 
#line 3063 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD_F16INST)
    ? (int) 
#line 3063 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD_F16INST)
    : -1 },
#line 9125 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_BF16_FP",
    __builtin_constant_p 
#line 9125 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_BF16_FP)
    ? (int) 
#line 9125 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_BF16_FP)
    : -1 },
#line 9407 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE_BF16",
    __builtin_constant_p 
#line 9407 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE_BF16)
    ? (int) 
#line 9407 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE_BF16)
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x81 & 0x81) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x81) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x81) == 0)
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4DImode)\n\
       || register_operand (operands[2], VNx4DImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DImode)
       || register_operand (operands[2], VNx4DImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4DImode)
       || register_operand (operands[2], VNx4DImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4HFmode)\n\
       || register_operand (operands[1], V4x4HFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HFmode)
       || register_operand (operands[1], V4x4HFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4HFmode)
       || register_operand (operands[1], V4x4HFmode)))
    : -1 },
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 32 >= 32",
    __builtin_constant_p 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 32)
    ? (int) 
#line 9168 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 32)
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx8HFmode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx8HFmode)\n\
	   && nonmemory_operand (operands[1], VNx8HFmode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx8HFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8HFmode)
	   && nonmemory_operand (operands[1], VNx8HFmode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx8HFmode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx8HFmode)
	   && nonmemory_operand (operands[1], VNx8HFmode))))
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V4HImode))",
    __builtin_constant_p (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V4HImode)))
    ? (int) (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V4HImode)))
    : -1 },
#line 5910 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2])",
    __builtin_constant_p 
#line 5910 "../../gcc/config/aarch64/aarch64.md"
(aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2]))
    ? (int) 
#line 5910 "../../gcc/config/aarch64/aarch64.md"
(aarch64_mask_and_shift_for_ubfiz_p (DImode, operands[3], operands[2]))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2BFmode)\n\
       || register_operand (operands[2], VNx2BFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2BFmode)
       || register_operand (operands[2], VNx2BFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx2QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x43 & 0x24) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x24) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x24) == 0)
    : -1 },
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[3]) * 8 / 8, 0, 255)",
    __builtin_constant_p 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 8 / 8, 0, 255))
    ? (int) 
#line 8794 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[3]) * 8 / 8, 0, 255))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x2SImode)\n\
       || register_operand (operands[1], V4x2SImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SImode)
       || register_operand (operands[1], V4x2SImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x2SImode)
       || register_operand (operands[1], V4x2SImode)))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8QImode)\n\
       || register_operand (operands[1], V4x8QImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8QImode)
       || register_operand (operands[1], V4x8QImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8QImode)
       || register_operand (operands[1], V4x8QImode)))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 >= 8",
    __builtin_constant_p 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 8)
    ? (int) 
#line 9787 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 >= 8)
    : -1 },
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 16, 63)",
    __builtin_constant_p 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 16, 63))
    ? (int) 
#line 2823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * GET_MODE_SIZE (DImode), 16, 63))
    : -1 },
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))",
    __builtin_constant_p 
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    ? (int) 
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    : -1 },
#line 6418 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (TARGET_FP_F16INST || TARGET_SIMD)",
    __builtin_constant_p 
#line 6418 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (TARGET_FP_F16INST || TARGET_SIMD))
    ? (int) 
#line 6418 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (TARGET_FP_F16INST || TARGET_SIMD))
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx4BFmode)\n\
       || register_operand (operands[2], VNx4BFmode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx4BFmode)
       || register_operand (operands[2], VNx4BFmode)))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx8QImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8QImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8QImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx8QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx8QImode))))
    : -1 },
#line 6776 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT",
    __builtin_constant_p 
#line 6776 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT)
    ? (int) 
#line 6776 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT)
    : -1 },
#line 5197 "../../gcc/config/aarch64/aarch64.md"
  { "(~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0",
    __builtin_constant_p 
#line 5197 "../../gcc/config/aarch64/aarch64.md"
((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
    ? (int) 
#line 5197 "../../gcc/config/aarch64/aarch64.md"
((~INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1)) == 0)
    : -1 },
  { "(TARGET_SIMD) && ( reload_completed && aarch64_simd_register (operands[0], V2SImode))",
    __builtin_constant_p (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V2SImode)))
    ? (int) (
#line 339 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 343 "../../gcc/config/aarch64/aarch64-simd.md"
( reload_completed && aarch64_simd_register (operands[0], V2SImode)))
    : -1 },
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && aarch64_mergeable_load_pair_p (V16QImode, operands[1], operands[2])",
    __builtin_constant_p 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V16QImode, operands[1], operands[2]))
    ? (int) 
#line 4234 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && aarch64_mergeable_load_pair_p (V16QImode, operands[1], operands[2]))
    : -1 },
  { "(TARGET_SVE2\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && ( !rtx_equal_p (operands[4], operands[6]))",
    __builtin_constant_p (
#line 2520 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && 
#line 2523 "../../gcc/config/aarch64/aarch64-sve2.md"
( !rtx_equal_p (operands[4], operands[6])))
    ? (int) (
#line 2520 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && aarch64_sve_same_pred_for_ptest_p (&operands[4], &operands[6])) && 
#line 2523 "../../gcc/config/aarch64/aarch64-sve2.md"
( !rtx_equal_p (operands[4], operands[6])))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8HFmode)\n\
       || register_operand (operands[2], VNx8HFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HFmode)
       || register_operand (operands[2], VNx8HFmode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8HImode)\n\
       || register_operand (operands[2], VNx8HImode))) && ( register_operand (operands[0], VNx8HImode)\n\
   && register_operand (operands[2], VNx8HImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HImode)
       || register_operand (operands[2], VNx8HImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8HImode)
   && register_operand (operands[2], VNx8HImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8HImode)
       || register_operand (operands[2], VNx8HImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8HImode)
   && register_operand (operands[2], VNx8HImode)))
    : -1 },
  { "(TARGET_SVE) && ( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4])))",
    __builtin_constant_p (
#line 8025 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 8029 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4]))))
    ? (int) (
#line 8025 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 8029 "../../gcc/config/aarch64/aarch64-sve.md"
( (!CONSTANT_P (operands[3]) || !CONSTANT_P (operands[4]))))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x24) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x24) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8BFmode)\n\
       || register_operand (operands[1], V4x8BFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8BFmode)
       || register_operand (operands[1], V4x8BFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8BFmode)
       || register_operand (operands[1], V4x8BFmode)))
    : -1 },
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx4BImode)\n\
       || register_operand (operands[1], VNx4BImode))",
    __builtin_constant_p 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4BImode)
       || register_operand (operands[1], VNx4BImode)))
    ? (int) 
#line 954 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4BImode)
       || register_operand (operands[1], VNx4BImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx64QImode)\n\
       || register_operand (operands[2], VNx64QImode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx64QImode)
       || register_operand (operands[2], VNx64QImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx64QImode)
       || register_operand (operands[2], VNx64QImode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 64 >= 64\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 64
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2SImode)\n\
       || register_operand (operands[1], V3x2SImode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SImode)
       || register_operand (operands[1], V3x2SImode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SImode)
       || register_operand (operands[1], V3x2SImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( 1)",
    __builtin_constant_p (
#line 6040 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6049 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    ? (int) (
#line 6040 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 6049 "../../gcc/config/aarch64/aarch64-sve.md"
( 1))
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[3]))\n\
   && (XOR != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (XOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[3]))
   && (XOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 7214 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2SImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2SImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2SImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2SImode))))
    : -1 },
  { "(TARGET_SIMD) && (AARCH64_ISA_F16)",
    __builtin_constant_p (
#line 7976 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 58 "../../gcc/config/aarch64/iterators.md"
(AARCH64_ISA_F16))
    ? (int) (
#line 7976 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD) && 
#line 58 "../../gcc/config/aarch64/iterators.md"
(AARCH64_ISA_F16))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && register_operand (operands[3], VNx8HFmode)\n\
   && INTVAL (operands[4]) == SVE_RELAXED_GP)",
    __builtin_constant_p (
#line 6123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 6132 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[3], VNx8HFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    ? (int) (
#line 6123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 6132 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[3], VNx8HFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    : -1 },
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2SFmode)\n\
       || register_operand (operands[1], V2x2SFmode))",
    __builtin_constant_p 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SFmode)
       || register_operand (operands[1], V2x2SFmode)))
    ? (int) 
#line 7258 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SFmode)
       || register_operand (operands[1], V2x2SFmode)))
    : -1 },
  { "(TARGET_SVE && 32 >= 64) && ( !rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 64) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    ? (int) (
#line 9187 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 32 >= 64) && 
#line 9192 "../../gcc/config/aarch64/aarch64-sve.md"
( !rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 910 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_use_return_insn_p ()",
    __builtin_constant_p 
#line 910 "../../gcc/config/aarch64/aarch64.md"
(aarch64_use_return_insn_p ())
    ? (int) 
#line 910 "../../gcc/config/aarch64/aarch64.md"
(aarch64_use_return_insn_p ())
    : -1 },
#line 2209 "../../gcc/config/aarch64/aarch64.md"
  { "epilogue_completed",
    __builtin_constant_p 
#line 2209 "../../gcc/config/aarch64/aarch64.md"
(epilogue_completed)
    ? (int) 
#line 2209 "../../gcc/config/aarch64/aarch64.md"
(epilogue_completed)
    : -1 },
#line 4046 "../../gcc/config/aarch64/aarch64.md"
  { "!aarch64_move_imm (INTVAL (operands[2]), SImode)\n\
   && !aarch64_plus_operand (operands[2], SImode)\n\
   && !reload_completed",
    __builtin_constant_p 
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), SImode)
   && !aarch64_plus_operand (operands[2], SImode)
   && !reload_completed)
    ? (int) 
#line 4046 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[2]), SImode)
   && !aarch64_plus_operand (operands[2], SImode)
   && !reload_completed)
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x23 & 0x21) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0)
    : -1 },
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[2], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[0], 0),\n\
				  GET_MODE_SIZE (V8QImode)))",
    __builtin_constant_p 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V8QImode))))
    ? (int) 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (V8QImode))))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x21 & 0x81) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x81) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x81) == 0)
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8HFmode)\n\
       || register_operand (operands[1], V4x8HFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HFmode)
       || register_operand (operands[1], V4x8HFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HFmode)
       || register_operand (operands[1], V4x8HFmode)))
    : -1 },
#line 1461 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT && (register_operand (operands[0], HFmode)\n\
    || aarch64_reg_or_fp_zero (operands[1], HFmode))",
    __builtin_constant_p 
#line 1461 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], HFmode)
    || aarch64_reg_or_fp_zero (operands[1], HFmode)))
    ? (int) 
#line 1461 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT && (register_operand (operands[0], HFmode)
    || aarch64_reg_or_fp_zero (operands[1], HFmode)))
    : -1 },
#line 6211 "../../gcc/config/aarch64/aarch64.md"
  { "!HONOR_SIGNED_ZEROS (DFmode) && TARGET_FLOAT",
    __builtin_constant_p 
#line 6211 "../../gcc/config/aarch64/aarch64.md"
(!HONOR_SIGNED_ZEROS (DFmode) && TARGET_FLOAT)
    ? (int) 
#line 6211 "../../gcc/config/aarch64/aarch64.md"
(!HONOR_SIGNED_ZEROS (DFmode) && TARGET_FLOAT)
    : -1 },
#line 4985 "../../gcc/config/aarch64/aarch64.md"
  { "reload_completed",
    __builtin_constant_p 
#line 4985 "../../gcc/config/aarch64/aarch64.md"
(reload_completed)
    ? (int) 
#line 4985 "../../gcc/config/aarch64/aarch64.md"
(reload_completed)
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[2], SImode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[2], SImode)))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2SImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2SImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4HFmode)\n\
       || register_operand (operands[1], V3x4HFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HFmode)
       || register_operand (operands[1], V3x4HFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4HFmode)
       || register_operand (operands[1], V3x4HFmode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x21 & 0x41) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x41) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x41) == 0)
    : -1 },
  { "(TARGET_SVE && (~0x27 & 0x21) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x21) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx8QImode)\n\
       || register_operand (operands[2], VNx8QImode))) && ( register_operand (operands[0], VNx8QImode)\n\
   && register_operand (operands[2], VNx8QImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8QImode)
       || register_operand (operands[2], VNx8QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8QImode)
   && register_operand (operands[2], VNx8QImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8QImode)
       || register_operand (operands[2], VNx8QImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx8QImode)
   && register_operand (operands[2], VNx8QImode)))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x43 & 0x81) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x81) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x81) == 0)
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx2SImode)\n\
       || register_operand (operands[2], VNx2SImode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SImode)
       || register_operand (operands[2], VNx2SImode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx2SImode)
       || register_operand (operands[2], VNx2SImode)))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx4QImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx4QImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x27 & 0x24) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x27 & 0x24) == 0)
    : -1 },
#line 5736 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[1]) <= 8",
    __builtin_constant_p 
#line 5736 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) <= 8)
    ? (int) 
#line 5736 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[1]) <= 8)
    : -1 },
  { "(TARGET_SVE && (~0x81 & 0x81) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x81) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (VNx2DImode == VNx16QImode || !BYTES_BIG_ENDIAN)\n\
   && ((lra_in_progress || reload_completed)\n\
       || (register_operand (operands[0], VNx2DImode)\n\
	   && nonmemory_operand (operands[1], VNx2DImode)))",
    __builtin_constant_p 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx2DImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx2DImode)
	   && nonmemory_operand (operands[1], VNx2DImode))))
    ? (int) 
#line 692 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (VNx2DImode == VNx16QImode || !BYTES_BIG_ENDIAN)
   && ((lra_in_progress || reload_completed)
       || (register_operand (operands[0], VNx2DImode)
	   && nonmemory_operand (operands[1], VNx2DImode))))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x43 & 0x21) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x21) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x21) == 0)
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx16QImode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx16QImode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx16QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx16QImode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx16QImode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx16QImode))))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x41) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x41) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx4HImode)\n\
       || register_operand (operands[2], VNx4HImode))) && ( register_operand (operands[0], VNx4HImode)\n\
   && register_operand (operands[2], VNx4HImode))",
    __builtin_constant_p (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HImode)
       || register_operand (operands[2], VNx4HImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4HImode)
   && register_operand (operands[2], VNx4HImode)))
    ? (int) (
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx4HImode)
       || register_operand (operands[2], VNx4HImode))) && 
#line 758 "../../gcc/config/aarch64/aarch64-sve.md"
( register_operand (operands[0], VNx4HImode)
   && register_operand (operands[2], VNx4HImode)))
    : -1 },
#line 543 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_COMPLEX",
    __builtin_constant_p 
#line 543 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX)
    ? (int) 
#line 543 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_COMPLEX)
    : -1 },
#line 6063 "../../gcc/config/aarch64/aarch64.md"
  { "aarch_rev16_shleft_mask_imm_p (operands[3], SImode)\n\
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode)",
    __builtin_constant_p 
#line 6063 "../../gcc/config/aarch64/aarch64.md"
(aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
    ? (int) 
#line 6063 "../../gcc/config/aarch64/aarch64.md"
(aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
    : -1 },
#line 5279 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2SImode)\n\
       || register_operand (operands[1], V3x2SImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SImode)
       || register_operand (operands[1], V3x2SImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2SImode)
       || register_operand (operands[1], V3x2SImode)))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[2], V4HImode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[2], V4HImode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[2], V4HImode)))
    : -1 },
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && IN_RANGE (INTVAL (operands[2]) * 32 / 8, 0, 63)",
    __builtin_constant_p 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 32 / 8, 0, 63))
    ? (int) 
#line 8682 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && IN_RANGE (INTVAL (operands[2]) * 32 / 8, 0, 63))
    : -1 },
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0",
    __builtin_constant_p 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0)
    ? (int) 
#line 187 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && ENDIAN_LANE_N (2, INTVAL (operands[2])) == 0)
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x1DFmode)\n\
       || register_operand (operands[1], V4x1DFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DFmode)
       || register_operand (operands[1], V4x1DFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x1DFmode)
       || register_operand (operands[1], V4x1DFmode)))
    : -1 },
  { "(TARGET_SVE && !rtx_equal_p (operands[2], operands[6])) && ( !CONSTANT_P (operands[5]))",
    __builtin_constant_p (
#line 3330 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[6])) && 
#line 3335 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[5])))
    ? (int) (
#line 3330 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[6])) && 
#line 3335 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[5])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x2DFmode)\n\
       || register_operand (operands[1], V3x2DFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DFmode)
       || register_operand (operands[1], V3x2DFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x2DFmode)
       || register_operand (operands[1], V3x2DFmode)))
    : -1 },
#line 1403 "../../gcc/config/aarch64/aarch64.md"
  { "(register_operand (operands[0], TImode)\n\
    || aarch64_reg_or_zero (operands[1], TImode))",
    __builtin_constant_p 
#line 1403 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], TImode)
    || aarch64_reg_or_zero (operands[1], TImode)))
    ? (int) 
#line 1403 "../../gcc/config/aarch64/aarch64.md"
((register_operand (operands[0], TImode)
    || aarch64_reg_or_zero (operands[1], TImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[5])\n\
   && !rtx_equal_p (operands[3], operands[5])\n\
   && !rtx_equal_p (operands[4], operands[5])) && ( reload_completed\n\
   && register_operand (operands[5], VNx4HImode)\n\
   && !rtx_equal_p (operands[0], operands[5]))",
    __builtin_constant_p (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[5])))
    ? (int) (
#line 6823 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])) && 
#line 6834 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[5], VNx4HImode)
   && !rtx_equal_p (operands[0], operands[5])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x1DImode)\n\
       || register_operand (operands[1], V2x1DImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DImode)
       || register_operand (operands[1], V2x1DImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x1DImode)
       || register_operand (operands[1], V2x1DImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x41 & 0x21) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x21) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x21) == 0)
    : -1 },
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V4HFmode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V4HFmode))",
    __builtin_constant_p 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4HFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4HFmode)))
    ? (int) 
#line 122 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V4HFmode)
       || aarch64_simd_reg_or_zero (operands[1], V4HFmode)))
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V2DImode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V2DImode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V2DImode))))
    : -1 },
  { "(TARGET_SIMD\n\
   && INTVAL (operands[5])\n\
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1912 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD
   && INTVAL (operands[5])
      == INTVAL (operands[4]) + GET_MODE_SIZE (TFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x22) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x22) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
#line 166 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "aarch64_operands_ok_for_ldpstp (operands, false, SImode)",
    __builtin_constant_p 
#line 166 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, SImode))
    ? (int) 
#line 166 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(aarch64_operands_ok_for_ldpstp (operands, false, SImode))
    : -1 },
  { "(TARGET_SVE && (~0x41 & 0x21) == 0) && ( !CONSTANT_P (operands[3]))",
    __builtin_constant_p (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    ? (int) (
#line 1364 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x41 & 0x21) == 0) && 
#line 1366 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[3])))
    : -1 },
  { "(TARGET_SVE) && (TARGET_SVE_F32MM)",
    __builtin_constant_p (
#line 7541 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 497 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE_F32MM))
    ? (int) (
#line 7541 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 497 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE_F32MM))
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx8BFmode)\n\
       || register_operand (operands[2], VNx8BFmode))",
    __builtin_constant_p 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode)))
    ? (int) 
#line 751 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx8BFmode)
       || register_operand (operands[2], VNx8BFmode)))
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 8 >= 16\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 8 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
#line 1727 "../../gcc/config/aarch64/aarch64.md"
  { "rtx_equal_p (XEXP (operands[3], 0),\n\
		 plus_constant (Pmode,\n\
				XEXP (operands[1], 0),\n\
				GET_MODE_SIZE (SImode)))",
    __builtin_constant_p 
#line 1727 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (SImode))))
    ? (int) 
#line 1727 "../../gcc/config/aarch64/aarch64.md"
(rtx_equal_p (XEXP (operands[3], 0),
		 plus_constant (Pmode,
				XEXP (operands[1], 0),
				GET_MODE_SIZE (SImode))))
    : -1 },
#line 5867 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])\n\
   && INTVAL (operands[4])\n\
   && UINTVAL (operands[4]) + UINTVAL (operands[5]) <= 32",
    __builtin_constant_p 
#line 5867 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && UINTVAL (operands[4]) + UINTVAL (operands[5]) <= 32)
    ? (int) 
#line 5867 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[2]) == HOST_WIDE_INT_M1U << INTVAL (operands[4])
   && INTVAL (operands[4])
   && UINTVAL (operands[4]) + UINTVAL (operands[5]) <= 32)
    : -1 },
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
    && rtx_equal_p (XEXP (operands[3], 0),\n\
		    plus_constant (Pmode,\n\
			       XEXP (operands[1], 0),\n\
			       GET_MODE_SIZE (V8HImode)))",
    __builtin_constant_p 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8HImode))))
    ? (int) 
#line 226 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
    && rtx_equal_p (XEXP (operands[3], 0),
		    plus_constant (Pmode,
			       XEXP (operands[1], 0),
			       GET_MODE_SIZE (V8HImode))))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && register_operand (operands[3], VNx2DFmode)\n\
   && INTVAL (operands[4]) == SVE_RELAXED_GP)",
    __builtin_constant_p (
#line 6123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 6132 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[3], VNx2DFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    ? (int) (
#line 6123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 6132 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[3], VNx2DFmode)
   && INTVAL (operands[4]) == SVE_RELAXED_GP))
    : -1 },
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && rtx_equal_p (XEXP (operands[2], 0),\n\
		   plus_constant (Pmode,\n\
				  XEXP (operands[0], 0),\n\
				  GET_MODE_SIZE (DFmode)))",
    __builtin_constant_p 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (DFmode))))
    ? (int) 
#line 212 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && rtx_equal_p (XEXP (operands[2], 0),
		   plus_constant (Pmode,
				  XEXP (operands[0], 0),
				  GET_MODE_SIZE (DFmode))))
    : -1 },
#line 5564 "../../gcc/config/aarch64/aarch64.md"
  { "UINTVAL (operands[3]) < 32\n\
   && UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32\n\
   && INTVAL (operands[3]) == INTVAL (operands[5])",
    __builtin_constant_p 
#line 5564 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < 32
   && UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32
   && INTVAL (operands[3]) == INTVAL (operands[5]))
    ? (int) 
#line 5564 "../../gcc/config/aarch64/aarch64.md"
(UINTVAL (operands[3]) < 32
   && UINTVAL (operands[3]) + UINTVAL (operands[4]) == 32
   && INTVAL (operands[3]) == INTVAL (operands[5]))
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[4]))\n\
   && (PLUS != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (PLUS != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[4]))
   && (PLUS != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4SImode)\n\
       || register_operand (operands[1], V4x4SImode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SImode)
       || register_operand (operands[1], V4x4SImode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SImode)
       || register_operand (operands[1], V4x4SImode)))
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x43 & 0x22) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x22) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x22) == 0)
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x43 & 0x21) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x21) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x43 & 0x21) == 0)
    : -1 },
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && (register_operand (operands[0], V8HImode)\n\
       || aarch64_simd_reg_or_zero (operands[1], V8HImode))",
    __builtin_constant_p 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8HImode)
       || aarch64_simd_reg_or_zero (operands[1], V8HImode)))
    ? (int) 
#line 150 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && (register_operand (operands[0], V8HImode)
       || aarch64_simd_reg_or_zero (operands[1], V8HImode)))
    : -1 },
#line 5755 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),\n\
				      UINTVAL (operands[4]),\n\
				      UINTVAL(operands[5]))",
    __builtin_constant_p 
#line 5755 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      UINTVAL(operands[5])))
    ? (int) 
#line 5755 "../../gcc/config/aarch64/aarch64.md"
(aarch64_masks_and_shift_for_bfi_p (SImode, UINTVAL (operands[2]),
				      UINTVAL (operands[4]),
				      UINTVAL(operands[5])))
    : -1 },
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD\n\
   && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[2], DImode))",
    __builtin_constant_p 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[2], DImode)))
    ? (int) 
#line 4301 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD
   && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[2], DImode)))
    : -1 },
  { "(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1862 "../../gcc/config/aarch64/aarch64.md"
(TARGET_SIMD && INTVAL (operands[5]) == GET_MODE_SIZE (TFmode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
  { "((TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && (TARGET_SVE2)) && ( reload_completed\n\
   && register_operand (operands[4], VNx2HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) ((
#line 4815 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && !rtx_equal_p (operands[2], operands[4])) && 
#line 2691 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2)) && 
#line 4820 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx2HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 1368 "../../gcc/config/aarch64/aarch64.md"
  { "aarch64_movk_shift (rtx_mode_t (operands[2], SImode),\n\
		       rtx_mode_t (operands[3], SImode)) >= 0",
    __builtin_constant_p 
#line 1368 "../../gcc/config/aarch64/aarch64.md"
(aarch64_movk_shift (rtx_mode_t (operands[2], SImode),
		       rtx_mode_t (operands[3], SImode)) >= 0)
    ? (int) 
#line 1368 "../../gcc/config/aarch64/aarch64.md"
(aarch64_movk_shift (rtx_mode_t (operands[2], SImode),
		       rtx_mode_t (operands[3], SImode)) >= 0)
    : -1 },
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && (~0x81 & 0x22) == 0",
    __builtin_constant_p 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x22) == 0)
    ? (int) 
#line 3075 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x81 & 0x22) == 0)
    : -1 },
#line 4626 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)\n\
   && (trunc_int_for_mode (UINTVAL (operands[3])\n\
			   << INTVAL (operands[2]), DImode)\n\
       == INTVAL (operands[4]))\n\
   && (IOR != PLUS\n\
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (IOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4626 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && pow2_or_zerop (UINTVAL (operands[3]) + 1)
   && (trunc_int_for_mode (UINTVAL (operands[3])
			   << INTVAL (operands[2]), DImode)
       == INTVAL (operands[4]))
   && (IOR != PLUS
       || (INTVAL (operands[4]) & INTVAL (operands[3])) == 0))
    : -1 },
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HFmode)\n\
   && (aarch64_tune_params.extra_tuning_flags\n\
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0",
    __builtin_constant_p 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    ? (int) 
#line 99 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, true, V8HFmode)
   && (aarch64_tune_params.extra_tuning_flags
	& AARCH64_EXTRA_TUNE_NO_LDP_STP_QREGS) == 0)
    : -1 },
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),\n\
		plus_constant (Pmode,\n\
			       XEXP (operands[0], 0),\n\
			       GET_MODE_SIZE (V2DFmode)))",
    __builtin_constant_p 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V2DFmode))))
    ? (int) 
#line 240 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && rtx_equal_p (XEXP (operands[2], 0),
		plus_constant (Pmode,
			       XEXP (operands[0], 0),
			       GET_MODE_SIZE (V2DFmode))))
    : -1 },
  { "(TARGET_SVE && (~0x23 & 0x21) == 0) && ( reload_completed)",
    __builtin_constant_p (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 3191 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x23 & 0x21) == 0) && 
#line 3193 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && 64 >= 16\n\
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4])",
    __builtin_constant_p 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    ? (int) 
#line 9835 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && 64 >= 16
   && aarch64_sve_same_pred_for_ptest_p (&operands[2], &operands[4]))
    : -1 },
  { "(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && ( true)",
    __builtin_constant_p (
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && 
#line 5281 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) (
#line 5279 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)) && 
#line 5281 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
  { "(TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])) && ( reload_completed\n\
   && register_operand (operands[4], VNx8HImode)\n\
   && !rtx_equal_p (operands[0], operands[4]))",
    __builtin_constant_p (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    ? (int) (
#line 3745 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4])) && 
#line 3754 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && register_operand (operands[4], VNx8HImode)
   && !rtx_equal_p (operands[0], operands[4])))
    : -1 },
#line 6647 "../../gcc/config/aarch64/aarch64.md"
  { "TARGET_FLOAT\n\
   && ((GET_MODE_BITSIZE (DFmode) <= LONG_TYPE_SIZE)\n\
   || !flag_trapping_math || flag_fp_int_builtin_inexact)",
    __builtin_constant_p 
#line 6647 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && ((GET_MODE_BITSIZE (DFmode) <= LONG_TYPE_SIZE)
   || !flag_trapping_math || flag_fp_int_builtin_inexact))
    ? (int) 
#line 6647 "../../gcc/config/aarch64/aarch64.md"
(TARGET_FLOAT
   && ((GET_MODE_BITSIZE (DFmode) <= LONG_TYPE_SIZE)
   || !flag_trapping_math || flag_fp_int_builtin_inexact))
    : -1 },
  { "(TARGET_SVE && (~0x21 & 0x21) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1590 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x21 & 0x21) == 0) && 
#line 1596 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
  { "(!aarch64_move_imm (INTVAL (operands[1]), DImode)\n\
   && !aarch64_plus_operand (operands[1], DImode)\n\
   && !reload_completed) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x8HFmode)\n\
       || register_operand (operands[1], V4x8HFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HFmode)
       || register_operand (operands[1], V4x8HFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x8HFmode)
       || register_operand (operands[1], V4x8HFmode)))
    : -1 },
#line 4597 "../../gcc/config/aarch64/aarch64.md"
  { "can_create_pseudo_p ()\n\
   && ((paradoxical_subreg_p (operands[1])\n\
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))\n\
       || (REG_P (operands[1])\n\
	   && REG_P (operands[4])\n\
	   && REGNO (operands[1]) == REGNO (operands[4])))\n\
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))\n\
			   << INTVAL (operands[2]), SImode)\n\
       == INTVAL (operands[3]))\n\
   && (IOR != PLUS\n\
       || (GET_MODE_MASK (GET_MODE (operands[4]))\n\
	   & INTVAL (operands[3])) == 0)",
    __builtin_constant_p 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (IOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    ? (int) 
#line 4597 "../../gcc/config/aarch64/aarch64.md"
(can_create_pseudo_p ()
   && ((paradoxical_subreg_p (operands[1])
	&& rtx_equal_p (SUBREG_REG (operands[1]), operands[4]))
       || (REG_P (operands[1])
	   && REG_P (operands[4])
	   && REGNO (operands[1]) == REGNO (operands[4])))
   && (trunc_int_for_mode (GET_MODE_MASK (GET_MODE (operands[4]))
			   << INTVAL (operands[2]), SImode)
       == INTVAL (operands[3]))
   && (IOR != PLUS
       || (GET_MODE_MASK (GET_MODE (operands[4]))
	   & INTVAL (operands[3])) == 0))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx16HFmode)\n\
       || register_operand (operands[2], VNx16HFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HFmode)
       || register_operand (operands[2], VNx16HFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16HFmode)
       || register_operand (operands[2], VNx16HFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
  { "(TARGET_SVE) && ( reload_completed\n\
   && !register_operand (operands[3], VNx16QImode))",
    __builtin_constant_p (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx16QImode)))
    ? (int) (
#line 4587 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE) && 
#line 4593 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed
   && !register_operand (operands[3], VNx16QImode)))
    : -1 },
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DFmode)",
    __builtin_constant_p 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DFmode))
    ? (int) 
#line 330 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_adjust_ok_for_ldpstp (operands, true, V2DFmode))
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx2DFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2DFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx2DFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx2DFmode))))
    : -1 },
#line 1622 "../../gcc/config/aarch64/aarch64.md"
  { "!STRICT_ALIGNMENT || TARGET_MOPS",
    __builtin_constant_p 
#line 1622 "../../gcc/config/aarch64/aarch64.md"
(!STRICT_ALIGNMENT || TARGET_MOPS)
    ? (int) 
#line 1622 "../../gcc/config/aarch64/aarch64.md"
(!STRICT_ALIGNMENT || TARGET_MOPS)
    : -1 },
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && VNx4BFmode != VNx16QImode\n\
   && (BYTES_BIG_ENDIAN\n\
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4BFmode)))",
    __builtin_constant_p 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4BFmode))))
    ? (int) 
#line 710 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && VNx4BFmode != VNx16QImode
   && (BYTES_BIG_ENDIAN
       || maybe_ne (BYTES_PER_SVE_VECTOR, GET_MODE_SIZE (VNx4BFmode))))
    : -1 },
#line 3699 "../../gcc/config/aarch64/aarch64.md"
  { "INTVAL (operands[2]) + INTVAL (operands[3]) == 32",
    __builtin_constant_p 
#line 3699 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) + INTVAL (operands[3]) == 32)
    ? (int) 
#line 3699 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[2]) + INTVAL (operands[3]) == 32)
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x4SImode)\n\
       || register_operand (operands[1], V3x4SImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SImode)
       || register_operand (operands[1], V3x4SImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x4SImode)
       || register_operand (operands[1], V3x4SImode)))
    : -1 },
  { "(TARGET_SVE\n\
   && (register_operand (operands[0], VNx24HFmode)\n\
       || register_operand (operands[2], VNx24HFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HFmode)
       || register_operand (operands[2], VNx24HFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    ? (int) (
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx24HFmode)
       || register_operand (operands[2], VNx24HFmode))) && 
#line 905 "../../gcc/config/aarch64/aarch64-sve.md"
( reload_completed))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x2SImode)\n\
       || register_operand (operands[1], V2x2SImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SImode)
       || register_operand (operands[1], V2x2SImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x2SImode)
       || register_operand (operands[1], V2x2SImode)))
    : -1 },
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 > 8",
    __builtin_constant_p 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 8)
    ? (int) 
#line 3030 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 > 8)
    : -1 },
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
  { "TARGET_SIMD\n\
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SImode)",
    __builtin_constant_p 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SImode))
    ? (int) 
#line 86 "../../gcc/config/aarch64/aarch64-ldpstp.md"
(TARGET_SIMD
   && aarch64_operands_ok_for_ldpstp (operands, false, V2SImode))
    : -1 },
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (~0x27 & 0x22) == 0",
    __builtin_constant_p 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x22) == 0)
    ? (int) 
#line 3123 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (~0x27 & 0x22) == 0)
    : -1 },
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && BYTES_BIG_ENDIAN\n\
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),\n\
		GET_MODE_NUNITS (V8BFmode) - 1)",
    __builtin_constant_p 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8BFmode) - 1))
    ? (int) 
#line 2558 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && BYTES_BIG_ENDIAN
   && known_eq (INTVAL (XVECEXP (operands[2], 0, 0)),
		GET_MODE_NUNITS (V8BFmode) - 1))
    : -1 },
#line 7286 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 7286 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 7286 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && (ptr_mode == SImode || Pmode == SImode)",
    __builtin_constant_p (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    ? (int) (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x4SFmode)\n\
       || register_operand (operands[1], V2x4SFmode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SFmode)
       || register_operand (operands[1], V2x4SFmode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x4SFmode)
       || register_operand (operands[1], V2x4SFmode)))
    : -1 },
  { "(TARGET_SVE && (~0x43 & 0x42) == 0) && ( !CONSTANT_P (operands[6]))",
    __builtin_constant_p (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    ? (int) (
#line 1560 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && (~0x43 & 0x42) == 0) && 
#line 1568 "../../gcc/config/aarch64/aarch64-sve.md"
( !CONSTANT_P (operands[6])))
    : -1 },
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && !BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x16QImode)\n\
       || register_operand (operands[1], V3x16QImode))",
    __builtin_constant_p 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x16QImode)
       || register_operand (operands[1], V3x16QImode)))
    ? (int) 
#line 7199 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && !BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x16QImode)
       || register_operand (operands[1], V3x16QImode)))
    : -1 },
  { "(TARGET_SVE2) && (TARGET_SVE2_AES)",
    __builtin_constant_p (
#line 2311 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 562 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2_AES))
    ? (int) (
#line 2311 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2) && 
#line 562 "../../gcc/config/aarch64/iterators.md"
(TARGET_SVE2_AES))
    : -1 },
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V3x8BFmode)\n\
       || register_operand (operands[1], V3x8BFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8BFmode)
       || register_operand (operands[1], V3x8BFmode)))
    ? (int) 
#line 7300 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V3x8BFmode)
       || register_operand (operands[1], V3x8BFmode)))
    : -1 },
  { "(TARGET_SVE2\n\
   && (~0x27 & 0x41) == 0) && ( !CONSTANT_P (operands[4]))",
    __builtin_constant_p (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x41) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    ? (int) (
#line 131 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x27 & 0x41) == 0) && 
#line 136 "../../gcc/config/aarch64/aarch64-sve2.md"
( !CONSTANT_P (operands[4])))
    : -1 },
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V4x4SFmode)\n\
       || register_operand (operands[1], V4x4SFmode))",
    __builtin_constant_p 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SFmode)
       || register_operand (operands[1], V4x4SFmode)))
    ? (int) 
#line 7322 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V4x4SFmode)
       || register_operand (operands[1], V4x4SFmode)))
    : -1 },
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (register_operand (operands[0], VNx16SImode)\n\
       || register_operand (operands[2], VNx16SImode))",
    __builtin_constant_p 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SImode)
       || register_operand (operands[2], VNx16SImode)))
    ? (int) 
#line 901 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (register_operand (operands[0], VNx16SImode)
       || register_operand (operands[2], VNx16SImode)))
    : -1 },
#line 996 "../../gcc/config/aarch64/aarch64.md"
  { "!aarch64_track_speculation",
    __builtin_constant_p 
#line 996 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_track_speculation)
    ? (int) 
#line 996 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_track_speculation)
    : -1 },
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
  { "TARGET_SVE2\n\
   && (~0x43 & 0x81) == 0",
    __builtin_constant_p 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x81) == 0)
    ? (int) 
#line 178 "../../gcc/config/aarch64/aarch64-sve2.md"
(TARGET_SVE2
   && (~0x43 & 0x81) == 0)
    : -1 },
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && !rtx_equal_p (operands[2], operands[4])\n\
   && !rtx_equal_p (operands[3], operands[4])",
    __builtin_constant_p 
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4]))
    ? (int) 
#line 6087 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && !rtx_equal_p (operands[2], operands[4])
   && !rtx_equal_p (operands[3], operands[4]))
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1880 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
  { "(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && (ptr_mode == DImode || Pmode == DImode)",
    __builtin_constant_p (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    ? (int) (
#line 1896 "../../gcc/config/aarch64/aarch64.md"
(INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SFmode)) && 
#line 138 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == DImode || Pmode == DImode))
    : -1 },
#line 634 "../../gcc/config/aarch64/atomics.md"
  { " epilogue_completed",
    __builtin_constant_p 
#line 634 "../../gcc/config/aarch64/atomics.md"
( epilogue_completed)
    ? (int) 
#line 634 "../../gcc/config/aarch64/atomics.md"
( epilogue_completed)
    : -1 },
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE\n\
   && (!register_operand (operands[1], VNx2DImode)\n\
       || register_operand (operands[2], VNx2DImode))",
    __builtin_constant_p 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2DImode)
       || register_operand (operands[2], VNx2DImode)))
    ? (int) 
#line 7602 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE
   && (!register_operand (operands[1], VNx2DImode)
       || register_operand (operands[2], VNx2DImode)))
    : -1 },
  { "((!aarch64_move_imm (INTVAL (operands[1]), DImode)\n\
   && !aarch64_plus_operand (operands[1], DImode)\n\
   && !reload_completed) && (ptr_mode == SImode || Pmode == SImode)) && ( true)",
    __builtin_constant_p ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    ? (int) ((
#line 716 "../../gcc/config/aarch64/aarch64.md"
(!aarch64_move_imm (INTVAL (operands[1]), DImode)
   && !aarch64_plus_operand (operands[1], DImode)
   && !reload_completed) && 
#line 137 "../../gcc/config/aarch64/iterators.md"
(ptr_mode == SImode || Pmode == SImode)) && 
#line 720 "../../gcc/config/aarch64/aarch64.md"
( true))
    : -1 },
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
  { "TARGET_SVE && 64 == 8",
    __builtin_constant_p 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 8)
    ? (int) 
#line 7672 "../../gcc/config/aarch64/aarch64-sve.md"
(TARGET_SVE && 64 == 8)
    : -1 },
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
  { "TARGET_SIMD && BYTES_BIG_ENDIAN\n\
   && (register_operand (operands[0], V2x8HImode)\n\
       || register_operand (operands[1], V2x8HImode))",
    __builtin_constant_p 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HImode)
       || register_operand (operands[1], V2x8HImode)))
    ? (int) 
#line 7272 "../../gcc/config/aarch64/aarch64-simd.md"
(TARGET_SIMD && BYTES_BIG_ENDIAN
   && (register_operand (operands[0], V2x8HImode)
       || register_operand (operands[1], V2x8HImode)))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
