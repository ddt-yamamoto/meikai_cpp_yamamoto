/*
�����K3-20-a
List3-14�͍����������p�̒��p�O�p�`��\������v���O�����ł������B
���p�����㑤�A�E�����A�E�㑤�̒��p�O�p�`��\������v���O���������ꂼ��쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l�̊i�[�p�ϐ���錾
	int inputInt;
	
	// �������b�Z�[�W���o��
	cout << "���㒼�p�̎O�p�`��\�����܂��B\n";
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "�i���́F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt;
	
	// �}�`�̏c�������[�v�ŕ\��
	for( int lowInt = 1; lowInt <= inputInt; lowInt++ ){
		
		// �}�`�̉��������[�v�ŕ\��
		// �s���i�ނقǗ񐔂����Ȃ��Ȃ�悤�ɁA���[�v�p�ϐ�colInt�̏����l�𒲐�
		for( int colInt = lowInt; colInt <= inputInt; colInt++ ){
			
			// �`��p�̕������o��
			cout << '*';
		}
		
		// �����̃��[�v���I���A���̍s�ɐi�ނ̂ŉ��s���o��
		cout << '\n';
	}
}
