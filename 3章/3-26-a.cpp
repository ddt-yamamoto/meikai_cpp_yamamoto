/*
�����K3-26
�l�ԂƃR���s���[�^�Ƃ��ΐ킷��W�����P���v���O�������쐬����B
�E�l�Ԃ��]�ތ��艽�x�ł��J��Ԃ���悤�ɂ�����́B
�E�����ꂩ������R�񏟂܂ŌJ��Ԃ����́B
�ȂǁA�����̃p�^�[���̃v���O��������邱�ƁB

��3-26-a�ł́A1/2�̊m���Ől�Ԃ������A�������ƕ����͂ǂ����1/4�ƂȂ�A�C�J�T�}����v���O�������쐬���܂��B
�l�Ԃ�2�񏟂��z��(��F���~���~���������ŏI��)�܂ŌJ��Ԃ��܂��B
*/

// ���o�́A�����A���t�����A������������̂ŁA�C���N���[�h
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���t�������痐���̎�𐶐�
	srand(time(NULL));
	
	// �L�[�{�[�h����̓��͂��i�[���邽�߂̕ϐ���錾
	int inputInt;
	
	// �o��̃��b�Z�[�W���o��
	cout << "�W�����P���Q�[���J�n!!\n";
	cout << "2�񏟂��z�����܂ŏI���܂���B\n";
	cout << "�O�[:0 �`���L:1 �p�[:2 ���琔���őI�����Ă��������B\n";
	
	// �W�����P���̎���A�萔�̕�����Œ�`���Ă���
	const string GOO_STRING = "�O�[   ";
	const string CHO_STRING = "�`���L ";
	const string PAR_STRING = "�p�[   ";
	
	// �����z��������������0�ŏ�����
	int winNumber = 0;
	
	// 2�񏟂��z���܂Ń��[�v��������
	while( winNumber < 2 ){
		
		// �������肪�I�΂��܂ŌJ��Ԃ�
		do{
			
			// ���͂𑣂����b�Z�[�W���o��
			cout << "�o�����I�ԁF";
			
			// ���͒l��ϐ��Ɋi�[
			cin >> inputInt;
			
		}
		
		// 0�`2�͈̔͂̓��͂�����܂ő�����
		while( inputInt < 0 || inputInt > 2 );
		
		// ���������H���āA0�`3�̗����𐶐����A��ɏ��s�����肷��
		int winRateInt = rand() % 4;
		
		// ���������ƂɁA���s���ʂ�U�蕪����
		switch( winRateInt ){
		
		// �����̏ꍇ(�������ƕ�����2�{�̊m���ŏ��̂�case2���Y��������)
		case 0:
		case 1:
			
			// �l�Ԃ��o������ɂ���āA�o�̓��b�Z�[�W���g��������
			switch( inputInt ){
			
			// �O�[�̏ꍇ
			case 0:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << GOO_STRING << "  COM�F" << CHO_STRING << "�ł��Ȃ��̏����I\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// �`���L�̏ꍇ
			case 1:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << CHO_STRING << "  COM�F" << PAR_STRING << "�ł��Ȃ��̏����I\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// �p�[�̏ꍇ
			case 2:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << PAR_STRING << "  COM�F" << GOO_STRING << "�ł��Ȃ��̏����I\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// ���̑��̏ꍇ
			default:
				
				// ���b�Z�[�W����𔲂���
				break;
			}
			
			// �����z������1���₷
			winNumber++;
			
			// ���[�v�𔲂��A�Đ픻���
			break;
			
		// �������̏ꍇ
		case 2:
			
			// �l�Ԃ��o������ɂ���āA�o�̓��b�Z�[�W���g��������
			switch( inputInt ){
			
			// �O�[�̏ꍇ
			case 0:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << GOO_STRING << "  COM�F" << GOO_STRING << "�ł������B\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// �`���L�̏ꍇ
			case 1:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << CHO_STRING << "  COM�F" << CHO_STRING << "�ł������B\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// �p�[�̏ꍇ
			case 2:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << PAR_STRING << "  COM�F" << PAR_STRING << "�ł������B\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// ���̑��̏ꍇ
			default:
				
				// ���b�Z�[�W����𔲂���
				break;
			}
			
			// ���[�v�𔲂��A�Đ픻���
			break;
			
		// �����̏ꍇ
		case 3:
			
			// �l�Ԃ��o������ɂ���āA�o�̓��b�Z�[�W���g��������
			switch( inputInt ){
			
			// �O�[�̏ꍇ
			case 0:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << GOO_STRING << "  COM�F" << PAR_STRING << "�ł��Ȃ��̕����B\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// �`���L�̏ꍇ
			case 1:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << CHO_STRING << "  COM�F" << GOO_STRING << "�ł��Ȃ��̕����B\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// �p�[�̏ꍇ
			case 2:
				
				// ���b�Z�[�W���o��
				cout << "���Ȃ��F" << PAR_STRING << "  COM�F" << CHO_STRING << "�ł��Ȃ��̕����B\n";
				
				// ���b�Z�[�W����𔲂���
				break;
				
			// ���̑��̏ꍇ
			default:
				
				// ���b�Z�[�W����𔲂���
				break;
			}
			
			// �����z������1���炷
			winNumber--;
			
			// ���[�v�𔲂��A�Đ픻���
			break;
		
		// ���̑��̏ꍇ
		default:
			
			// ���[�v�𔲂��A�Đ픻���
			break;
		}
	}
	
	// �������b�Z�[�W���o��
	cout << "�A��̌��ʁA���Ȃ��͑��v��2�񏟂��z���܂����B";
}
