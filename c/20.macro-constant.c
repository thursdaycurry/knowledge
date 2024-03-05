#include <stdio.h>

#define program void main() // * void main() -> program으로 치환
#define print printf // * printf -> print으로 치환
#define MAX 100
#define MIN 10

program // * void main()을 
{
  print("MAX:%d MIN:%d\n", MAX, MIN);
}

// MAX:100 MIN:10