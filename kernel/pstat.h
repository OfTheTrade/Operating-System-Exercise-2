// ------------------ DIT ------------------
#include "param.h"
#include "types.h"

struct pstat{
    int pid[NPROC];
    int ppid[NPROC];
    char name[NPROC][16];
    int priority[NPROC];
    int state[NPROC];
    uint64 size[NPROC];
};
// ------------------ DIT ------------------