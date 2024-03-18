# Java란?

개발자 취업 시장 비중
- 앱 개발자 10%
- 웹 프론트 20%
- 백엔드 70%

자바란
- 오라클에 인수된 Sun Microsystems가 개발한 객체지향 프로그래밍 언어
- C++ 문법에 기초
- 플랫폼 독립적. JVM만 있으면 플랫폼(리눅스, 윈도우, 맥킨토시) 상관없게 해줌. JVM은 자바로 만든 프로그램을 실행해주는 프로그램
- 객체지향 프로그래밍 언어
- Garbage Collector로 메모리 관리 자동화. C, C++는 프로그래머가 메모리 회수 작업을 직접 해줘야 함

자바는 표준 스펙과 구현으로 구분된다
- 자바 표준 스펙 : Java를 어떻게 만들지에 대한 specification
- 자바 구현 : spec을 준수하여 기업에서 만든 Java. 예) 오라클 Oepn JDK, Adoptium Eclipse Temurin, Amazon Corretto 등
- 각 회사의 플랫폼에 최적화되어 있음
- 스펙 기반으로 만들었기 때문에 동작은 크게 다르지 않음

자바는 컴파일 - 실행 단계 거침
- 소스코드 : 개발자가 작성
- `.java` -> `.class` : 컴파일러가 소스코드를 컴파일. JVM에서 더 빠르게 실행할 수 있고 오류도 검출
- JVM가 올라와서 `.class` 파일을 읽고 실행

운영체제 독립성
- 일반적인 프로그램은 OS 호환이 안되는 것이 달리
- Java 프로그램은 자바가 설치된 OS에서 동일하게 실행 가능
- 개발 시 맥에서 자바를 쓰고, AWS 리눅스에서 Amazon Corretto 자바 사용해도 상관 없음


Hello World
```java
public class HelloJava {
    public static void main (String[] args) {
        System.out.println("Hello World");
    }
}
// Hello World
```

- `HelloJava`: 클래스
- `main`: 메서드. 자바 프로그램의 시작점

## 변수

### 변수 선언 및 초기화

```java
package variable;
// Var1이 variable이라는 패키지에 소속되어 있음을 표시

public class Var2 {
    public static void main(String[] args) {
        int a; // 변수 a 선언

        a = 20; // 변수 초기화. int a = 20; 으로 동시에 가능
        System.out.println(a);

        a = 30; // 변수 값 변경
        System.out.println(a);
    }
}
// 20
// 30
```

Java는 변수 초기화를 강제한다

```java
package variable;

public class Var6 {
    public static void main(String[] args) {
        // 머리로 이해 안되도 코드로 치다보면 이해되는 것이 프로그래밍
        int a;

        // 초기화 안하면 에러 발생
        // 이미 사용중인 메모리인 경우, 값이 저장되어 있을 수도 있음
        // 엉뚱한 값 쓰는 것을 방지하기 위해, Java는 초기화하도록 강제함
        System.out.println(a); // <-- java: variable a might not have been initialized
    }
}
```


### 변수 타입

각 변수는 타입에 맞는 값을 넣어야 한다. 예를 들어, int에는 문자열값을 할당할 수 없다.

정수는 `int`를 기본으로, 실수는 `double`을 기본으로 씀.

```java
package variable;

public class Var7 {
    public static void main(String[] args) {
        // 일반
        int a = 100; // integer
        double b = 10.5; // float
        boolean c = true; // Boolean value
        char d = 'A'; // character
        String e = "Hello World"; // String
        // String은 문자 길이에 따라 동적으로 메모리크기 바뀜

        // 정수
        byte bb = 127; // -128 ~ 127
        short s = 32767; // -32768 ~ 32767
        int i = 214748367; // 약 -21억 ~ 21억
        long l = 922337283685477588L; // 겁나 김. 뒤에 L 붙여줌

        // 실수
        float f = 10.0f; // f를 붙여야 함. 표현 범위가 적음
        double dd = 10.0; // double 을 기본. 더 긴 실수
    }
}
```

자주 사용하는 것
- 정수 : `int`, `long` : 20억 넘을 것 같으면 `long`
- 실수 : `double`
- 불리언 : `boolean`
- 문자열 : `String`

실무에서 거의 안쓰는 것
- `byte` : 너무 작음. `int`로 그냥 고
- `short` : `int`로 그냥 고
- `float` : 표현 길이와 소수점 계산 정밀도가 낮음. `double`로 고
- `char` : 그냥 String으로 써도 됨
- 예전과 달리 메모리 비용이 싸져서, 메모리 아낄려고 세세하게 최적화할 필요 없다


## 변수 명명 규칙

자바에서는 클래스만 대문자로 시작한다. 

예외
- 상수 : `USER_LIMIT`(대문자 언더바)
- 패키지 : `org.sprint.boot`(소문자 점)

## 연산자

- 산술 연산자 : `+`, `-`, `*`, `/`
- 증감 연산자 : ++, --
- 비교 연산자 : `== 

기본적인 연산

```java
package operator;

public class Operator1 {
    public static void main(String[] args) {
        int a = 5;
        int b = 2;

        int sum = a + b;
        System.out.println("a + b = " + sum);

        int diff = a - b;
        System.out.println("a - b = " + diff);

        int multi = a * b;
        System.out.println("a * b = " + multi);

        int div = a / b; // 2 // int형끼리 계산해서 2가 나옴. 형변환으로 해결 가능
        System.out.println("a / b = " + div);

        int mod = a % b;
        System.out.println("a % b = " + mod);

        // 오류 - 0으로 나눌 수 없음
        // int z = 10 / 0;
    }
}
//a + b = 7
//a - b = 3
//a * b = 10
//a / b = 2
//a % b = 1
```

문자열 더하기

```java
package operator;

public class Operator2 {
    public static void main(String[] args) {

        // 문자열 더하기
        String result = "Hello" + " world";
        System.out.println(result);

        // 문자열 더하기 - 변수
        String s1 = "string1";
        String s2 = "string1";
        System.out.println(s1 + s2);

        // 문자열 + 숫자
        String s3 = "a + b = " + 10; // 10을 문자로 자동 형변환
        System.out.println(s3);
    }
}
```

연산자 우선순위

1.  괄호 `()`
2. 단항 연사자 `++ -- ! ~ new (type)`
3. 산술 연산자 `* / %  다음에 + -`
4. Shift 연산자 `<< >> >>>`
5. 비교 연산자 `< <= > >= instanceof`
6. 등식 연산자 `== !=`
7. 비트 연산자 `& ^ |
8. 논리 연산자 `&& ||`
9. 삼항 연산자 `? :`
10. 대입 연산자 `= += -= *= /= %=` 등

증감 연산자

```java
package operator;

public class OperatorAdd1 {
    public static void main(String[] args) {
        int a = 0;

        a = a + 1;
        System.out.println("a = " +  a);;

        a = a + 1;
        System.out.println("a = " +  a);;

        // 전위 증감 연산자
        ++a;
        System.out.println("a = " +  a);;

        ++a;
        System.out.println("a = " +  a);;
        
//        a = 1
//        a = 2
//        a = 3
//        a = 4
        
        int c = 0;
        int d = c++; // 선 대입 후 증감
        // 후위 증감 연산자
        int e = ++c; // c 증감 먼저 하고 대입

        System.out.println("c = " +  c);
        System.out.println("d = " +  d);
        System.out.println("e = " +  e);

//        c = 2
//        d = 0
//        e = 2

    }
}
```

비교 연산자

- == equal
- !=
- >
- <
- >=
- <=

```java
package operator;

public class Comp1 {
    public static void main(String[] args) {
        int a = 2;
        int b = 3;

        System.out.println(a == b); // false
        System.out.println(a != b); // true
        System.out.println(a > b); // false
        System.out.println(a < b); // true
        System.out.println(a >= b); // false
        System.out.println(a <= b); // true

        // 결과값 변수에 boolean 값 저장 가능
        boolean result = a == b;
        System.out.println("result: " + result); // result: false
    }
}
```

문자열 비교
- 문자열은 `.equals()` 메서드 사용해야 한다
- `==` 실패 확률 높음

```java
package operator;

public class Comp2 {
    public static void main(String[] args) {
        String str1 = "문자열1";
        String str2 = "문자열2";

        boolean result1 = "hello".equals("hello");
        boolean result2 = str1.equals("문자열1");
        boolean result3 = str2.equals("문자열1");

        System.out.println(result1); // true
        System.out.println(result2); // true
        System.out.println(result3); // false
    }
}
```

논리 연산자
- && AND
- || OR
- ! NOT

```java
package variable;

public class Logical2 {
    public static void main(String[] args) {
        int a = 15;
        boolean result = 10 < a && a < 20;
        System.out.println("result = " + result);
    }
}
```

축약(복합) 대입 연산자
- `i = i + 3` => `i +=3` 연산과 대입 한번에

```java
package variable;

public class Assign1 {
    public static void main(String[] args) {
        int a = 5;
        a += 3; // 5 + 3 = 8
        a -= 2; // 8 - 2 = 6
        a *= 4; // 6 * 4 = 24
        a /= 3; // 24 / 3 = 8
        a %= 5; // 8 % 5 = 3
        System.out.println("a = " + a);
    }
}
```

## 조건문

```
if (condition) {
    do something
}
```

```java
package cond;

public class If3 {
    public static void main(String[] args) {
        int age = 15;

        if (age >= 20) {
            System.out.println("성인");
        } else if (age >= 17) {
            System.out.println("고등학생");
        } else if (age >= 14) {
            System.out.println("중학생");
        } else if (age > 8) {
            System.out.println("초등학생");
        } else {
            System.out.println("미취학");
        }
    }
}
```

Switch 문

```java
package cond;

public class Switch2 {
    public static void main(String[] args) {
        int grade = 2;

        int coupon;

        switch(grade) {
            case 1:
                coupon = 1000;
                break;
            case 2:
                coupon = 2000;
                break;
            case 3:
                coupon = 3000;
                break;
            default:
                coupon = 500;
        }
        System.out.println("발급 : " + coupon);
    }
}
```

이런식으로도 표현 가능하다.

자바 14 새 스위치문.

```java
        int coupon = switch (grade) {
            case 1 -> 1000;
            case 2 -> 2000;
            case 3 -> 3000;
            default -> 500;
        };
```

삼항 연산자
```java
package cond;

public class CondOp1 {
    public static void main(String[] args) {
        int age = 18;
        String status = age >= 18? "성인" : "미성년자";
        System.out.println("status = " + status);
    }
}
```

## 반복문

while, for 

while 문
```java
package loop;

public class While1 {
    public static void main(String[] args) {
        int count = 0;

        while (count <3) {
            System.out.println("count = " + count);
            count++;
        }
    }
}
```

do while 문
```java
package loop;

public class While2 {
    public static void main(String[] args) {
        int i = 10;

        // 최소 한번은 실행
        do {
            System.out.println("i = " + i);
            i++;
        } while ( i < 3);
    }
}
```

break 문

```java
package loop;  
  
public class While3 {  
    public static void main(String[] args) {  
        int sum = 0;  
        int i = 1;  
  
        while(true) {  
            sum = sum + i;  
            System.out.println("i = " + i + ", sum = " + sum);  
  
            if (sum > 10) {  
                break;  
            }  
            i++;  
        }  
    }  
}  
  
//i = 1, sum = 1  
//i = 2, sum = 3  
//i = 3, sum = 6  
//i = 4, sum = 10  
//i = 5, sum = 15
```

continue문

```java
package loop;

public class While4 {
    public static void main(String[] args) {
        int i = 1;

        while (i <= 5) {
            if (i == 3) {
                i++;
                System.out.println("i = " + i);
                continue;
            }
            i++;
        }
    }
}
```

For 문
```java
package loop;

public class For1 {
    public static void main(String[] args) {
        for (int i = 1; i < 10; i++) {
            System.out.println("i = " + i);
        }
    }
}

//i = 1
//i = 2
//i = 3
//i = 4
//i = 5
//i = 6
//i = 7
//i = 8
//i = 9
```

중첩 반복문
```java
// 구구단

package ex;

public class Gugudan {
    public static void main(String[] args) {
        for(int i = 1; i <= 9; i++) {
            for(int j = 1; j<= 9; j++) {
                System.out.println(i + " x " + j + " = " + i*j);
            }
        }
    }
}
//1 x 1 = 1
//1 x 2 = 2
//1 x 3 = 3
//1 x 4 = 4
//1 x 5 = 5
//1 x 6 = 6
// ...
```

## 스코프

지역 변수(Local Scope)
- 스코프는 글로벌와 로컬로 구분할 수 있다. 변수의 위치에 따라 이는 상대적으로 나뉜다. 로컬 스코프 내에 있는 변수는 해당 스코프 밖에서 부를 수 없다.- 

```java
package scope;

public class Scope1 {
    public static void main(String[] args) {
        int m = 10;

        if (true) {
            // x는 if문 안에서 생성된 로컬 변수다. 따라서 이 if문 코드블럭 밖에서 호출 불가능하다 
            int x = 20;
            System.out.println("m = " + m);
            System.out.println("x = " + x);
        }

        System.out.println("m = " + m);
        // System.out.println("x = " + x); // java: cannot find symbol 스코프 밖에서 접근 불가
    }
}
```

스코프는 왜 존재하는가?
- 메모리 비효율성 : 더 이상 쓰지 않는 변수는 자동으로 메모리에서 제거하도록
- 코드 복잡도 : 코드가 더 늘어남. 전역 변수 있으면 프로그래머가 자꾸 신경써야 코딩하게 됨

while문보다 for 문이 스코프 범위 제한해서 메모리 사용가 유지보수에 유리하다.

```java
package scope;

public class Scope3_1 {
    public static void main(String[] args) {
        int m = 10;
        
        // if 문 안에서만 써도 되는 변수를 글로벌로 선언하여 -> 메모리 비효율 + 코드 복잡성 증가
        int temp = 0;
        
        if (m > 0) {
            temp = m * 2;
            System.out.println("temp = " + temp);
        }
        System.out.println("m = " + m);
	    // temp는 왜 있는거지?
    }
}
```

## 형변환

자동 형변환
- 작은 범위를 큰 범위의 수에 넣는 것은 문제 안됨. 하지만 반대로 큰 범위 수를 상대적으로 작은 범위 수에 넣으려 하면 문제 발생. 예를 들어, 소수점을 버리거나 오버플로우 문제 발생
- 그러나 자바는 원칙적으로 같은 형 값만 변수에 할당할 수 있다. 아래가 가능한 이유는 다른 형의 값을 넣었을 때, Java가 자동 형변환을 해주기 때문.

```
// intValue = 10
-> doubleValue = intValue
-> doubleValue = (double)intValue
-> doubleValue = (double) 10
=> doubleValue = 10.0
```

```java
// 작은 수를 큰 수에 넣는 것은 문제 안됨..
package casting;

public class Casting1 {
    public static void main(String[] args) {
        int intValue = 10;
        long longValue;
        double doubleValue;
        
        longValue = intValue;
        System.out.println("longValue = " + longValue);
        
        doubleValue = intValue;
        System.out.println("doubleValue = " + doubleValue);

        doubleValue = 20L;
        System.out.println("doubleValue2 = " + doubleValue);
    }
}
```

명시적 형변환
- 큰 범위를 작은 범위로 대입할 때
- 캐스팅(형 변환)은 `(int)`, `(double)` 이런 식으로 하면 됨

```java
package casting;

public class Casting2 {
    public static void main(String[] args) {
        double doubleValue = 1.5;
        int intValue = 0;

        // 컴파일 에러 발생
        // intValue = doubleValue; // java: incompatible types: possible lossy conversion from double to int

        System.out.println("doubleValue = " + doubleValue);
        int Value = (int)doubleValue;
        System.out.println("Value = " + Value);
    }
}
//doubleValue = 1.5
//Value = 1
```

범위를 벗어났을 때 발생하는 오버플로우 문제
- 오버플로우 발생하면 그냥 형변환해서 해결해라. 오버플로우 계산할 필요 없음
```java
package casting;

public class Casting3 {
    public static void main(String[] args) {
        long maxIntValue = 2147483647; // int 최대값
//        long maxIntOver = 2147483648; // error - int 최대값 + 1 초과
        long maxIntOver = 2147483648L;
        int intValue = 0;
        
        intValue = (int) maxIntValue;
        System.out.println("maxIntValue casting = " + intValue);
        //maxIntValue casting = 2147483647

        intValue = (int) maxIntOver;
        System.out.println("maxIntOver casting = " + intValue);
        //maxIntOver casting = -2147483648 

        // 오버플로우 : int 범위를 벗어난 값이므로 -1가 되어버림
    }
}
```

```java
package casting;

public class Casting4 {
    public static void main(String[] args) {
        int div1 = 3/2;
        System.out.println("div1 = " + div1);
        
        double div2 = 3/2;
        System.out.println("div2 = " + div2);
        
        double div3 = 3.0 / 2;
        System.out.println("div3 = " + div3);
        
        double div4 = (double) 3/ 2;
        System.out.println("div4 = " + div4);
    }
}

//div1 = 1
//div2 = 1.0
//div3 = 1.5
//div4 = 1.5
```

형변환 대원칙
- 같은 타입 끼리는 같은 나입 결과 : `int` + `int` => `int` + `int`
- 다른 타입 계산은 큰 범위로 형변환 됨 : `int` + `long` => `long` + `long`

```
double div4 = (double) 3 / 2;
double div4 = (double) 3 / (double) 2;
double div4 = 3.0 / 2.0;
double div4 = 1.5;
```

## Scanner

```java
package scanner;

import java.util.Scanner;
public class Scanner1 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("문자열을 입력하시오..");
        String str = scanner.nextLine(); // 입력 -> 스트링으로 가져옴
        System.out.println("입력 문자여: "+ str);

        System.out.print("정수도 입력해요..");
        int intValue = scanner.nextInt();
        System.out.println("입력 정수: "+ intValue);

        System.out.print("실수도 입력해요..");
        double doubleValue = scanner.nextDouble();
        System.out.println("입력 정수: "+ doubleValue);
    }
}
//문자열을 입력하시오..안녕
//입력 문자여: 안녕
//정수도 입력해요..22
//입력 정수: 22
//실수도 입력해요..20.3
//입력 정수: 20.3
```

exit 입력하기 전까지 지속 반복
```java
package scanner;

import java.util.Scanner;

public class ScannerWhile1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("문자열 입력하기(exit -> 종료)");
            String str = scanner.nextLine();
            if (str.equals("exit")) {
                System.out.println("프로그램 종료해요..");
                break;
            }
            System.out.println("입력 문자열 " + str);
        }
    }
}
```

## 배열

```
int[] students; // 배열 변수 선언
students = new int[5]; // 배열 생성. 0으로 자동 초기화
students[0] = 90;
students[1] = 20;
...
```

최적화된 버전
```
int[] students = new int[]{90, 20, 40, 80, 90}; // 배열 생성과 초기화 동시
```

더 최적화
```
int[] students = {90, 20, 40, 80, 90}; // new 키워드도 생략 가능
```

배열은 참조값을 가지고 있음. 참조값을 통해서 메모리 값을 다룰 수 있는 것.

데이터 값은 2 유형
- 기본형(primitive type) : 선언 시 크기 정해짐
- 참조형(reference type) : 크기가 동적으로 바뀔 수 있음

왜 배열은 reference type으로 할까?
- 배열 크기는 동적으로 바뀌기 때문에 동적 메모리 할당을 위해 참조형을 사용

2차원 배열

```
int [][] arr = new int[2][3]; // 2행 3열짜리 배열 만들어줘
```

기본
```java
package array;

public class Array1Ref1 {
    public static void main(String[] args) {
        int [][] arr = new int[2][3];

        arr[0][0] = 1;
        arr[0][1] = 2;
        arr[0][2] = 3;
        arr[1][0] = 4;
        arr[1][1] = 5;
        arr[1][2] = 6;

        for (int row = 0; row < 2; row++) {
            for (int col = 0; col < 3; col++) {
                System.out.print(arr[row][col] + " ");
            }
            System.out.println();
        }
    }
}

// 1 2 3 
// 4 5 6 
```

리팩토링 버전
```java
package array;

public class Array1Ref1 {
    public static void main(String[] args) {
        int [][] arr = {
            // 중첩 객체 느낌으로 이중 배열 표현 가능
            {1, 2, 3},
            {4, 5, 6}
        };
        
        for (int row = 0; row < arr.length; row++) {
        // arr의 row로 접근하면 column 길이 알 수 있음
            for (int col = 0; col < arr[row].length; col++) {
                System.out.print(arr[row][col] + " ");
            }
            System.out.println();
        }
    }
}
```

더 리팩토링
```java
package array;

public class Array1Ref1 {
    public static void main(String[] args) {
        int [][] arr = new int[10][10];

        int i = 1;
        for (int row = 0; row < arr.length; row++) {
            for (int column = 0; column < arr[row].length; column++) {
                arr[row][column] = i++;
            }
        }

        for (int row = 0; row < arr.length; row++) {
            for (int column = 0; column < arr[row].length; column++) {
                System.out.print(arr[row][column] + "\t");
            }
            System.out.println();
        }
    }
}

//1	2	3	4	5	6	7	8	9	10
//11	12	13	14	15	16	17	18	19	20
//21	22	23	24	25	26	27	28	29	30
//31	32	33	34	35	36	37	38	39	40
//41	42	43	44	45	46	47	48	49	50
//51	52	53	54	55	56	57	58	59	60
//61	62	63	64	65	66	67	68	69	70
//71	72	73	74	75	76	77	78	79	80
//81	82	83	84	85	86	87	88	89	90
//91	92	93	94	95	96	97	98	99	100	
```

==forEach 문==
- Java의 forEach문. for문 상향간결 버전
- 배열 처음부터 순회
- 인덱스, 종료조건 주지 않아도 됨. 단, 인덱스 참조가 불가
```
for (int number: numbers) {
	// numbers 중 number  
}
```


## 메서드

함수의 일종으로 수학의 함수에서 차용한 개념. 클래스 내의 함수를 메서드라 부른다.

```java
package method;

public class Method1 {
    public static void main(String[] args) {
        
        int sum1 = add(5, 10);
        System.out.println("sum1 = " + sum1);
                
        int sum2 = add(10, 30);
        System.out.println("sum2 = " + sum2);
    }
    public static int add(int a, int b) {
        return a + b;
    }
}
```

- `public` 다른 클래스에서 사용 가능하다
- `static` 객체 생성하지 않고 바로 호출 가능한 정적 메서드

```java
package method;

public class MethodCasting {
    public static void main(String[] args) {

        double number = 1.5;
//        printNumber(number); int값만 매개변수로 받아 에러
        printNumber((int) number); // 명시적 형변환 필요
    }

    public static void printNumber(int n) {
        System.out.println("숫자 : " + n);
    }
}
```

메서드 시그니처
- `method signiture = method name + method type(in order)`
- 메서드 구분을 위한 고유 식별자다

매개변수 오버로딩
- 중복으로 함수를 만든 것처럼 보이지만
- 매개변수 수 또는 타입이 다른 경우, 메서드 시그니처를 확인해서 이를 구분한다

```java
package method;

public class Overloading1 {
    public static void main(String[] args) {
        System.out.println("1번" + add(1, 2));
        System.out.println("2번: " + add(1, 2, 3));
    }

    public static int add(int a, int b) {
        System.out.println("1번 호출");
        return a + b;
    }

    public static int add(int a, int b, int c) {
        System.out.println("2번 호출");
        return a + b + c;
    }
}

//1번 호출
//1번3
//2번 호출
//2번: 6
```