#include <stdio.h>
#include <string.h>

int qnt(char c) {
   switch(c) {
      case 'A': return 3;
      case 'a': return 3;
      case 'E': return 3;
      case 'e': return 3;
      case 'I': return 3;
      case 'i': return 3;
      case 'O': return 3;
      case 'o': return 3;
      case 'S': return 3;
      case 's': return 3;
      default: return 2;
   }
}

int main(void) {
   int n, i, v, j;
   char p[20];

   scanf("%d", &n);
   for (i = 0; i < n; ++i) {
      scanf("%s", p);
      while (getchar() != '\n');
      v = 1;
      for (j = 0; j < strlen(p); ++j)
         v *= qnt(p[j]);
      printf("%d\n", v);
   }
   return 0;
}


