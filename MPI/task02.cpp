#include <stdio.h>
#include <mpi.h>

int main (int argc, char* argv[]) {
    int processId, size;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &processId);
    printf("Процесс номер = %i, общее количество процессов = %i\n", processId, size);
    MPI_Finalize();

    return 0;
}

