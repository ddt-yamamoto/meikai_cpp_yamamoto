/*
�����K2-15
���݂����v���O�������쐬����B�����𐶐����āA�w��g�x�w���g�x�w���g�x�w�g�x�w���g�x�w���x�w�勥�x�̂����ꂩ��\�����邱�ƁB
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
	
	// ���݂�����7��ނ���B�ϐ�randint��錾���A�����ɑ΂���7�̏�]�ł���0�`6�̂����ꂩ�ŏ���������
	int randInt = rand() % 7;
	
	// randInt�̒l�ɉ����āAswitch����p���ď����𕪊򂳂���
	switch(randInt){
		case 0	:					// 0�̏ꍇ
			cout << "��g\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 1	:					// 0�̏ꍇ
			cout << "���g\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 2	:					// 0�̏ꍇ
			cout << "���g\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 3	:					// 0�̏ꍇ
			cout << "�g\n";			// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 4	:					// 0�̏ꍇ
			cout << "���g\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 5	:					// 0�̏ꍇ
			cout << "��\n";			// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		case 6	:					// 0�̏ꍇ
			cout << "�勥\n";		// ���b�Z�[�W���o��
			break;					// switch���𔲂���
		default	:					// �O�ׂ̈̕⑫�p
			break;					// switch���𔲂���
	}
}
