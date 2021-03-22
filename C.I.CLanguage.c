#include <stdio.h>
int main(void)
{
	// 정수형 변수에 대한 예제
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age); 

	// 실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%.1f\n", f); // f앞에 1을 쓰면, 소수점 첫째 자리까지, 숫자를 바꾸어줌에 따라 소수점 몇번째 자리 까지 표시하게 되는지를 정의
	double d = 42.195;
	printf("%.2lf\n", d); // 더블을 쓸 경우, 'lf'를 써주고, 역시 소수점 자릿수 정의는 해당 원하는 만큼 숫자를 써주면 정의 가능, 이번 행은 2라 써서, 둘째자리까지
							// 헌데 쓴 예제문은 세번째 자리까지 있으므로, 두번째 자리까지 표시하기위해 반올림을 한 후, 표시하게 된다.

	// 상수, int 앞에 const를 붙이게 되면 프린트f 다음행에 YEAR파트를 수정해주어도 적용이 안됨.
	const int YEAR = 1994;
	printf("Bitrh : %d\n", YEAR); 

	// printf
	// 연산
	int add = 3 + 7; // 10
	printf("3+7=%d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7); // %d개념의 정리, %d는 뒤에 오는 콤마의 값 순서대로 들어오게 되어있음을 실행시키면 알 수 있다.
	// 곱셉 연산
	printf("%d x %d = %d\n", 30, 79, 30 * 79); // 곱셈은 별표

	// scanf란, 키보드 입력을 받아서 저장
	int input;
	printf("값을 입력하세요 :");
	scanf_s("%d", &input); // 여기서 &의 의미는, 내가 input이라는 정의가 된 곳에 값을 입력받겠다 라는 의미가 되어서 써준다고 보면 된다.
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수 값을 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 입력 값 : %d\n", one);
	printf("두번째 입력 값 : %d\n", two);
	printf("세번째 입력 값 : %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러글자)
	char c = 'A';
	printf("%c\n", c); // 문자를 입력할때는, %c

	char str[256]; // 256개의 공간을 만들겠다 라고 정의해준 것이다.
	scanf_s("%s", str, sizeof(str)); // 문자열을 입력할때는 %s를 입력한다, 그리고 크기를 명시해줘야한다 왜냐 문자열이니까!
									 // 즉, 우리는 256개의 크기까지만 받겠다 라는 것을 정의해준 것이다.
	printf("%s\n", str);

	// 프로젝트
	// 경찰서 조서 쓰기 프로그램 만들기 (경찰관이 범죄자의 정보를 입수하고 작성하는 프로그램)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("What is your name?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("How old are you?");
	scanf_s("%d", &age);

	float weight;
	printf("What is your weight?");
	scanf_s("%f", &weight);

	double height;
	printf("How tall are you?");
	scanf_s("%lf", &height);

	char crime[256];
	printf("What crime did you commit?");
	scanf_s("%s", crime, sizeof(crime));

	// 조서 내용 출력 부분
	printf("\n\n --- Criminal Information ---\n\n");
	printf("Name : %s\n", name);
	printf("Age : %d\n", age);
	printf("Weight : %.2f\n", weight);
	printf("Height : %.2lf\n", height);
	printf("C.I : %s\n", crime);
	return 0;
}