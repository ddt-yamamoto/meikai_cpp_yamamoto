/*
�����K3-17
�G�߂����߂�List3-1(p.82)�̌��̓Ǎ��݂ɂ����āA1�`12�ȊO�̒l�����͂��ꂽ�ꍇ�́A
�ē��͂�����悤�ɕύX�����v���O�������쐬����(do���̒���do���������d���[�v�ƂȂ�)�B
*/

// ���o�́Astring�N���X�������̂ŁA�C���N���[�h
#include <iostream>
#include <string>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �J��Ԃ������ǂ����̖₢�ɑ΂���AYes/No�̊i�[�pString�^�ϐ��̐錾
	string retryConfirm;
	
	// while�̏����𖞂�������A�Œ���ȏ�J��Ԃ����s
	do{
		
		// ���͒l���󂯎�邽�߂̕ϐ��̐錾
		int inputInt;
		
		// 1�`12�̐��������͂����܂ŌJ��Ԃ�
		do{
			// �L�[�{�[�h����̓��͂𑣂�
			cout << "�G�߂����߂܂��B\n�����ł����F";
			
			// ���͂��ꂽ�l��ϐ��Ɋi�[
			cin >> inputInt;
		}
		
		// ���͒l��1�`12�łȂ��ꍇ�A������x�J��Ԃ�
		while( inputInt < 1 || inputInt > 12 );
		
		// 3�`5���̏ꍇ
		if( inputInt >= 3 && inputInt <= 5 ){
			
			//���胁�b�Z�[�W���o��
			cout << "����͏t�ł��B\n";
		}
		
		// 6�`8���̏ꍇ
		else if( inputInt >= 6 && inputInt <= 8 ){
			
			//���胁�b�Z�[�W���o��
			cout << "����͉Ăł��B\n";
		}
		
		// 9�`11���̏ꍇ
		else if( inputInt >= 9 && inputInt <= 11 ){
			
			//���胁�b�Z�[�W���o��
			cout << "����͏H�ł��B\n";
		}
		
		// 12, 1, 2���̏ꍇ
		else if( inputInt == 12 || inputInt == 1 || inputInt == 2 ){
			
			//���胁�b�Z�[�W���o��
			cout << "����͓~�ł��B\n";
		}
		
		// �J��Ԃ������ǂ����̖₢�A�L�[�{�[�h���͂𑣂�
		cout << "������x�H Y�cYes/N�cNo:";
		
		// ���͂��ꂽ������̊i�[
		cin >> retryConfirm;
	}
	
	// ���͂��ꂽ�l��"Y"�܂���"y"�Ȃ�΁A�����̕]���l��true�ƂȂ�A���[�v�{�̂�������x���s�B
	// �����łȂ���΁A�����̕]���l��false�ƂȂ�Ado���̎��s���I���B
	while( retryConfirm == "Y" || retryConfirm == "y" );
}
