/*
�����K1-13
�ȉ��Ɏ����v���O�������쐬����B
�E1���̐��̐����l(���Ȃ킿 1�ȏ� 9�ȉ��̒l)�������_���ɐ������ĕ\���B
�E1���̕��̐����l(���Ȃ킿-9�ȏ�-1�ȉ��̒l)�������_���ɐ������ĕ\���B
�E2���̐��̐����l(���Ȃ킿10�ȏ�99�ȉ��̒l)�������_���ɐ������ĕ\���B
*/

// ��ɂ��邽�߂̓����ɂ�����郉�C�u�����ƁA�����_���֐��̂���W�����C�u�����A���o�̓��C�u�����̎�荞��
#include <ctime>
#include <cstdlib>
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �����̎�ɓ������g���Đݒ�
	srand(time(NULL));
	
	// 1�`9�̗����𐶐����A�����int�ϐ���������
	int randOneDigitPlus	=		rand() % 9 + 1;
	
	// -9�`-1�̗����𐶐����A�����int�ϐ���������
	int randOneDigitMinus	= - (	rand() % 9 + 1 );
	
	// 10�`99�̗����𐶐����A�����int�ϐ���������
	int randTwoDigitPlus	=		rand() % 90 + 10;
	
	// �e������W���o��
	cout << "1���̐��̐����l�F" << randOneDigitPlus		<< "\n";
	cout << "1���̕��̐����l�F" << randOneDigitMinus	<< "\n";
	cout << "2���̐��̐����l�F" << randTwoDigitPlus		<< "\n";
}
