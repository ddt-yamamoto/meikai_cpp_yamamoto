/*
�����K3-11
1����n�܂ł̘a�����߂�List3-9(p.98)��for���Ŏ�������B
*/

// ���o�͂������̂ŁA�C���N���[�h
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���ɑ����Ă�������ƂȂ鐔�l���i�[����ϐ���錾
	int endInt;
	
	// �������b�Z�[�W���o��
	cout << "1����n�܂ł̘a�����߂܂��B\n";
	
	// ���͒l��0�ȉ��ł���΁A�J��Ԃ����͂����߂�
	do{
		
		// ���ɑ����Ă�������ƂȂ鐔�l�̓��͂𑣂�
		cout << "n�̒l�F";
		
		// ���͒l��ϐ��Ɋi�[
		cin >> endInt;
	}
	
	// ���͒l��0�ȉ��ł���΁A���[�v�𑱂���
	while( endInt <= 0 );
	
	// ���v�l��ێ�����ϐ���0�ŏ��������Ē�`
	int sumInt = 0;
	
	// 1����n�܂�A����Ƃ��ē��͂��ꂽ�l�܂�1�����Ƃ�1�����₵�Ȃ��烋�[�v����
	for( int countInt = 1; countInt <= endInt; countInt++ ){
		
		// ���݂�countInt�̒l�����v�l�ɉ��Z����
		sumInt += countInt;
	}
	
	// ���ʂ�\��
	cout << "1����" << endInt << "�܂ł̘a��" << sumInt << "�ł��B\n";
}
