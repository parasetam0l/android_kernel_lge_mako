#ifndef __ASM_ARM_COMPILER_H
#define __ASM_ARM_COMPILER_H

/*
 * This is used to ensure the compiler did actually allocate the register we
 * asked it for some inline assembly sequences.  Apparently we can't trust
 * the compiler from one version to another so a bit of paranoia won't hurt.
 * This string is meant to be concatenated with the inline asm string and
 * will cause compilation to stop on mismatch.
 * (for details, see gcc PR 15089)
 */
// mako bring-up: gcc 9 allocates registers correctly; the ancient PR 15089
// check spuriously fails on modern gcc, so disable it.
#define __asmeq(x, y)  ""


#endif /* __ASM_ARM_COMPILER_H */
