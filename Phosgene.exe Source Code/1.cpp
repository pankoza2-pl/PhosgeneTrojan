#include <Windows.h>
#pragma comment(lib, "winmm.lib")

using namespace std;

int main(){
	PlaySoundW(L"1.wav", NULL, SND_LOOP | SND_ASYNC);
	Sleep(-1);
}

