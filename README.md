# MARSS_RISCV-Project
Implementing a Custom Instruction in RISCV using MARSS-RISCV Simulator

The RISCV architecture is renowned for its modular design and extensibility, allowing
developers to define custom instructions tailored to accelerate application–specific
workloads while preserving ISA compatibility. This flexibility enables hardware/software
co–design that optimizes critical and computationally intensive operations directly
at the instruction set level. 

Developed RISCV custom MOD and POW instructions in MARSS-RISCV using C and assembly, targeting high-efficiency arithmetic. Extended the RISC-V GNU toolchain to support the new instructions by integrating custom opcode, funct3, funct7 fields, and their match/mask encodings into the assembler-disassembler pipelines.

The MOD instruction, while primarily serving as a groundwork for opcode encoding and
pipeline integration, it enabled the development and seamless embedding of the POW
instruction, which targets exponential calculations frequently encountered in scientific
computing, cryptography, and signal processing workloads where fast and efficient power
calculations are critical. The POW instruction was rigorously evaluated against standard
software approaches including math library functions and loop–based exponentiation.
Benchmarking shows the custom POW instruction achieves up to 147× speedup over
traditional implementations, with cycle consumption cut by more than 7× (for–loops)
and 8× (math library). These gains demonstrate improved IPC, reduced user cycles, and
notable architectural efficiency enhancements.

