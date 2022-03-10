
#include <iostream>
#include "mpi.h"

void do_rank_00000(MPI_Comm comm);
void do_rank_00001(MPI_Comm comm);
void do_rank_00002(MPI_Comm comm);
void do_rank_00003(MPI_Comm comm);

std::string logfilename = "perf.json";
std::string tag = "Case B";

int main(int argc, char** argv) {

    int rank;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &rank);

    if (0 == rank)
        do_rank_00000(MPI_COMM_WORLD);
    else if (1 == rank)
        do_rank_00001(MPI_COMM_WORLD);
    else if (2 == rank)
        do_rank_00002(MPI_COMM_WORLD);
    else if (3 == rank)
        do_rank_00003(MPI_COMM_WORLD);

    MPI_Finalize();
}
