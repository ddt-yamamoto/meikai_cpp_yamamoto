/*
�����K3-15
�ǂݍ��񂾐����l�̑S�񐔂�\������List3-12�����������āA�񐔂̕\�����I��������ɁA�񐔂̌���\������v���O�������쐬����B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���i�[����ϐ���錾
	int inputInt;
	
	// ���͂𑣂����b�Z�[�W���o��
	cout << "�����l�F";
	
	// ���͒l��ϐ��Ɋi�[
	cin >> inputInt;
	
	// �񐔂̃J�E���g�p�ϐ���0�ŏ�����
	int divisorCount = 0;
	
	// 1����inputInt�̒l�܂ŁA�񐔂��ǂ����̃`�F�b�N���s�����[�v����
	for( int countInt = 1; countInt <= inputInt; countInt++ ){
		
		// ��]��0�ł���Ζ񐔂Ƃ������Ƃŏo�͂ƃJ�E���g���s��
		if( inputInt % countInt == 0 ){
			
			// �񐔂��o��
			cout << countInt << '\n';
			
			// �񐔂̃J�E���^���C���N�������g
			divisorCount++;
		}
	}
	
	// �Ō�ɖ񐔂̃J�E���g���ʂ��o��
	cout << "�񐔂�" << divisorCount << "�ł��B\n";
}
