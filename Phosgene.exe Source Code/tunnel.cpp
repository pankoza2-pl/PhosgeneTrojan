#include <windows.h>
#include <time.h>

int main()
{
	int a, b;
	while (0 == 0) {
		a = GetSystemMetrics(SM_CXSCREEN);
		b = GetSystemMetrics(SM_CYSCREEN);
		StretchBlt(GetDC(NULL), 50, 50, a - 100, b - 100, GetDC(NULL), 0, 0, a, b, SRCCOPY);
	}
}
