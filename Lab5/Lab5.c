#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int Lab5_z1();
int Lab5_z2();
int Lab5_z3a();
int Lab5_z3b();

int main()
{
	setlocale(LC_ALL, "RUS");
	Lab5_z1();
}

int Lab5_z1()
{
	int main();
	double gr, gr1, gr2;
	printf("������� �������� ����:\n");
	scanf("%lf", &gr);
	gr1 = gr * M_PI / 180;
	gr2 = sin(gr1);
	printf("\nsin(%.0f) = %.6f\n", gr, gr2);
	
	return 0;
}

int Lab5_z2()
{
	int main();
	double a, b, y, x;
	float k = 8.2;
	printf("������� �������� x:\n"); //������ �������� 5, ����� ��������� ������ � ������������ �������
	scanf("%lf", &x);

	b = sqrt(fabs(x));
	a = pow(b, 4) + pow(k, 3);
	y = pow(log(a), 3) + exp(-x);

	printf("\nb = sqrt(|%.1f|) = %.6f\n", x, b);
	printf("a = %.6f^4 + %.1f^3\n", b, k);
	printf("%.6f + %.6f = %.6f\n", pow(b, 4), pow(k, 3), a);
	printf("ln(a) = ln(%.6f) = %.6f\n", a, log(a));
	printf("ln(a)^3 = %.6f^3 = %.6f\n", log(a), pow(log(a), 3));
	printf("e^(-x) = e^(-%.1f) = %.6f\n", x, exp(-x));
	printf("y = %.6f + %.6f = %.6f\n", pow(log(a), 3), exp(-x), y);
	printf("\n�����:\n");
	printf("x = %.lf, y = %.2lf\n", x, y);

	return 0;
}

int Lab5_z3a()
{
	int main();
	double a = 576.367962, b = 2.236068, y = 256.871561;
	int A = (int)a;
	int B = (int)b;
	int C = (int)y;
	printf("����� �����:\n");
	printf("A = ����� ����� a = %d\n", A);
	printf("B = ����� ����� b = %d\n", B);
	printf("C = ����� ����� y = %d\n", C);

	int D = (A % 2 == 0) != (B % 2 == 0);
	printf("\n������ ���� �� ����� � � � ������:\n");
	printf("A %% 2 = %d, B %% 2 = %d\n", A % 2, B % 2);
	printf("������� ��������� (1 - ��, 0 - ���):\n%d\n", D);

	return 0;
}

int Lab5_z3b()
{
	int main();
	double a = 576.367962, b = 2.236068, y = 256.871561;
	int A = (int)a;
	int B = (int)b;
	int C = (int)y;
	printf("����� �����:\n");
	printf("A = ����� ����� a = %d\n", A);
	printf("B = ����� ����� b = %d\n", B);
	printf("C = ����� ����� y = %d\n", C);

	int D = ((A % 3) && (B % 3) && (C % 3) == 0);
	printf("\n������ �� ����� A, B, C ������ ����:\n");
	printf("A %% 3 = %d, B %% 3 = %d, C %% 3 = %d\n", A % 3, B % 3, C % 3);
	printf("������� ��������� (1 - ��, 0 - ���):\n%d\n", D);

	return 0;
}