/*
�����K3-3
�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�������ق��̐��ȏ�ő傫���ق��̐��ȉ��̑S�������A�������ق����珇�ɕ\������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �L�[�{�[�h����̉񓚓��͂��i�[���邽�߂̕ϐ���錾
	int inputInt1st;
	int inputInt2nd;
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "����A:";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt1st;
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "����B:";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt2nd;
	
	// ����A�̂ق�������B���傫���ꍇ�AA��B�̒l�����ւ���B
	if( inputInt1st > inputInt2nd ){
		
		// �ꎞ�I�Ȋ��p�ӂ��āA����A�̒l��ۊ�
		int temporaryInt = inputInt1st;
		
		// ����A�̕ϐ��ɐ���B�̒l����
		inputInt1st = inputInt2nd;
		
		// ����B�̕ϐ��ɁA�ۊǂ��Ă���������A�̒l�������ē���ւ�������
		inputInt2nd = temporaryInt;
	}
	
	// while�̏����𖞂�������A�Œ���ȏ�J��Ԃ����s
	do{
		
		// 2�l�̂����������ق��̒l���o�͂������ƁA1�傫������B�����Đ���������Ƃ��̂��߂ɔ��p�X�y�[�X�𖖔��ɂ���B
		cout << inputInt1st++ << " ";
	}
	
	// �������ق��̒l��1���傫�����Ă��������ʁA�傫���ق��̒l�𒴂������_�Ń��[�v�{�̂𔲂���
	while( inputInt1st <= inputInt2nd );
	
	// ���[�v�𔲂�����A�Ō�ɉ��s�R�[�h���o��
	cout << "\n";
}
