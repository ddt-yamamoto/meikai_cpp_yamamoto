/*
�����K3-6
�ǂݍ��񂾒l�̌������L��������\������v���O�������쐬����B+��-�����݂ɕ\�����邱�ƁB
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���i�[����ϐ���錾
	int symbolNumber;
	
	// �������b�Z�[�W���o��
	cout << "���\�����܂����F\n";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> symbolNumber;
	
	// while���[�v�p�̃J�E���^�ϐ����`
	int countInt = 0;
	
	// �J�E���^�ϐ������͒l��菬��������A���[�v���s��
	while( countInt < symbolNumber ){
		
		// �J�E���^�ϐ��ɑ΂���2�̏�]�����߁A+��-�̏o�͂����݂ɐU�蕪����B
		if( countInt % 2 == 0 ){
			
			// '+'����o��
			cout << '+';
		}
		
		// ��]��0�łȂ��Ƃ��͂�����ɂȂ�
		else{
			
			// '-'����o��
			cout << '-';
		}
		
		// �O�u�������Z�q���J�E���^�ϐ��ɑ΂��ēK�p���āA���ꂪ���͒l�Ɠ������Ȃ����Ƃ��̓��[�v�̍Ō�Ȃ̂ŁA��x�������s�����
		if( symbolNumber == ++countInt ){
			
			// �Ō�Ɉ�x�������s�R�[�h���o��
			cout << '\n';
		}
	}
}
