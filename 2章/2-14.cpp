/*
�����K2-14
0,1,2�̂����ꂩ�̒l�̗����𐶐����A0�ł���΁w�O�[�x�A1�ł���΁w�`���L�x�A2�ł���΁w�p�[�x�ƕ\������v���O�������쐬����B
��switch����p���Ď������邱�ƁB
*/

// ���o�́A���t�����A�����_���ϐ��������̂ŁA���ꂼ��C���N���[�h
#include <iostream>
#include <ctime>
#include <cstdlib>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �����̎����t��������ݒ�
	srand(time(NULL));
	
	// �ϐ�randint��錾���A�����ɑ΂���3�̏�]�ł���0,1,2�̂����ꂩ�ŏ���������
	int randInt = rand() % 3;
	
	// randInt�̒l�ɉ����āAswitch����p���ď����𕪊򂳂���
	switch(randInt){
		case 0	:					// 0�̂Ƃ�
			cout << "�O�[\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 1	:					// 1�̂Ƃ�
			cout << "�`���L\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 2	:					// 2�̂Ƃ�
			cout << "�p�[\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		default	:					// �O�̂��߂̕⑫�p
			break;					// switch���𔲂���
	}
}
