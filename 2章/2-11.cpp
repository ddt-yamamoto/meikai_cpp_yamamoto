/*
�����K2-11
�L�[�{�[�h����ǂݍ��񂾎O�̐����̒����l�����߂ĕ\������v���O�������쐬����B
�����Ƃ���2,3,1�̒����l��2�ŁA1,2,1�̒����l��1�ŁA3,3,3�̒����l��3�ł���B
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
	
	// �ő�l�A�����l�A�ŏ��l������ϐ������ꂼ��錾
	int maxInt;
	int midInt;
	int minInt;
	
	// ���A�����͒l��召��r���Ă����A�b�菇�ʂ����Ă���
	if( inputIntFirst > inputIntSecond ){
		
		// �傫���ق���maxInt,�������ق���minInt�ɑ������
		maxInt = inputIntFirst;
		minInt = inputIntSecond;
	}
	else{
		
		// �傫���ق���maxInt,�������ق���minInt�ɑ������
		maxInt = inputIntSecond;
		minInt = inputIntFirst;
	}
	
	// ��O���͒l���A�b��ő�l���傫�����ǂ����̔���
	if( inputIntThird > maxInt ){
		
		// �����ł���΁A�J�艺�����Ďb��ő�l�������l�ɂȂ�
		midInt = maxInt;
	}
	
	// ��O���͒l���A�b��ŏ��l��菬�������ǂ����̔���
	else if( inputIntThird < minInt ){
		
		// �����ł���΁A�J��オ���Ďb��ŏ��l�������l�ƂȂ�
		midInt = minInt;
	}
	
	// �ǂ�ł��Ȃ��ꍇ
	else{
		
		// ���̏ꍇ�A��O���͒l�������l�Ƃ������ƂɂȂ�
		midInt = inputIntThird;
	}
	
	// ���ʂ��o�͂���
	cout << "���͒l�̒��ł̒����l�́A" << midInt << "�ł��B\n";
}
