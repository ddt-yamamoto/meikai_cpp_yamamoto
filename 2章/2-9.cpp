/*
�����K2-9
�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�����̒l�̍���10�ȉ��ł���΁w�����̍���10�ȉ��ł��B�x�ƕ\�����A
�����łȂ���΁w�����̍���11�ȏ�ł��B�x�ƕ\������v���O�������쐬����B
*/

// ���o�͂�String�N���X�������̂ŁA�������C���N���[�h
#include <iostream>
#include <string>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	int inputIntFirst;
	int inputIntSecond;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "����A�F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntFirst;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "����B�F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntSecond;
	
	// �܂��������Z�q��p���đ召������s���A�傫���ق����珬�����ق������������ɂāAdifferenceInt������������
	int differenceInt = inputIntFirst > inputIntSecond ? inputIntFirst - inputIntSecond : inputIntSecond - inputIntFirst;
	
	// ���͒l�̍��ł���differenceInt��10���r���A�o�͂��郁�b�Z�[�W��ς��A������ł���answerString������������B
	string answerString = differenceInt <= 10 ? "�����̍���10�ȉ��ł��B\n" : "�����̍���11�ȏ�ł��B\n";
	
	// ���ʂ̃��b�Z�[�W���o��
	cout << answerString;
}
