/*
�����K3-22
n�i�̉����������s���~�b�h��\������v���O�������쐬����B
��i�s�ڂɂ� i % 10 �ɂ���ē����鐔����\�����邱�ƁB
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
		// �s���i�ނقǉ񐔂������Ȃ�悤�ɁA���[�v�̏I�������𒲐�
		for( int colInt = 1; colInt < lowInt ; colInt++ ){
			
			// �`��p�̕������o��
			cout << ' ';
		}
		
		// �}�`�̉��������[�v�ŕ\��
		// �s���i�ނقǉ񐔂����Ȃ��Ȃ�悤�ɁA���[�v�̏I�������𒲐�
		for( int colInt = 1; colInt <= ( inputInt - lowInt ) * 2 + 1; colInt++ ){
			
			// �`��p�̕������o��
			cout << lowInt % 10;
		}
		
		// �}�`�̉��������[�v�ŕ\��
		// �s���i�ނقǉ񐔂������Ȃ�悤�ɁA���[�v�̏I�������𒲐�
		for( int colInt = 1; colInt < lowInt ; colInt++ ){
			
			// �`��p�̕������o��
			cout << ' ';
		}
		
		// �����̃��[�v���I���A���̍s�ɐi�ނ̂ŉ��s���o��
		cout << '\n';
	}
}
