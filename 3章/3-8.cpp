/*
�����K3-8
�ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤�ɁAList3-10(p.100)�������������v���O�������쐬����B
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
	for( int countInt = 0; countInt < asteriskNumber; countInt++ ){
		
		// ���[�v���ƂɈ�̕������o��
		cout << '*';
	}
	
	// ���͂��ꂽ�l��1�����ł���΁A�Ō�̉��s�����͏o�͂��Ȃ�
	if( asteriskNumber >= 1 ){
		
		// �Ō�̉��s�������o��
		cout << '\n';
	}
}
