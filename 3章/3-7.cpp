/*
�����K3-7
�E�Ɏ����悤�ɁA���̐����l��ǂݍ���ŁA���̌������o�͂���v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���i�[����ϐ���錾
	int quotientInt;
	
	// �������b�Z�[�W���o��
	cout << "���̐����l�F\n";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> quotientInt;
	
	// ���߂錅����錾����0�ŏ�����
	int digitNumber = 0;
	
	// ���͒l(2���ڈȍ~�͏�)��0���傫������A���[�v���s��
	while( quotientInt > 0 ){
		
		// ���͒l�̏������߂�
		quotientInt /= 10;
		
		// �������C���N�������g
		digitNumber++;
		
		// ����0�̏ꍇ
		if( quotientInt == 0 ){
			
			// �ŏI�I�Ȍ������o��
			cout << "���̒l��" << digitNumber << "���ł��B\n";
		}
	}
}
