#include<stdio.h>
#include<mpi.h>

int main (int argcs,char *args[],char *environ[]){
	int npes,myrank,number;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(&npes);
	MPI_Comm_rank(&myrank);
	if(myrank%2 == 0){
		MPI_Recv(&number,1,sizeof(int),(myrank+1),&npes,0);
		MPI_Send(&number,1,sizeof(int),(myrank+1),&npes,0);
	} 
	else {
		number = myrank;
		MPI_Send(&number,1,sizeof(int),(myrank+1),&npes,0);
		MPI_Recv(&number,1,sizeof(int),(myrank+1),&npes,0);
	}
	MPI_Finalize();
	
	
}
