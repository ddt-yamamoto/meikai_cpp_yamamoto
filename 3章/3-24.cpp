/*
�����K3-24
���v�����łȂ����ς����߂�悤�ɁAList3-17�������������v���O�������쐬����B
�Ȃ��A�ǂݍ��񂾕��̐��̌��͕��ς����߂�ۂ̕��ꂩ�珜�O���邱�ƁB
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
	
	// ���Z���Ă������͒l�̂����A���̐������������̂��J�E���g���邽�߂̕ϐ���0�ŏ�����
	int practicalCountInt = 0;
	
	// inputNumber�Ɠ����񐔂����A���Z�̓��͂��󂯕t����悤�Ƀ��[�v����
	for( int countInt = 1; countInt <= inputNumber; countInt++ ){
		
		// ���Z���Ă������͒l���󂯎��ϐ���錾
		int temporaryInputInt;
		
		// ���͂𑣂����b�Z�[�W���o��
		cout << "�����F";
		
		// ���͒l��ϐ��Ɋi�[
		cin >> temporaryInputInt;
		
		// ���̐������͂��ꂽ�Ƃ��A�ȍ~�̏������΂���for���̎��ɖ߂�
		if( temporaryInputInt < 0 ){
			
			// ���Ӄ��b�Z�[�W��\��
			cout << "���̐��͉��Z���܂���B\n";
			
			// for�����̈ȍ~�̏������΂��Afor����<<��>>(countInt++)�����s����<<����>>(countInt <= inputNumber)�̔���ɖ߂�
			continue;
		}
		
		// ���͒l�����v�l�ɑ����Ă���
		sumDouble += temporaryInputInt;
		
		// ���݂܂ł́u���̐����������͉񐔁v���C���N�������g
		practicalCountInt++;
	}
	
	// ���v�l���A�u���̐����������͉񐔁v�Ŋ���
	avgDouble = sumDouble / practicalCountInt;
	
	// ���ʃ��b�Z�[�W���o��
	cout << "���v��" << sumDouble << "�ł��B\n";
	cout << "���ς�" << avgDouble << "�ł��B\n";
}
