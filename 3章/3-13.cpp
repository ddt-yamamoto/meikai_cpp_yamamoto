/*
�����K3-13
�g���ƕW���̏d�̑Ή��\��\������v���O�������쐬����B
�\������g���͈̔�(�J�n�l/�I���l/����)�́A�����l�Ƃ��ēǂݍ��ނ��ƁB
���W���̏d��( �g�� - 100 ) * 0.9�ɂ���ċ��߂�B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// �g���̊J�n�l�A�I���l�A�������i�[����ϐ���錾
	int minHeightInt;		// �J�n�l
	int maxHeightInt;		// �I���l
	int intervalInt;		// ����
	
	// �g���̊J�n�l�̓��͂𑣂�
	cout << "��cm����F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> minHeightInt;
	
	// �g���̏I���l�̓��͂𑣂�
	cout << "��cm�܂ŁF";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> maxHeightInt;
	
	// �\������g���̊Ԋu(����)�̓��͂𑣂�
	cout << "��cm���ƁF";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> intervalInt;
	
	// ���x���ƂȂ镶������o��
	cout << "�g��" << " �W���̏d\n";
	
	// �I���l�𒴂��Ȃ��悤�ɁA�J�n�l�ɑ��������Z���Ȃ��烋�[�v���s��
	for( int countInt = minHeightInt; countInt <= maxHeightInt; countInt += intervalInt ){
		
		// 1�����Ƃ�1�s�A�g���ƕW���̏d�̑g���o�͂���
		cout << countInt << "   " << ( countInt - 100 ) * 0.9 << '\n';
	}
}
