#include <stdio.h>
#define MAX_STACK_SIZE 100
int main(){
		int index = -1,input;//현제 인덱스가 가르키고 있는 위치 -1이면 값이 비어있음.
		int stack[MAX_STACK_SIZE];
		
		scanf("%d",&input);		
		stack[++index] = input;//input 값을 스택에 넣기(push)
		
		printf("%d",stack[index--]);//스택 값 접근하기 (pop)
}