/*
�����K3-1
�ǂݍ��񂾐����l�̕����𔻒肷��List2-5(p.44)���A�D���Ȃ������x�ł����́E�\�����J��Ԃ���悤�ɂ����v���O�������쐬����B
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
		int inputIntFirst;
		
		// �L�[�{�[�h����̓��͂𑣂�
		cout << "�����l�F";
		
		// ���͂��ꂽ�l��ϐ��Ɋi�[
		cin >> inputIntFirst;
		
		// ���͂��ꂽ�l�����ł���ꍇ
		if( inputIntFirst > 0 ){
			
			// ���茋�ʂ��o��
			cout << "���̒l�͐��ł��B\n";
		}
		
		// ���͂��ꂽ�l�����ł���ꍇ
		else if( inputIntFirst < 0 ){
			
			// ���茋�ʂ��o��
			cout << "���̒l�͕��ł��B\n";
		}
		
		// ���͂��ꂽ�l��0�ł���ꍇ
		else{
			
			// ���茋�ʂ��o��
			cout << "���̒l��0�ł��B\n";
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
