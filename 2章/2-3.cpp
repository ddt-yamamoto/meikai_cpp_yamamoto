/*
�����K2-3
���int�^�ϐ�a,b�ɒl��ǂݍ���ŁA���̑召�֌W���ȉ��̂����ꂩ�ŕ\������v���O�������쐬����B
�wa�̂ق����傫���ł��B�x�wb�̂ق����傫���ł��B�x�wa��b�͓����l�ł��B�x
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	int inputIntFirst;
	int inputIntSecond;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "����a�F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntFirst;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "����b�F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntSecond;
	
	// a > b �̏ꍇ
	if( inputIntFirst > inputIntSecond ){
		
		// ���茋�ʂ��o��
		cout << "a�̂ق����傫���ł��B\n";
	}
	
	// a < b �̏ꍇ
	else if( inputIntFirst < inputIntSecond ){
		
		// ���茋�ʂ��o��
		cout << "b�̂ق����傫���ł��B\n";
	}
	
	// ����ȊO( a == b )�̏ꍇ
	else{
		// ���茋�ʂ��o��
		cout << "a��b�͓����l�ł��B\n";
	}
}
