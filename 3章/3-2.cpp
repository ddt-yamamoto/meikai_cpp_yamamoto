/*
�����K3-2
2���̐����l(10�`99)�𓖂Ă�����s�����ăQ�[���t���쐬����B
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
	
	// ���������H���āA10�`99�̗����𐶐����A�����Ă̐����ł���answerInt��������
	int answerInt = rand() % 90 + 10;
	
	// �L�[�{�[�h����̉񓚓��͂��i�[���邽�߂̕ϐ���錾
	int inputInt;
	
	// �o��̃��b�Z�[�W���o��
	cout << "�����ăQ�[���J�n!!\n";
	cout << "10�`99�̐��𓖂ĂĂ��������B\n";
	
	// while�̏����𖞂�������A�Œ���ȏ�J��Ԃ����s
	do{
		
		// �񓚓��͂𑣂����b�Z�[�W���o��
		cout << "�������ȁF";
		
		// ���͂��ꂽ�l��inputInt�Ɋi�[
		cin >> inputInt;
		
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
	
	// ���͂��ꂽ�l�Ɠ����̒l���قȂ�΁A�����̕]���l��true�ƂȂ�A���[�v�{�̂�������x���s�B
	// �����łȂ����(�����Ȃ��)�A�����̕]���l��false�ƂȂ�Ado���̎��s���I���B
	while( inputInt != answerInt );
	
	// �Ō�Ɉ�x���������̃��b�Z�[�W���o��
	cout << "�����ł��B\n";
}
