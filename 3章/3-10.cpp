/*
�����K3-10
�O��Ƃ͋t�ɁA0���琳�̐����l�܂ŃJ�E���g�A�b�v����v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �J�E���g�A�b�v�̏���ƂȂ鐔�l���i�[����ϐ���錾
	int endInt;
	
	// �������b�Z�[�W���o��
	cout << "�J�E���g�A�b�v���܂��B\n";
	
	// ���͒l��0�ȉ��ł���΁A�J��Ԃ����͂����߂�
	do{
		
		// �J�E���g�A�b�v�̏�����l�̓��͂𑣂�
		cout << "���̐����l�F";
		
		// ���͒l��ϐ��Ɋi�[
		cin >> endInt;
	}
	
	// ���͒l��0�ȉ��ł���΁A���[�v�𑱂���
	while( endInt <= 0 );
	
	// 0�ŏ���������countInt���`���AendInt�ɒB����܂Ń��[�v���Ƃ�1���傫�����Ă���
	for( int countInt = 0; countInt <= endInt; countInt++ ){
		
		// ���[�v���ƂɌ����_�ł�countInt�̒l���A���s�R�[�h���ŏo��
		cout << countInt << '\n';
	}
}
