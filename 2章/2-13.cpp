/*
�����K2-13
��̐����l��ǂݍ���ō~��(�傫����)�ɕ��ׂ�����v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	int inputIntFirst;
	int inputIntSecond;
	
	// �L�[�{�[�h����̓��͂𑣂��A���͂��ꂽ�l��ϐ��Ɋi�[
	cout << "�ϐ�a�F";		cin >> inputIntFirst;
	cout << "�ϐ�b�F";		cin >> inputIntSecond;
	
	// �~���ɂ��悤�Ƃ����Ƃ��A����ւ����K�v�Ȃ̂́A��ڂ̒l < ��ڂ̒l �̂Ƃ�
	if( inputIntFirst < inputIntSecond ){
		
		// ����ւ��̂��߂̕ۊǗp�ϐ���錾����ڂ̓��͒l�ŏ�����
		int tempInt		= inputIntFirst;
		
		// ��ڂ̓��͒l���A��ڂ̓��͒l�ɑ��
		inputIntFirst	= inputIntSecond;
		
		// �ۊǂ��Ă�������ڂ̓��͒l���A��ڂ̓��͒l�ɑ���A����œ���ւ�������
		inputIntSecond	= tempInt;
	}
	
	// ���g�����ւ������߁A���b�Z�[�W�̏o�͏��́A�~����First��Second�ŌŒ�
	cout << "a��b�ƂȂ�悤�Ƀ\�[�g���܂����B\n";
	cout << "�ϐ�a��" << inputIntFirst << "�ł��B\n";
	cout << "�ϐ�b��" << inputIntSecond << "�ł��B\n";
}
