
#ifndef VM_SUBARCH_H
#define VM_SUBARCH_H

#include <bao.h>

struct arch_regs {
    uint32_t elr_hyp;
    uint32_t spsr_hyp;
    uint32_t x[15];
};

#endif /* VM_SUBARCH_H */
