#include <stdio.h>

void main_screen(void) {
  int a, b, c, isOK = 0;
  scanf("%d-%d-%d", &a, &b, &c);

  // El Paso area
  if(a == 915) {
      isOK = 1;
      if (b==701) {
          if (c == 1000 || c == 1001) isOK = 0;
      }
  }
  // Massachussets
  else if (a == 617 && b == 253) isOK = 1;
  // Partner numbers: 718-834-9899 and 661-112-3581
  else if ((a==718 && b==834 && c==9899) || (a==661 && b==112 && c==3581)) isOK = 1;

  printf("%s\n", (isOK)? "OK!":"BLOCKED.");
}
