/*
�����K2-7
��̎����l��ǂݍ���ŁA�傫���ق��̒l��\������v���O�������쐬����B
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	double inputDoubleFirst;
	double inputDoubleSecond;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "�����la����́F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputDoubleFirst;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "�����lb����́F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputDoubleSecond;
	
	// �������Z�q��p���āAa��b�̑傫���ق��̒l�ŕϐ�maxDouble��������
	double maxDouble = inputDoubleFirst > inputDoubleSecond ? inputDoubleFirst : inputDoubleSecond;
	
	cout << "�傫���ق��̎�����" << maxDouble << "�ł��B\n";
}
