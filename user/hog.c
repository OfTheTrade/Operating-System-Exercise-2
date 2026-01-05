// ------------------ DIT
#include "kernel/types.h"
#include "user/user.h"

int main() {
  printf("Hog starting... I will be a Priority 3 soon.\n");
  
  // Nested loop to ensure it takes ~10-20 seconds
  for (int i = 0; i < 500; i++) {
    for (volatile int j = 0; j < 10000000; j++) {
      // Just burn CPU cycles
    }
  }
  
  printf("Hog finished.\n");
  exit(0);
}
// ------------------ DIT