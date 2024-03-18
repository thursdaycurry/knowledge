형변환 나눗셈 문제
```java
class Solution {
    public int solution(int num1, int num2) {
        double a = num1;
        double b = num2;

        double answer = a / b;
        int result = (int)(answer * 1000);
        return result;
    }
}
```


분수의 덧샘(최대공약수 구하기 문제)
- 첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1, 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다. 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

```java
class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
                
        int[] answer = new int[2];
        
        if(denom1 == denom2) {
            answer[0] = numer1 + numer2;
            answer[1] = denom1;
        } else {
            answer[0] = (numer1 * denom2) + (numer2 * denom1);
            answer[1] = denom1 * denom2;
        }
        
        // 최대 공약수
        int gcd = gcd(answer[0], answer[1]);
        answer[0] /= gcd;
        answer[1] /= gcd;
        
        return answer;
    }
    
    private static int gcd(int a, int b) {
        if (b==0) {
            return a;
        }
        return gcd(b, a % b);
    }
}
```

GCD(Greatest Common Divisor)를 recursion으로 구하여 최종 분자 분모를 gcd로 나눈 뒤 배열을 반환하는 것이다.

Java는 배열 초기화를 할 때 `new int[2]`라고 하는 것이 JS 대비 참 명시적이군.


