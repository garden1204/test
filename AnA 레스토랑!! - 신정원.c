#include <stdio.h>

int main(void)
{
	int menu_m, menu_s, menu_d, menu_c, price_m, price_s, price_d, price_c, money, change, total = 0;

	printf("'AnA �������'�� ���� ���� ȯ���մϴ�!\n");
	printf("======== Main Menu ========\n");
	printf("1. �丶�� �Ľ�Ÿ : 8000��\n");
	printf("2. ������� �Ľ�Ÿ : 9000��\n");
	printf("3. ���� �Ľ�Ÿ : 10000��\n");
	printf("4. �˸����ø��� �Ľ�Ÿ : 12000��\n");
	printf("5. �������� ���� : 15000��\n");
	printf("6. ġ�� ���� : 10000��\n");
	printf("===========================\n");
	printf("���� �޴��� �����ϼ��� : ");
	scanf_s("%d", &menu_m);

	switch (menu_m)
	{
	case 1:
		price_m = 8000;
		total = price_m;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 2:
		price_m = 9000;
		total = price_m;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 3:
		price_m = 10000;
		total = price_m;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 4:
		price_m = 12000;
		total = price_m;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 5:
		price_m = 15000;
		total = price_m;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
	case 6:
		price_m = 10000;
		total = price_m;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
	default:
		price_m = 0;
		total = price_m;
		printf("�߸� �����̽��ϴ�.<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	}

	printf("\n======== Side Menu ========\n");
	printf("1. �丶�� ������  : 5000��\n");
	printf("2. ���� ���� : 4000��\n");
	printf("3. ���� Ƣ�� : 3000��\n");
	printf("4. ���� �޴��� �԰ڽ��ϴ�.\n");
	printf("===========================\n\n");
	printf("���̵� �޴��� �����ϼ��� : ");
	scanf_s("%d", &menu_s);

	switch (menu_s)
	{
	case 1:
		price_s = 5000;
		total = price_m + price_s;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 2:
		price_s = 4000;
		total = price_m + price_s;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 3:
		price_s = 3000;
		total = price_m + price_s;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	default:
		price_s = 0;
		total = price_m + price_s;
		printf("<��Ű�� �����̽��ϴ�. : %d��>\n", total);
	}
	printf("\n======== Drink Menu ========\n");
	printf("1. ���̴� : 3000��\n");
	printf("2. �ݶ� : 3000��\n");
	printf("3. ���� ���̵� : 4000��\n");
	printf("4. ���� ���̵� : 4000��\n");
	printf("5. �ڸ� ���̵� : 4500��\n");
	printf("6. ������ �ֽ� : 6000��\n");
	printf("7. ��Ű�� �ʰڽ��ϴ�.\n");
	printf("==============================\n");
	printf("���Ḧ �����ϼ��� : ");
	scanf_s("%d", &menu_d);

	switch (menu_d)
	{
	case 1:
		price_d = 3000;
		total = price_m + price_s + price_d;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 2:
		price_d = 3000;
		total = price_m + price_s + price_d;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 3:
		price_d = 4000;
		total = price_m + price_s + price_d;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 4:
		price_d = 4000;
		total = price_m + price_s + price_d;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 5:
		price_d = 4500;
		total = price_m + price_s + price_d;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 6:
		price_d = 6000;
		total = price_m + price_s + price_d;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	default:
		price_d = 0;
		total = price_m + price_s + price_d;
		printf("<��Ű�� �����̽��ϴ�. : %d��>\n", total);
		break;
	}
	printf("\n======== Coffee Menu ========\n");
	printf("1. �Ƹ޸�ī�� : 1500��\n");
	printf("2. ���������� : 3000��\n");
	printf("3. ī�� ��ī : 3000��\n");
	printf("4. �ٴҶ� �� : 3000��\n");
	printf("5. ī��� �����ƶ� : 3500��\n");
	printf("6. �������� : 6000��\n");
	printf("7. ��Ű�� �ʰڽ��ϴ�.\n");
	printf("==============================\n");
	printf("Ŀ�Ǹ� �����ϼ��� : ");
	scanf_s("%d", &menu_c);

	switch (menu_c)
	{
	case 1:
		price_c = 1500;
		total = price_m + price_s + price_d + price_c;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 2:
		price_c = 3000;
		total = price_m + price_s + price_d + price_c;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 3:
		price_c = 3000;
		total = price_m + price_s + price_d + price_c;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 4:
		price_c = 3000;
		total = price_m + price_s + price_d + price_c;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 5:
		price_c = 3500;
		total = price_m + price_s + price_d + price_c;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	case 6:
		price_c = 6000;
		total = price_m + price_s + price_d + price_c;
		printf("<���� �ֹ� �� �ݾ� : %d��>\n", total);
		break;
	default:
		price_c = 0;
		total = price_m + price_s + price_d + price_c;
		printf("<��Ű�� �����̽��ϴ�. : %d��>\n", total);
		break;
	}
	printf("========================================\n");
	printf("�Ѿ� : %d\n", total);
	printf("���� ���� �Է��� �ּ��� : ");
	scanf_s("%d", &money);
	change = money - total;
	if (change < 0)
	{
		printf("���� �����ϴ�.!!!!\n");
		return;
	}
	else
	{
		printf("�Ž����� : %d\n", change);
		printf("��� �Ϸ�Ǿ����ϴ�. \n");
	}
	while (1);
}