/*
�����K2-8
��̐����l��ǂݍ���ŁA�����̒l�̍���\������v���O�������쐬����B
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
	cout << "����a����́F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntFirst;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "����b����́F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntSecond;
	
	// �܂��������Z�q��p���đ召������s���A�傫���ق����珬�����ق������������ɂāAdifferenceInt������������
	int differenceInt = inputIntFirst > inputIntSecond ? inputIntFirst - inputIntSecond : inputIntSecond - inputIntFirst;
	
	// ���ʂ�\��
	cout << "��̐����̍���" << differenceInt << "�ł��B\n";
}
