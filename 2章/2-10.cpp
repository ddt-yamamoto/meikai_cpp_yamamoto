/*
�����K2-10
�L�[�{�[�h����ǂݍ��񂾎O�̐����̍ŏ��l�����߂ĕ\������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	int inputIntFirst;
	int inputIntSecond;
	int inputIntThird;
	
	// �L�[�{�[�h����̓��͂𑣂��A���͂��ꂽ�l��ϐ��Ɋi�[
	cout << "����A�F";		cin >> inputIntFirst;
	cout << "����B�F";		cin >> inputIntSecond;
	cout << "����C�F";		cin >> inputIntThird;
	
	// �ŏ��l�����Ă����ϐ�minInt���A��ڂ̓��͒l�ŏ�����
	int minInt = inputIntFirst;
	
	// ��ڂ̓��͒l��minInt��菬�������𔻒�
	if( inputIntSecond < minInt ){
		
		// �ŏ��l���X�V����
		minInt = inputIntSecond;
	}
	
	// ���l�ɁA�O�ڂ̓��͒l��minInt��菬�������𔻒�
	if( inputIntThird < minInt ){
		
		// �ŏ��l���X�V����
		minInt = inputIntThird;
	}
	
	cout << "���͒l�̒��ł̍ŏ��l�́A" << minInt << "�ł��B\n";
}
