/*
�����K2-6
�L�[�{�[�h����ǂݍ��񂾓_���ɉ����āA�D/��/��/�s�𔻒肵�ĕ\������v���O�������쐬����B
����͈ȉ��̂悤�ɍs�����ƁB
0�`59�˕s��/60�`69�ˉ�/70�`79�˗�/80�`100�˗D
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	int inputIntFirst;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "�_������́F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntFirst;
	
	// �_����0�ȏ�60�����̏ꍇ
	if( inputIntFirst >= 0 && inputIntFirst < 60 ){
		
		// �����\������
		cout << "�s��\n";
	}
	
	// �_����60�ȏ�70�����̏ꍇ
	else if( inputIntFirst >= 60 && inputIntFirst < 70 ){
		
		// �����\������
		cout << "��\n";
	}
	
	// �_����70�ȏ�80�����̏ꍇ
	else if( inputIntFirst >= 70 && inputIntFirst < 80 ){
		
		// �����\������
		cout << "��\n";
	}
	
	// �_����80�ȏ�100�ȉ��̏ꍇ
	else if( inputIntFirst >= 80 && inputIntFirst <= 100 ){
		
		// �����\������
		cout << "�D\n";
	}
}
