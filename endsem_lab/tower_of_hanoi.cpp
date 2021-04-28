#include <iostream>

void tower(int n, char source, char dest, char aux);


int main(void){
	char source = 'A';
	char dest = 'C';
	char aux = 'B';

	int n;
	std::cin>>n;

	tower(n, source, dest, aux);
}


void tower(int n, char source, char dest, char aux){
	if(n == 1){
		std::cout<<source<<" "<<dest<<std::endl;
		return;
	}
	else{
		tower(n-1, source, aux, dest);
		std::cout<<source<<" "<<dest<<std::endl;
		tower(n-1, aux, dest, source);
	}
}