/*
�����K1-7
�O��int�^�ϐ��ɒl�������A�����̍��v�ƕ��ς����߂�v���O�������쐬����B
*/

// ���o�̓��C�u��������荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	//int�^�ϐ���3�錾
	int firstInt;
	int secondInt;
	int thirdInt;
	
	// ���ꂼ��̕ϐ��ɐ����l����
	firstInt	= 10;
	secondInt	= 100;
	thirdInt	= 1000;
	
	// ���v����ѕ��ς̉��Z���s���A�W���o�̓X�g���[���ɕ�����ƒl�𑱂��đ}��
	cout << "���v��" <<   firstInt + secondInt + thirdInt		<< "�ł��B\n";
	cout << "���ς�" << ( firstInt + secondInt + thirdInt ) / 3	<< "�ł��B\n";
}
