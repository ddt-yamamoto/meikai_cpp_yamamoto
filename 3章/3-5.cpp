/*
�����K3-5
�ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤��List3-6(p.92)�������������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���i�[����ϐ���錾
	int asteriskNumber;
	
	// �������b�Z�[�W���o��
	cout << "����*��\�����܂����F\n";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> asteriskNumber;
	
	// while���[�v�p�̃J�E���^�ϐ����`
	int countInt = 0;
	
	// �J�E���^�ϐ������͒l��菬��������A���[�v���s��
	while( countInt < asteriskNumber ){
		
		// '*'����o��
		cout << '*';
		
		// �O�u�������Z�q���J�E���^�ϐ��ɑ΂��ēK�p���āA���ꂪ���͒l�Ɠ������Ȃ����Ƃ��̓��[�v�̍Ō�Ȃ̂ŁA��x�������s�����
		if( asteriskNumber == ++countInt ){
			
			// �Ō�Ɉ�x�������s�R�[�h���o��
			cout << '\n';
		}
	}
}
