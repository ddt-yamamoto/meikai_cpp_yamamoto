/*
�����K1-11
�E�Ɏ����悤�ɁA��̎����l��ǂݍ��݁A
���̍��v�ƕ��ς����߂ĕ\������v���O�������쐬����B
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �W�����͂�������l���󂯎�邽�߂�double�^�ϐ���錾
	double firstInputDouble;
	double secondInputDouble;
	
	// �L�[�{�[�h����̕W�����͂𑣂�
	cout << "firstInputDouble�̒l�F";
	
	// �W�����̓X�g���[�����璊�o�q���g���Ēl�����o���A�����double�^�ϐ���firstInputDouble�Ɋi�[
	cin >> firstInputDouble;
	
	// �����āAsecondInputDouble�ɂ��Ă����l�ɕW�����͂���l���󂯎���Ċi�[����
	cout << "secondInputDouble�̒l�F";
	cin >> secondInputDouble;
	
	// ���Z���s���A���ʂ�W���o�̓X�g���[���ɑ}��
	cout << "���v��" <<   firstInputDouble + secondInputDouble       << "�ł��B\n";
	cout << "���ς�" << ( firstInputDouble + secondInputDouble ) / 2 << "�ł��B\n";
}
