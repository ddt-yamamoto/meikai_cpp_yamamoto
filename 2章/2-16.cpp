/*
�����K2-16
����1�`12�̐����l�Ƃ��ēǂݍ���ŁA����ɑΉ�����G�߂�\������v���O�������쐬����B
��switch����p���Ď������邱�ƁB
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͂���錎���i�[����ϐ���錾
	int inputMonth;
	
	// �L�[�{�[�h����̓��͂𑣂��A���͂��ꂽ�l��ϐ��Ɋi�[
	cout << "�G�߂𔻒肷�錎�F";	cin >> inputMonth;
	
	// inputMonth�̒l�ɉ����āAswitch����p���ď����𕪊򂳂���
	switch(inputMonth){
		case 3	:				// 3���̂Ƃ�
		case 4	:				// 4���̂Ƃ�
		case 5	:				// 5���̂Ƃ�
			cout << "�t\n";		// ���b�Z�[�W���o��
			break;				// switch���𔲂���
		case 6	:				// 6���̂Ƃ�
		case 7	:				// 7���̂Ƃ�
		case 8	:				// 8���̂Ƃ�
			cout << "��\n";		// ���b�Z�[�W���o��
			break;				// switch���𔲂���
		case 9	:				// 9���̂Ƃ�
		case 10	:				// 10���̂Ƃ�
		case 11	:				// 11���̂Ƃ�
			cout << "�H\n";		// ���b�Z�[�W���o��
			break;				// switch���𔲂���
		case 12	:				// 12���̂Ƃ�
		case 1	:				// 1���̂Ƃ�
		case 2	:				// 2���̂Ƃ�
			cout << "�~\n";		// ���b�Z�[�W���o��
			break;				// switch���𔲂���
		default	:				// �O�̂��߂̕⑫�p
			break;				// switch���𔲂���
	}
}
