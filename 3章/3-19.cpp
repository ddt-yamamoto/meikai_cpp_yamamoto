/*
�����K3-19
n�i�̐����`��\������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l�̊i�[�p�ϐ���錾
	int inputInt;
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "�\�����鐳���`�̒i���F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt;
	
	// �����`�̏c�������[�v�ŕ\��
	for( int lowInt = 1; lowInt <= inputInt; lowInt++ ){
		
		// �����`�̉��������[�v�ŕ\��
		for( int colInt = 1; colInt <= inputInt; colInt++ ){
			
			// �`��p�̕������o��
			cout << '*';
		}
		
		// �����̃��[�v���I���A���̍s�ɐi�ނ̂ŉ��s���o��
		cout << '\n';
	}
}
