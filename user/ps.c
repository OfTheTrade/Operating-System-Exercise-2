// ------------------ DIT ------------------
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h"

int main(int argc, char *argv[]) {
    struct pstat st;
    // Used to print the state as a string
    char *states[] = {"UNUSED", "USED", "SLEEP", "RUNBLE", "RUNING", "ZOMBIE"};

    if (getpinfo(&st) < 0) {
        printf("ps: error getting process info\n");
        exit(1);
    }

    printf("PID\tPPID\tPRIO\tSTATE\tSIZE\tNAME\n");
    for (int i = 0; i < NPROC; i++) {
        if (st.pid[i] > 0) {
            printf("%d\t%d\t%d\t%s\t%ld\t%s\n", 
                   st.pid[i], st.ppid[i], st.priority[i], states[st.state[i]], st.size[i], st.name[i]);
        }
    }
    exit(0);
}
// ------------------ DIT ------------------