/*
���콺 �׼� ���α׷�
2017�� 4��29��
ù��° �������� MFC ���α׷�
Visual Studio 2017�� ����
*/

//�������
#include<Windows.h>

LRESULT CALLBACK  WndProc(HWND, UINT, WPARAM, LPARAM);

//�����Լ�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASS WndClass;// ������ Ŭ���� ����ü
	HWND hwnd;//������ �ڵ�
	MSG msg;//�޽��� ����ü


	// ������ Ŭ���� �ʱ�ȭ�� ���
	WndClass.style = CS_HREDRAW | CS_VREDRAW;//Ŭ���� ��Ÿ��
	WndClass.lpfnWndProc = WndProc;// ������ ���ν���
	WndClass.cbClsExtra = 0; // ������ Ŭ���� ����Ÿ ����
	WndClass.cbWndExtra = 0;//�������� ������ ����
	WndClass.hInstance = hInstance;//�ν�ź�� �ڵ�
	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);//������ �ڵ�
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);// Ŀ�� �ڵ�
	WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH); //��� �귯�� �ڵ�(������)
	WndClass.lpszMenuName = NULL;//�޴��̸�
	WndClass.lpszClassName = TEXT("MouseClass");//������ Ŭ���� �̸�

	if (!RegisterClass(&WndClass)) //������ Ŭ���� ��������
		return 1;
	
	hwnd = CreateWindow( // ������ ���� API�Լ�
		TEXT("MouseClass"), // ��ϵ� ������ Ŭ���� �̸�
		TEXT("MouseSDK"), // Ÿ��Ʋ �ٿ� ���µ� ����
		WS_OVERLAPPEDWINDOW, //������ ��Ÿ��
		CW_USEDEFAULT, // ������ ���� ����� X��ǥ
		CW_USEDEFAULT, // ������ ���� ����� Y��ǥ
		CW_USEDEFAULT, // �������� �ʺ�
		CW_USEDEFAULT, //�������� ����
		NULL, // �θ� �������� �ڵ�
		NULL, // �޴� �Ǵ� �ڽ� �ڵ�
		hInstance, //���ø����̼� �ν�ź�� �ڵ�
		NULL // ������ ���� �������� �ּ�
	);

	ShowWindow(hwnd, nCmdShow);//������ �����츦 ȭ�鿡 ǥ��

	//�޽��� ����
	while (GetMessage(&msg, NULL, 0, 0) > 0) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;

}
// ������ ���ν���
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;// ����̽� ���ؽ�Ʈ
	PAINTSTRUCT ps; // ����Ʈ ����ü
	TCHAR *str1 = TEXT("���콺 ��ư�� Ŭ���ϼ���.");
	TCHAR *str2 = TEXT("���콺�� ������ �Ǵ� ���� ��ư�� Ŭ���Ͻø� �޽��� ���ڰ� ��Ÿ ���ϴ�.");

	switch (message)//Ŀ�ο� ���� �޽����� ����ġ ������ ó��
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
		TextOut(hdc, 100, 200, str2, lstrlen(str2));
		EndPaint(hwnd, &ps);
		return 0;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	}
	return DefWindowProc(hwnd, message, wParam, lParam);


}
