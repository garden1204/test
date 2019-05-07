#include <stdio.h>

int main(void)
{
	int menu_m, menu_s, menu_d, menu_c, price_m, price_s, price_d, price_c, money, change, total = 0;

	printf("'AnA 레스토랑'에 오신 것을 환영합니다!\n");
	printf("======== Main Menu ========\n");
	printf("1. 토마토 파스타 : 8000원\n");
	printf("2. 까르보나라 파스타 : 9000원\n");
	printf("3. 봉골레 파스타 : 10000원\n");
	printf("4. 알리오올리오 파스타 : 12000원\n");
	printf("5. 고르곤졸라 피자 : 15000원\n");
	printf("6. 치즈 피자 : 10000원\n");
	printf("===========================\n");
	printf("메인 메뉴를 선택하세요 : ");
	scanf_s("%d", &menu_m);

	switch (menu_m)
	{
	case 1:
		price_m = 8000;
		total = price_m;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 2:
		price_m = 9000;
		total = price_m;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 3:
		price_m = 10000;
		total = price_m;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 4:
		price_m = 12000;
		total = price_m;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 5:
		price_m = 15000;
		total = price_m;
		printf("<현재 주문 총 금액 : %d원>\n", total);
	case 6:
		price_m = 10000;
		total = price_m;
		printf("<현재 주문 총 금액 : %d원>\n", total);
	default:
		price_m = 0;
		total = price_m;
		printf("잘못 누르셨습니다.<현재 주문 총 금액 : %d원>\n", total);
		break;
	}

	printf("\n======== Side Menu ========\n");
	printf("1. 토마토 샐러드  : 5000원\n");
	printf("2. 양파 스프 : 4000원\n");
	printf("3. 감자 튀김 : 3000원\n");
	printf("4. 메인 메뉴만 먹겠습니다.\n");
	printf("===========================\n\n");
	printf("사이드 메뉴를 선택하세요 : ");
	scanf_s("%d", &menu_s);

	switch (menu_s)
	{
	case 1:
		price_s = 5000;
		total = price_m + price_s;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 2:
		price_s = 4000;
		total = price_m + price_s;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 3:
		price_s = 3000;
		total = price_m + price_s;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	default:
		price_s = 0;
		total = price_m + price_s;
		printf("<시키지 않으셨습니다. : %d원>\n", total);
	}
	printf("\n======== Drink Menu ========\n");
	printf("1. 사이다 : 3000원\n");
	printf("2. 콜라 : 3000원\n");
	printf("3. 딸기 에이드 : 4000원\n");
	printf("4. 레몬 에이드 : 4000원\n");
	printf("5. 자몽 에이드 : 4500원\n");
	printf("6. 생과일 주스 : 6000원\n");
	printf("7. 시키지 않겠습니다.\n");
	printf("==============================\n");
	printf("음료를 선택하세요 : ");
	scanf_s("%d", &menu_d);

	switch (menu_d)
	{
	case 1:
		price_d = 3000;
		total = price_m + price_s + price_d;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 2:
		price_d = 3000;
		total = price_m + price_s + price_d;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 3:
		price_d = 4000;
		total = price_m + price_s + price_d;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 4:
		price_d = 4000;
		total = price_m + price_s + price_d;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 5:
		price_d = 4500;
		total = price_m + price_s + price_d;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 6:
		price_d = 6000;
		total = price_m + price_s + price_d;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	default:
		price_d = 0;
		total = price_m + price_s + price_d;
		printf("<시키지 않으셨습니다. : %d원>\n", total);
		break;
	}
	printf("\n======== Coffee Menu ========\n");
	printf("1. 아메리카노 : 1500원\n");
	printf("2. 에스프레소 : 3000원\n");
	printf("3. 카페 모카 : 3000원\n");
	printf("4. 바닐라 라떼 : 3000원\n");
	printf("5. 카라멜 마끼아또 : 3500원\n");
	printf("6. 아포가또 : 6000원\n");
	printf("7. 시키지 않겠습니다.\n");
	printf("==============================\n");
	printf("커피를 선택하세요 : ");
	scanf_s("%d", &menu_c);

	switch (menu_c)
	{
	case 1:
		price_c = 1500;
		total = price_m + price_s + price_d + price_c;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 2:
		price_c = 3000;
		total = price_m + price_s + price_d + price_c;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 3:
		price_c = 3000;
		total = price_m + price_s + price_d + price_c;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 4:
		price_c = 3000;
		total = price_m + price_s + price_d + price_c;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 5:
		price_c = 3500;
		total = price_m + price_s + price_d + price_c;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	case 6:
		price_c = 6000;
		total = price_m + price_s + price_d + price_c;
		printf("<현재 주문 총 금액 : %d원>\n", total);
		break;
	default:
		price_c = 0;
		total = price_m + price_s + price_d + price_c;
		printf("<시키지 않으셨습니다. : %d원>\n", total);
		break;
	}
	printf("========================================\n");
	printf("총액 : %d\n", total);
	printf("받은 돈을 입력해 주세요 : ");
	scanf_s("%d", &money);
	change = money - total;
	if (change < 0)
	{
		printf("돈이 적습니다.!!!!\n");
		return;
	}
	else
	{
		printf("거스름돈 : %d\n", change);
		printf("계산 완료되었습니다. \n");
	}
	while (1);
}