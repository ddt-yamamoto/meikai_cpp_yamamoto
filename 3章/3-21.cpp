/*
�����K3-21
n�i�̃s���~�b�h��\������v���O�������쐬����B
��i�s�ڂɂ� ( i - 1 ) * 2 + 1 ��'*'�L����\�����邱��(�ŏI�s�ł����n�s�ڂɂ� ( n - 1 ) * 2 + 1 ��'*'�L����\�����邱�ƂɂȂ�)�B
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
	cout << "�i���́F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt;
	
	// �}�`�̏c�������[�v�ŕ\��
	for( int lowInt = 1; lowInt <= inputInt; lowInt++ ){
		
		// �}�`�̉��������[�v�ŕ\��
		// �s���i�ނقǉ񐔂����Ȃ��Ȃ�悤�ɁA���[�v�p�ϐ�colInt�̏����l�𒲐�
		for( int colInt = lowInt; colInt < inputInt; colInt++ ){
			
			// �`��p�̕������o��
			cout << ' ';
		}
		
		// �}�`�̉��������[�v�ŕ\��
		// �s���i�ނقǉ񐔂������Ȃ�悤�ɁA���[�v�̏I�������𒲐�
		for( int colInt = 1; colInt <= ( lowInt - 1 ) * 2 + 1; colInt++ ){
			
			// �`��p�̕������o��
			cout << '*';
		}
		
		// �}�`�̉��������[�v�ŕ\��
		// �s���i�ނقǉ񐔂����Ȃ��Ȃ�悤�ɁA���[�v�p�ϐ�colInt�̏����l�𒲐�
		for( int colInt = lowInt; colInt < inputInt; colInt++ ){
			
			// �`��p�̕������o��
			cout << ' ';
		}
		
		// �����̃��[�v���I���A���̍s�ɐi�ނ̂ŉ��s���o��
		cout << '\n';
	}
}
