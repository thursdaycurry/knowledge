#define ONE 1 // 매크로 정의를 위한 선행처리기
int factorial(int n)
{
  if (n > ONE)
    return (n * factorial(n - 1));
  else
    return (ONE);
}