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
	printf("가로에 배치할 화면 수를 입력하세요: ");
	scanf("%d", &x_screen_count);

	printf("세로에 배치할 화면 수를 입력하세요: ");
	scanf("%d", &y_screen_count);

	printf("----------------------------------------------------------------------------------------------\n");
	printf("귀하의 가로 화면 수 x 세로 화면 수는 %d x %d 입니다. \n", x_screen_count, y_screen_count);
	printf("----------------------------------------------------------------------------------------------\n");

	printf("Timeline의 해상도는 일반적으로 1920x1080입니다. 혹시 모르니 setting에서 확인하시기 바랍니다. \n");
	printf("Timeline의 x size를 입력하세요: ");
	scanf("%d", &x_timeline_size);

	printf("Timeline의 y size를 입력하세요: ");
	scanf("%d", &y_timeline_size);

	printf("----------------------------------------------------------------------------------------------\n");
	printf("귀하의 Timeline 해상도는  %d x %d 입니다. \n", x_timeline_size, y_timeline_size);
	printf("----------------------------------------------------------------------------------------------\n");

	system("pause");
	system("cls");

	/***************** # MENU *******************/

	while (1) {
		printf("----------------------------------------------------------------------------------------------\n");
		printf("WARNING!!! 지휘자님 사진은 해상도가 일반적인 규격과 다르기 때문에 사용하지 마십시오.\n");
		printf("----------------------------------------------------------------------------------------------\n");

		printf("가로 x번째 칸에 배치할지 입력하시오: ");
		scanf("%d", &coordinate_x);

		printf("세로 y번째 칸에 배치할지 입력하시오: ");
		scanf("%d", &coordinate_y);

		system("cls");

		printf("격자에서 (%d, %d)에 있는 화면을 배치합니다. \n", coordinate_x, coordinate_y);

		printf("영상의 가로 세로 사이즈를 입력하세요(번호로 입력 또는 수동 입력) \n");
		printf("1. 1920 x 1080 \n");
		printf("2. 1280 x 720 \n");
		printf("3. 640 x 360 \n");
		printf("4. 수동입력 \n");

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
			printf("영상의 가로 사이즈를 입력하세요(ex. 1920): ");
			scanf("%d", &x_size);
			printf("영상의 세로 사이즈를 입력하세요(ex. 1080): ");
			scanf("%d", &y_size);
			break;
		default:
			break;
		}

		x_zoom = (((double)y_size / x_size) * ((double)x_timeline_size / y_timeline_size)) / 5;
		y_zoom = 0.2;

		printf("Zoom값을 X: %lf, Y: %lf 로 설정하세요. \n", x_zoom, y_zoom);
		printf("Position값을 X: %d, Y: %d 로 설정하세요. \n", -768 + 384 * (coordinate_x - 1), 432 - 216 * (coordinate_y - 1));

		system("pause");
		system("cls");
	}
	return 0;
}