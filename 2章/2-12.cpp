/*
�����K2-12
List2-13�Ɠ��l�ɁA��̐����l��ǂݍ���ŁA�������ق��̒l�Ƒ傫���ق��̒l�̗�����\������v���O�������쐬����B
�������A��̐����l���������ꍇ�́A�E�Ɏ����悤�Ɂw��̒l�͓����ł��B�x�ƕ\�����邱�ƁB
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
	
	// �L�[�{�[�h����̓��͂𑣂��A���͂��ꂽ�l��ϐ��Ɋi�[
	cout << "����a�F";		cin >> inputIntFirst;
	cout << "����b�F";		cin >> inputIntSecond;
	
	// ���b�Z�[�W���قȂ�̂ŁA��l�������ꍇ���ɔ��肵�ď����Ă���
	if( inputIntFirst == inputIntSecond ){
		cout << "��̒l�͓����ł��B\n";
	}
	
	// ��l�������łȂ��ꍇ
	else{
		
		// �ő�l�A�ŏ��l������ϐ������ꂼ��錾����
		int maxInt;
		int minInt;
		
		// �����͒l�̂ق����傫���ꍇ
		if( inputIntFirst > inputIntSecond ){
		
			// �傫���ق���maxInt,�������ق���minInt�ɑ������
			maxInt = inputIntFirst;
			minInt = inputIntSecond;
		}
		
		// �����͒l�̂ق����傫���ꍇ
		else{
		
			// �傫���ق���maxInt,�������ق���minInt�ɑ������
			maxInt = inputIntSecond;
			minInt = inputIntFirst;
		}
	
		// ���ʂ��o�͂���
		cout << "�������ق��̒l�F" << minInt << "\n"
			 << "�傫���ق��̒l�F" << maxInt << "\n";
	}
}
