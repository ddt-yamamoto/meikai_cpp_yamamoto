/*
�����K3-16
�E�Ɏ����悤�ɁA1����n�܂ł̐����l��2��l��\������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���i�[����ϐ���錾
	int inputInt;
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "n�̒l�F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt;
	
	// 1����n�̒l�܂Ń��[�v
	for( int countInt = 1; countInt <= inputInt; countInt++ ){
		
		// �v�Z���ʂ��܂ރ��b�Z�[�W���o��
		cout << countInt << "�̂Q��l��" << countInt * countInt << '\n';
	}
}
