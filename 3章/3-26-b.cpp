/*
�����K3-26
�l�ԂƃR���s���[�^�Ƃ��ΐ킷��W�����P���v���O�������쐬����B
�E�l�Ԃ��]�ތ��艽�x�ł��J��Ԃ���悤�ɂ�����́B
�E�����ꂩ������R�񏟂܂ŌJ��Ԃ����́B
�ȂǁA�����̃p�^�[���̃v���O��������邱�ƁB

��3-26-b�ł́A�݂��Ɋe��ނ̎��2��܂ł����g���Ȃ����[����5�A����s���W�����P���v���O�������쐬���܂��B
5��I����A[����:����:����]�̓����\�����܂��B
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
	
	// �R���s���[�^�Ɏ���o�����邽�߂́A�����̎��ݒ�
	srand(time(NULL));
	
	// �L�[�{�[�h����̓��͂��i�[���邽�߂̕ϐ���錾
	int playerChoice;
	
	// �R���s���[�^�̎�̑I�����i�[���邽�߂̕ϐ���錾
	int comChoice;
	
	// �o��̃��b�Z�[�W���o��
	cout << "�W�����P���Q�[���J�n!!\n";
	cout << "5�A�킵�܂����A�݂��ɓ������2��܂ł����g���܂���B\n";
	cout << "�O�[:0 �`���L:1 �p�[:2 ���琔���őI�����Ă��������B\n\n";
	
	// �W�����P���̎���A�萔�̕�����Œ�`���Ă���
	const string GOO_STRING = "�O�[";
	const string CHO_STRING = "�`���L";
	const string PAR_STRING = "�p�[";
	
	// �W�����P���̎�̎c�萔��2�ŏ�����
	int gooNumberPlayer = 2;		// �l�Ԃ̃O�[�̎c��萔
	int choNumberPlayer = 2;		// �l�Ԃ̃`���L�̎c��萔
	int parNumberPlayer = 2;		// �l�Ԃ̃p�[�̎c��萔
	
	int gooNumberCom = 2;			// �R���s���[�^�̃O�[�̎c��萔
	int choNumberCom = 2;			// �R���s���[�^�̃`���L�̎c��萔
	int parNumberCom = 2;			// �R���s���[�^�̃p�[�̎c��萔
	
	// �l�ԑ����猩�����s������������0�ŏ�����
	int winNumber	= 0;	// �������J�E���^
	int drawNumber	= 0;	// �����������J�E���^
	int loseNumber	= 0;	// �������J�E���^
	
	// 5�A��Ȃ̂ŁA5�񃋁[�v������
	for( int countInt = 0; countInt < 5; countInt++ ){
		
		// �l�ԂɎc��̎�̓����ʒm���郁�b�Z�[�W���o��
		cout << "���Ȃ��̎c��̎�́F"	<< GOO_STRING << ":" << gooNumberPlayer << " "
										<< CHO_STRING << ":" << choNumberPlayer << " "
										<< PAR_STRING << ":" << parNumberPlayer << "\n";
		
		cout << "�R���s���[�^�̎�́F"	<< GOO_STRING << ":" << gooNumberCom << " "
										<< CHO_STRING << ":" << choNumberCom << " "
										<< PAR_STRING << ":" << parNumberCom << "\n";
		
		// �c���Ă�����I�Ԃ܂ő�����
		do{
			
			// ���͂𑣂����b�Z�[�W���o��
			cout << "�o�����I�ԁF";
			
			// ���͒l��ϐ��Ɋi�[
			cin >> playerChoice;
			
			// �ǂ̎��I�񂾂��ŐU�蕪��
			switch( playerChoice ){
				
			// �O�[�̏ꍇ
			case 0:
				
				// �I�񂾎肪�����c���Ă��Ȃ������ꍇ
				if( gooNumberPlayer <= 0 ){
					
					// ���Ӄ��b�Z�[�W��\������
					cout << "���̎�͂����g���܂���B\n";
					
					// ��𖢑I����Ԃɂ���
					playerChoice = -1;
				}
				
				// �I�񂾎肪�c���Ă����ꍇ
				else{
					
					// ��̐�������炷
					gooNumberPlayer--;
				}
				
				// switch���𔲂���
				break;
				
			// �`���L�̏ꍇ
			case 1:
				
				// �I�񂾎肪�����c���Ă��Ȃ������ꍇ
				if( choNumberPlayer <= 0 ){
					
					// ���Ӄ��b�Z�[�W��\������
					cout << "���̎�͂����g���܂���B\n";
					
					// ��𖢑I����Ԃɂ���
					playerChoice = -1;
				}
				
				// �I�񂾎肪�c���Ă����ꍇ
				else{
					
					// ��̐�������炷
					choNumberPlayer--;
				}
				
				// switch���𔲂���
				break;
				
			// �p�[�̏ꍇ
			case 2:
				
				// �I�񂾎肪�����c���Ă��Ȃ������ꍇ
				if( parNumberPlayer <= 0 ){
					
					// ���Ӄ��b�Z�[�W��\������
					cout << "���̎�͂����g���܂���B\n";
					
					// ��𖢑I����Ԃɂ���
					playerChoice = -1;
				}
				
				// �I�񂾎肪�c���Ă����ꍇ
				else{
					
					// ��̐�������炷
					parNumberPlayer--;
				}
				
				// switch���𔲂���
				break;
				
			// ����ȊO�̏ꍇ
			default:
				
				// switch���𔲂���
				break;
			}
		}
		
		// ��𐳂����I�ׂ�܂ő�����
		while( playerChoice < 0 || playerChoice > 2 );
		
		// ���ɃR���s���[�^�̎�̑I���B�c���Ă�����I�Ԃ܂ő�����
		do{
			
			// ���������Ƃɐl�ԓ��l�A3��ނ̎�𐶐�����
			comChoice = rand() % 3;
			
			// �ǂ̎��I�񂾂��ŐU�蕪��
			switch( comChoice ){
				
			// �O�[�̏ꍇ
			case 0:
				
				// �肪�c���Ă��Ȃ������ꍇ
				if( gooNumberCom <= 0 ){
					
					// ���I���ɖ߂�
					comChoice = -1;
				}
				
				// �肪�c���Ă����ꍇ
				if( gooNumberCom > 0 ){
					
					// ��̐�������炷
					gooNumberCom--;
				}
				
				// switch���𔲂���
				break;
				
			// �`���L�̏ꍇ
			case 1:
				
				// �肪�c���Ă��Ȃ������ꍇ
				if( choNumberCom <= 0 ){
					
					// ���I���ɖ߂�
					comChoice = -1;
				}
				
				// �肪�c���Ă����ꍇ
				if( choNumberCom > 0 ){
					
					// ��̐�������炷
					choNumberCom--;
				}
				
				// switch���𔲂���
				break;
				
			// �p�[�̏ꍇ
			case 2:
				
				// �肪�c���Ă��Ȃ������ꍇ
				if( parNumberCom <= 0 ){
					
					// ���I���ɖ߂�
					comChoice = -1;
				}
				
				// �肪�c���Ă����ꍇ
				if( parNumberCom > 0 ){
					
					// ��̐�������炷
					parNumberCom--;
				}
				
				// switch���𔲂���
				break;
				
			// ����ȊO�̏ꍇ
			default:
				
				// switch���𔲂���
				break;
			}
			
		// ��𐳂����I�ׂ�܂ő�����
		} while( comChoice < 0 || comChoice > 2 );
		
		// ���s�̔�����s���B�݂��̎�̐��������������������ʕʂɔ��肷��B
		switch( playerChoice - comChoice ){
			
		// �v���C���[:0(�O�[)�ACOM:1(�`���L)�Ȃǂ̏ꍇ
		case -1:
		case  2:
			
			// ���s���ʂ̃��b�Z�[�W���o��
			cout << "���Ȃ��̏����ł��B\n\n";
			
			// ���������C���N�������g
			winNumber++;
			
			// switch���𔲂��Afor���ɖ߂�
			break;
			
		// �݂��ɓ��������̏ꍇ
		case  0:
			
			// ���s���ʂ̃��b�Z�[�W���o��
			cout << "�������ł��B\n\n";
			
			// �������������C���N�������g
			drawNumber++;
			
			// switch���𔲂��Afor���ɖ߂�
			break;
			
		// �v���C���[:2(�p�[)�ACOM:1(�`���L)�Ȃǂ̏ꍇ
		case  1:
		case -2:
			
			// ���s���ʂ̃��b�Z�[�W���o��
			cout << "���Ȃ��̕����ł��B\n\n";
			
			// ���������C���N�������g
			loseNumber++;
			
			// switch���𔲂��Afor���ɖ߂�
			break;
			
		// ����ȊO�̏ꍇ
		default:
			
			// switch���𔲂��Afor���ɖ߂�
			break;
		}
	}
	
	// �ŏI���ʂ��o��
	cout << "���ʔ��\���܂��B����:" << winNumber << "  ����:" << drawNumber << "  ����:" << loseNumber << '\n';
}
