/*
�����K3-14
���K3-8�����������āA5�\�����邲�Ƃɉ��s����v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���i�[����ϐ���錾
	int asteriskNumber;
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "����*��\�����܂����F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> asteriskNumber;
	
	// ���͒l�Ɠ����񐔂������[�v�������s��
	for( int countInt = 1; countInt <= asteriskNumber; countInt++ ){
		
		// ���[�v���ƂɈ�̕������o��
		cout << '*';
		
		// 5���1��A���s�������o�͂��镔��
		if( countInt % 5 == 0 ){
			
			// ���s�������o��
			cout << '\n';
		}
	}
	
	// ���͂��ꂽ�l��1�����ł���΁A�Ō�̉��s�����͏o�͂��Ȃ�
	if( asteriskNumber >= 1 ){
		
		// �Ō�̉��s�������o��
		cout << '\n';
	}
}
