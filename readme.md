# anti debug trapflag poc

This code is a demonstration of using the TRAPFLAG from the EFLAG(RFLAG on x64) register in order to force a singe-step exception,
this will cause a debugger to breakpoint on the exception (ex: a reverse engineer trying to reverse your program),
I am sure that I am not the first person to come up with this idea so sorry if anyone did this first.
This example makes use of the "asm" expression which is only available in x86 msvc, so if you would like to use this in a
x64 msvc program, you will need to rewrite the function in a .asm file.

### demonstration
https://youtu.be/Vvsyx1rVrxM

### compile
- `meson setup build --buildtype debugoptimized`
- `meson compile` <- execute this in the 'build' dir, in the msvc x86 cmd prompt
