/*
�����K3-25
List3-3(p.87)�̐����ăQ�[���̃v���[�����l����͂ł���񐔂ɐ�����݂����v���O�������쐬����B
�����񐔓��ɓ��Ă��Ȃ������ꍇ�́A������\�����ăQ�[�����I�����邱�ƁB
*/

// ���o�́A�����A���t�����������̂ŁA�C���N���[�h
#include <iostream>
#include <cstdlib>
#include <ctime>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���t�������痐���̎�𐶐�
	srand(time(NULL));
	
	// ���������H���āA0�`99�̗����𐶐����A�����Ă̐����ł���answerInt��������
	int answerInt = rand() % 100;
	
	// �L�[�{�[�h����̉񓚓��͂��i�[���邽�߂̕ϐ���錾
	int inputInt;
	
	// �񓚂̉񐔐�����萔�Őݒ肷��B�����5�ƒ�`�B
	const int LIMIT_INT = 5;
	
	// �o��̃��b�Z�[�W���o��
	cout << "�����ăQ�[���J�n!!\n";
	cout << "0�`99�̐��𓖂ĂĂ��������B\n";
	
	// �J�E���^�ϐ������[�v�̊O�ł��g���̂ŁA���炩���ߒ�`���Ă���
	int countInt = 0;
	
	// int�^�萔LIMIT_INT�̒l�Ɠ����������[�v����
	for( ; countInt < LIMIT_INT; countInt++ ){
		
		// �񓚓��͂𑣂����b�Z�[�W���o��
		cout << "�������ȁF";
		
		// ���͂��ꂽ�l��inputInt�Ɋi�[
		cin >> inputInt;
		
		// ���͒l�������ƈ�v�����ꍇ
		if( inputInt == answerInt ){
			
			// for���𔲂���
			break;
		}
		
		// ���͒l�Ɛ����l���r���A���͒l�̂ق����傫���ꍇ
		if( inputInt > answerInt ){
			
			// �q���g�ɂȂ郁�b�Z�[�W���o��
			cout << "�����Ə����Ȑ�����B\n";
		}
		
		// ���͒l�Ɛ����l���r���A���͒l�̂ق����������ꍇ
		else if( inputInt < answerInt ){
			
			// �q���g�ɂȂ郁�b�Z�[�W���o��
			cout << "�����Ƒ傫�Ȑ�����B\n";
		}
	}
	
	// �񐔐����Ɖ񓚉񐔂��r���āA�����ɂ���ă��[�v�𔲂����̂��𔻒�
	if( countInt < LIMIT_INT ){
		
		// �����̃��b�Z�[�W���o��
		cout << "�����ł��B\n";
	}
	
	// �������Ă��Ȃ��ꍇ
	else{
		
		// �񐔐؂�̃��b�Z�[�W�Ɛ����̒l���o��
		cout << "�c�O�A�񐔐؂�ł��B�����́A" << answerInt << "�ł����B\n";
	}
}
