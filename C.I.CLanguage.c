#include <stdio.h>
int main(void)
{
	// ������ ������ ���� ����
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age); 

	// �Ǽ��� ������ ���� ����
	float f = 46.5f;
	printf("%.1f\n", f); // f�տ� 1�� ����, �Ҽ��� ù° �ڸ�����, ���ڸ� �ٲپ��ܿ� ���� �Ҽ��� ���° �ڸ� ���� ǥ���ϰ� �Ǵ����� ����
	double d = 42.195;
	printf("%.2lf\n", d); // ������ �� ���, 'lf'�� ���ְ�, ���� �Ҽ��� �ڸ��� ���Ǵ� �ش� ���ϴ� ��ŭ ���ڸ� ���ָ� ���� ����, �̹� ���� 2�� �Ἥ, ��°�ڸ�����
							// �嵥 �� �������� ����° �ڸ����� �����Ƿ�, �ι�° �ڸ����� ǥ���ϱ����� �ݿø��� �� ��, ǥ���ϰ� �ȴ�.

	// ���, int �տ� const�� ���̰� �Ǹ� ����Ʈf �����࿡ YEAR��Ʈ�� �������־ ������ �ȵ�.
	const int YEAR = 1994;
	printf("Bitrh : %d\n", YEAR); 

	// printf
	// ����
	int add = 3 + 7; // 10
	printf("3+7=%d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7); // %d������ ����, %d�� �ڿ� ���� �޸��� �� ������� ������ �Ǿ������� �����Ű�� �� �� �ִ�.
	// ���� ����
	printf("%d x %d = %d\n", 30, 79, 30 * 79); // ������ ��ǥ

	// scanf��, Ű���� �Է��� �޾Ƽ� ����
	int input;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &input); // ���⼭ &�� �ǹ̴�, ���� input�̶�� ���ǰ� �� ���� ���� �Է¹ްڴ� ��� �ǹ̰� �Ǿ ���شٰ� ���� �ȴ�.
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ���� ���� �Է��ϼ��� :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �Է� �� : %d\n", one);
	printf("�ι�° �Է� �� : %d\n", two);
	printf("����° �Է� �� : %d\n", three);

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ��������)
	char c = 'A';
	printf("%c\n", c); // ���ڸ� �Է��Ҷ���, %c

	char str[256]; // 256���� ������ ����ڴ� ��� �������� ���̴�.
	scanf_s("%s", str, sizeof(str)); // ���ڿ��� �Է��Ҷ��� %s�� �Է��Ѵ�, �׸��� ũ�⸦ ���������Ѵ� �ֳ� ���ڿ��̴ϱ�!
									 // ��, �츮�� 256���� ũ������� �ްڴ� ��� ���� �������� ���̴�.
	printf("%s\n", str);

	// ������Ʈ
	// ������ ���� ���� ���α׷� ����� (�������� �������� ������ �Լ��ϰ� �ۼ��ϴ� ���α׷�)
	// �̸�? ����? ������? Ű? ���˸�?
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

	// ���� ���� ��� �κ�
	printf("\n\n --- Criminal Information ---\n\n");
	printf("Name : %s\n", name);
	printf("Age : %d\n", age);
	printf("Weight : %.2f\n", weight);
	printf("Height : %.2lf\n", height);
	printf("C.I : %s\n", crime);
	return 0;
}