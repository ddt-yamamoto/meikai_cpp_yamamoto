/*
��List1-7�̃v���O������ύX���āA���������������l��x��y�ɑ������v���O�������쐬����B
���̎��s���ʂ���Aint�^�ϐ��������l�݂̂��������Ȃ����Ƃ��m�F���邱�ƁB
*/

// ���o�̓��C�u�����𗘗p����
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// int�^�ϐ���2�錾
	int firstInt;
	int secondInt;
	
	// ���K�Ƃ��āAint�^�ϐ��ɑ΂��A���������������l��������
	firstInt	= 63.1;
	secondInt	= 18.9;
	
	// �W���o�̓X�g���[���ɑ΂��āA������ƕϐ���}�����Ă���
	cout << "x�̒l��" << firstInt	<< "�ł��B\n";
	cout << "y�̒l��" << secondInt	<< "�ł��B\n";
	
	// �ϐ������Z�q�ɂ���ĉ��H���邱�Ƃ��ł���
	cout << "���v��" <<   firstInt + secondInt			<< "�ł��B\n";
	cout << "���ς�" << ( firstInt + secondInt ) / 2	<< "�ł��B\n";
}

/*
������
�o�͌��ʂ́A����63,18,81,40�ƂȂ�B
firstInt��secondInt�̏��������؂�̂Ă��Ă��邱�Ƃ��m�F�B
���v�͏����𔽉f�����82�ƂȂ邪�A81�ƂȂ��Ă��邱�Ƃ��m�F�B
�؂�̂Č�ɕ��ς��Ƃ��40.5�ƂȂ邪�A�����40�ƂȂ邱�Ƃ��m�F�B
*/
