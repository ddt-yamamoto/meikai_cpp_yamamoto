/*
�����K1-12
�E�Ɏ����悤�ɁA�O�p�`�̒�ӂƍ�����ǂݍ���ŁA
���̖ʐς�\������v���O�������쐬����B
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �W�����͂�������l���󂯎�邽�߂�double�^�ϐ���錾
	double inputBottomDouble;
	double inputHeightDouble;
	
	// �L�[�{�[�h����̕W�����͂𑣂�
	cout << "��ӁF";
	
	// �W�����̓X�g���[�����璊�o�q���g���Ēl�����o���A�����double�^�ϐ���inputBottomDouble�Ɋi�[
	cin >> inputBottomDouble;
	
	// �����āAinputHeightDouble�ɂ��Ă����l�ɕW�����͂���l���󂯎���Ċi�[����
	cout << "�����F";
	cin >> inputHeightDouble;
	
	// ���Z���s���A���ʂ�W���o�̓X�g���[���ɑ}��
	cout << "���v��" << ( inputBottomDouble * inputHeightDouble ) / 2 << "�ł��B\n";
}
