/*
�����K3-18
���̕\��\������List3-13(p.106)���Asetw����q��p���邱�ƂȂ���������悤�ɏ����������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���\�̏c�������[�v�ŕ\��
	for( int lowInt = 1; lowInt <= 9; lowInt++ ){
		
		// ���\�̉��������[�v�ŕ\��
		for( int colInt = 1; colInt <= 9; colInt++ ){
			
			// ���̌v�Z���ʂ�1���̏ꍇ
			if( lowInt * colInt < 10 ){
				
				// ���v3���ƂȂ�悤�A�擪�ɔ��p�X�y�[�X��2���ǉ����ďo��
				cout << "  " << lowInt * colInt;
			}
			
			// ���̌v�Z���ʂ�2���̏ꍇ
			else{
				
				// ���v3���ƂȂ�悤�A�擪�ɔ��p�X�y�[�X��1���ǉ����ďo��
				cout << " " << lowInt * colInt;
			}
		}
		
		// �����̃��[�v���I���A���̍s�ɐi�ނ̂ŉ��s���o��
		cout << '\n';
	}
}
