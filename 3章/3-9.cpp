/*
�����K3-9
���̐����l��0�܂ŃJ�E���g�_�E������List3-4(p.88)��for���Ŏ�������B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �J�E���g�_�E�����J�n���鐔�l���i�[����ϐ���錾
	int startInt;
	
	// �������b�Z�[�W���o��
	cout << "�J�E���g�_�E�����܂��B\n";
	
	// ���͒l��0�ȉ��ł���΁A�J��Ԃ����͂����߂�
	do{
		
		// �J�E���g�_�E���̊J�n���l�̓��͂𑣂�
		cout << "���̐����l�F";
		
		// ���͒l��ϐ��Ɋi�[
		cin >> startInt;
	}
	
	// ���͒l��0�ȉ��ł���΁A���[�v�𑱂���
	while( startInt <= 0 );
	
	// startInt�̒l��0�ɂȂ�܂ŁA���[�v���Ƃ�1�����������Ă���
	for(; startInt >= 0; startInt-- ){
		
		// ���[�v���ƂɌ����_�ł�startInt�̒l���A���s�R�[�h���ŏo��
		cout << startInt << '\n';
	}
}
