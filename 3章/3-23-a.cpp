/*
�����K3-23-a
���v�����łȂ����ς����߂�悤�ɁAList3-15�����List3-16�������������v���O���������ꂼ��쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���Ƃ��ē��͂��ꂽ�l�̊i�[�p�ϐ���錾
	int inputNumber;
	
	// �������b�Z�[�W���o��
	cout << "�����̍��v�ƕ��ς����߂܂��B\n";
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "�����Z���܂����F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputNumber;
	
	// ���v�l���i�[����ϐ���0�ŏ������B����͕K�������ɂȂ邪�A���ς̌v�Z�̂��߂�double�^�ɂ���B
	double sumDouble = 0;
	
	// ���ϒl���i�[����ϐ���0�ŏ�����
	double avgDouble = 0;
	
	// �J�E���g�ϐ������[�v�̊O�ł��g���̂ŁA��ɒ�`�������Ă���
	int countInt = 0;
	
	// inputNumber�Ɠ����񐔂����A���Z�̓��͂��󂯕t����悤�Ƀ��[�v����
	for( ; countInt < inputNumber; countInt++ ){
		
		// ���Z���Ă������͒l���󂯎��ϐ���錾
		int temporaryInputInt;
		
		// ���͂𑣂����b�Z�[�W���o��
		cout << "����(0�ŏI��)�F";
		
		// ���͒l��ϐ��Ɋi�[
		cin >> temporaryInputInt;
		
		// ���͒l��0�������ꍇ�A�����Ń��[�v���Ƃ߂�
		if( temporaryInputInt == 0 ){
			
			// for���𔲂���
			break;
		}
		
		// ���͒l�����v�l�ɑ����Ă���
		sumDouble += temporaryInputInt;
	}
	
	// �����Ă��������̓��͂̍ہA���߂�0�ł����I������ꍇ�A���ς͋��߂Ȃ�
	if( countInt != 0 ){
		
		// ���v�l���A���͉񐔂Ŋ���B
    	avgDouble = sumDouble / countInt;
	}
	
	// ���ʃ��b�Z�[�W���o��
	cout << "���v��" << sumDouble << "�ł��B\n";
	cout << "���ς�" << avgDouble << "�ł��B\n";
}
