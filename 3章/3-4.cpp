/*
�����K3-4
List3-4��while���I������x�̒l��-1�ɂȂ邱�Ƃ��m�F�ł���悤�ɏ����������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �J�E���g�_�E�����J�n���鐔�l���i�[����ϐ���錾
	int countInt;
	
	// �������b�Z�[�W���o��
	cout << "�J�E���g�_�E�����܂��B\n";
	
	// ���͒l��0�ȉ��ł���΁A�J��Ԃ����͂����߂�
	do{
		
		// �J�E���g�_�E���̊J�n���l�̓��͂𑣂�
		cout << "���̐����l�F";
		
		// ���͒l��ϐ��Ɋi�[
		cin >> countInt;
	}
	
	// ���͒l��0�ȉ��ł���΁A���[�v�𑱂���
	while( countInt <= 0 );
	
	// countInt��0�ȏ�ł������A�J�E���g�_�E�����s��
	while( countInt >= 0 ){
		
		// ���݂�countInt�̒l���A���s�R�[�h�ƂƂ��ɏo��
		cout << countInt << "\n";
		
		// countInt�̒l���f�N�������g����B
		countInt--;
	}
	
	// �J�E���g�_�E���I����A����ɂ�����x�f�N�������g���ꂽcountInt�̌��ݒl��\������
	cout << "���݂�x�̒l��" << countInt << "�ł�\n";
}
