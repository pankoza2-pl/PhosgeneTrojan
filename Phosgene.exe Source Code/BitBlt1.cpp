#include <Windows.h>

int main(){
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC desktop = GetDC(NULL);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);
	while(1){
		upWnd = GetForegroundWindow();
		upHdc = GetDC(upWnd);
		desktop = GetDC(NULL);
		for(int i = 0; i < 1900; i ++)
		BitBlt(desktop, i, i, i, i, desktop, 100, 100, NOTSRCERASE);
	}
}
