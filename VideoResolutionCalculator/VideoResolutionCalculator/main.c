#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	//////////////////////////////////////////////////////////////////////////
	/// Simple Video Resolution Calculator								   
	/// Specification in Github											   
	/// github: https://github.com/bgb10/Video_Resolution_Calculator
	//////////////////////////////////////////////////////////////////////////
	
	/***************** # SETUP *******************/
	int x_screen_count, y_screen_count;
	int x_timeline_size, y_timeline_size;
	int x_size, y_size;
	int opt = 1;

	int coordinate_x, coordinate_y;

	double x_zoom, y_zoom;

	// Enter Grid Size (x * y)
	printf("���ο� ��ġ�� ȭ�� ���� �Է��ϼ���: ");
	scanf("%d", &x_screen_count);

	printf("���ο� ��ġ�� ȭ�� ���� �Է��ϼ���: ");
	scanf("%d", &y_screen_count);

	printf("----------------------------------------------------------------------------------------------\n");
	printf("������ ���� ȭ�� �� x ���� ȭ�� ���� %d x %d �Դϴ�. \n", x_screen_count, y_screen_count);
	printf("----------------------------------------------------------------------------------------------\n");

	printf("Timeline�� �ػ󵵴� �Ϲ������� 1920x1080�Դϴ�. Ȥ�� �𸣴� setting���� Ȯ���Ͻñ� �ٶ��ϴ�. \n");
	printf("Timeline�� x size�� �Է��ϼ���: ");
	scanf("%d", &x_timeline_size);

	printf("Timeline�� y size�� �Է��ϼ���: ");
	scanf("%d", &y_timeline_size);

	printf("----------------------------------------------------------------------------------------------\n");
	printf("������ Timeline �ػ󵵴�  %d x %d �Դϴ�. \n", x_timeline_size, y_timeline_size);
	printf("----------------------------------------------------------------------------------------------\n");

	system("pause");
	system("cls");

	/***************** # MENU *******************/

	while (1) {
		printf("----------------------------------------------------------------------------------------------\n");
		printf("WARNING!!! �����ڴ� ������ �ػ󵵰� �Ϲ����� �԰ݰ� �ٸ��� ������ ������� ���ʽÿ�.\n");
		printf("----------------------------------------------------------------------------------------------\n");

		printf("���� x��° ĭ�� ��ġ���� �Է��Ͻÿ�: ");
		scanf("%d", &coordinate_x);

		printf("���� y��° ĭ�� ��ġ���� �Է��Ͻÿ�: ");
		scanf("%d", &coordinate_y);

		system("cls");

		printf("���ڿ��� (%d, %d)�� �ִ� ȭ���� ��ġ�մϴ�. \n", coordinate_x, coordinate_y);

		printf("������ ���� ���� ����� �Է��ϼ���(��ȣ�� �Է� �Ǵ� ���� �Է�) \n");
		printf("1. 1920 x 1080 \n");
		printf("2. 1280 x 720 \n");
		printf("3. 640 x 360 \n");
		printf("4. �����Է� \n");

		printf("Enter: ");
		scanf("%d", &opt);

		switch (opt) {
		case 1:
			x_size = 1920;
			y_size = 1080;
			break;
		case 2:
			x_size = 1280;
			y_size = 720;
			break;
		case 3:
			x_size = 640;
			y_size = 360;
			break;
		case 4:
			printf("������ ���� ����� �Է��ϼ���(ex. 1920): ");
			scanf("%d", &x_size);
			printf("������ ���� ����� �Է��ϼ���(ex. 1080): ");
			scanf("%d", &y_size);
			break;
		default:
			break;
		}

		x_zoom = (((double)y_size / x_size) * ((double)x_timeline_size / y_timeline_size)) / 5;
		y_zoom = 0.2;

		printf("Zoom���� X: %lf, Y: %lf �� �����ϼ���. \n", x_zoom, y_zoom);
		printf("Position���� X: %d, Y: %d �� �����ϼ���. \n", -768 + 384 * (coordinate_x - 1), 432 - 216 * (coordinate_y - 1));

		system("pause");
		system("cls");
	}
	return 0;
}