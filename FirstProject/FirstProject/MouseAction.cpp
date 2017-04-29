#include<Windows.h>

LRESULT CALLBACK  WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASS WndClass;
	HWND hwnd;
	MSG msg;

	WndClass.style = CS_HREDRAW | CS_VREDRAW;
	WndClass.lpfnWndProc = WndProc;
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	WndClass.hInstance = hInstance;
	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
	WndClass.lpszMenuName = NULL;
	WndClass.lpszClassName = TEXT("MouseClass");

	if (!RegisterClass(&WndClass))
		return 1;

	hwnd = CreateWindow(
		TEXT("MouseClass"),
		TEXT("MouseSDK"),
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,
		NULL,
		hInstance,
		NULL
	);

	ShowWindow(hwnd, nCmdShow);

	while (GetMessage(&msg, NULL, 0, 0) > 0) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;



}
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
	HDC hdc;
	PAINTSTRUCT ps;
	TCHAR *str1 = TEXT("���콺 ��ư�� Ŭ���ϼ���.");
	TCHAR *str2 = TEXT("���콺�� ������ �Ǵ� ���� ��ư�� Ŭ���Ͻø� �޽��� ���ڰ� ��Ÿ ���ϴ�.");

	switch (message)
	{
	case WM_CREATE:
		return 0;

	case WM_LBUTTONDOWN:
		
		MessageBox (hwnd, TEXT("���콺�� ���� ��ư�� Ŭ���ϼ̽��ϴ�."), TEXT("���콺 ���� ��ư Ŭ��"), MB_OK);
		return 0;

	case WM_RBUTTONDOWN:
		MessageBox (hwnd, TEXT("���콺�� ������ ��ư�� Ŭ���ϼ̽��ϴ�."), TEXT("���콺 ������ ��ư Ŭ��"), MB_OK);
		return 0;

	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		TextOut(hdc, 100, 100, str1, lstrlen(str1));
		TextOut(hdc, 100, 200, str1, lstrlen(str2));
		EndPaint(hwnd, &ps);
		return 0;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	}
	return DefWindowProc(hwnd, message, wParam, lParam);


}
