/*
�����K1-10
�E�Ɏ����悤�ɁA�L�[�{�[�h����ǂݍ��񂾐����l��
10���������l��10���������l���o�͂���v���O�������쐬����B
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �W�����͂��󂯎�邽�߂�int�^�ϐ��̐錾
	int firstInputInt;
	
	// �L�[�{�[�h����̕W�����͂𑣂�
	cout << "�����l�F";
	
	// �W�����̓X�g���[�����璊�o�q���g���Ēl�����o���A�����int�^�ϐ���firstInputInt�Ɋi�[
	cin >> firstInputInt;
	
	// ���Z���ʂ�W���o�̓X�g���[���ɑ}��
	cout << "10���������l��" << firstInputInt + 10 << "�ł��B\n";
	cout << "10���������l��" << firstInputInt - 10 << "�ł��B\n";
}
