//Windows 7�̏ꍇ
#define _WIN32_WINN 0x0601

//WindowsXP�̏ꍇ
//#define _WIN32_WINN 0x0502

#include <iostream>
#include <windows.h>
#include <Winbase.h>

using namespace std;

int main()
{
	/*
#if( _WIN32_WINN >= 0x0601 )

	//�A�N�e�B�u�v���Z�b�T��
	DWORD count = GetActiveProcessorCount(ALL_PROCESSOR_GROUPS);
	cout << "����PC�̃A�N�e�B�u�ȃv���Z�b�T�̐��́u" << count << "�v�ł�" << endl;

	//�A�N�e�B�u�v���Z�b�T�O���[�v��
	DWORD group = GetActiveProcessorGroupCount();
	cout << "����PC�̃A�N�e�B�u�ȃv���Z�b�T�O���[�v�̐��́u" << group << "�v�ł�" << endl;

	//���������_
	/*
	cout << "����CPU�ɕ��������_�@�\�́H�@";
	if (GetEnabledExtendedFeatures(XSTATE_MASK_LEGACY_FLOATING_POINT) != 0)
		cout << "����" << endl;
	else
		cout << "�Ȃ�" << endl;
	*/
	//SSE
	/*
	cout << "����CPU��SSE�@�\�́H�@";
	if (GetEnabledExtendedFeatures(XSTATE_MASK_LEGACY_SSE) != 0)
		cout << "����" << endl;
	else
		cout << "�Ȃ�" << endl;
	*/
	//Intel AVX
	/*
	cout << "����CPU��Intel AVX�@�\�́H�@";
	if (GetEnabledExtendedFeatures(XSTATE_MASK_GSSE) != 0)
		cout << "����" << endl;
	else
		cout << "�Ȃ�" << endl;
	*/
#else
	cout << "���̃T���v����Windows 7�p�ł��B" << endl;
	cout << "Windows 7�ȍ~��OS��łȂ��Ɠ��삵�܂���B" << endl;
#endif

	//�I��
	cout << endl << endl;
	*/
	return 0;
}





