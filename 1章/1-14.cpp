/*
�����K1-14
�L�[�{�[�h����ǂݍ��񂾐����l�v���X�}�C�i�X5�͈̔͂̐����l�������_���ɐ������ĕ\������v���O�������쐬����B
���L�[�{�[�h����ǂݍ��񂾒l��100�ł���΁A95�`105�̐����l��\�����邱�ƁB
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
	
	// -5�`5�̗����𐶐����A�����int�ϐ���������
	int randIntFirst = rand() % 11 - 5;
	
	// �L�[�{�[�h����̓��͒l�̎󂯎��p�ϐ���錾
	int inputIntFirst;
	
	// �L�[�{�[�h����̐��l���͂𑣂�
	cout << "�����l�F";
	
	// �L�[�{�[�h�ɓ��͂��ꂽ�l�𒊏o�q���g���ĕϐ��Ɋi�[
	cin >> inputIntFirst;
	
	// ���͒l�ƃ����_���̕ω��������Z���A�W���o�͂���
	cout << "���̒l�́}5�̗����𐶐����܂����B�����" << inputIntFirst + randIntFirst << "�ł��B\n";
}
