//Windows 7の場合
#define _WIN32_WINN 0x0601

//WindowsXPの場合
//#define _WIN32_WINN 0x0502

#include <iostream>
#include <windows.h>
#include <Winbase.h>

using namespace std;

int main()
{
	/*
#if( _WIN32_WINN >= 0x0601 )

	//アクティブプロセッサ数
	DWORD count = GetActiveProcessorCount(ALL_PROCESSOR_GROUPS);
	cout << "このPCのアクティブなプロセッサの数は「" << count << "」です" << endl;

	//アクティブプロセッサグループ数
	DWORD group = GetActiveProcessorGroupCount();
	cout << "このPCのアクティブなプロセッサグループの数は「" << group << "」です" << endl;

	//浮動小数点
	/*
	cout << "このCPUに浮動小数点機能は？　";
	if (GetEnabledExtendedFeatures(XSTATE_MASK_LEGACY_FLOATING_POINT) != 0)
		cout << "あり" << endl;
	else
		cout << "なし" << endl;
	*/
	//SSE
	/*
	cout << "このCPUにSSE機能は？　";
	if (GetEnabledExtendedFeatures(XSTATE_MASK_LEGACY_SSE) != 0)
		cout << "あり" << endl;
	else
		cout << "なし" << endl;
	*/
	//Intel AVX
	/*
	cout << "このCPUにIntel AVX機能は？　";
	if (GetEnabledExtendedFeatures(XSTATE_MASK_GSSE) != 0)
		cout << "あり" << endl;
	else
		cout << "なし" << endl;
	*/
#else
	cout << "このサンプルはWindows 7用です。" << endl;
	cout << "Windows 7以降のOS上でないと動作しません。" << endl;
#endif

	//終了
	cout << endl << endl;
	*/
	return 0;
}





