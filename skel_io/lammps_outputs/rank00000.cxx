

#include <iostream>
#include <fstream>
#include "mpi.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <chrono>
#include <ctime>
#include <thread>
#include <limits>
#include <adios2.h>

extern std::string logfilename;
extern std::string tag;


#define INIT_TIMERS() \
    auto arbitrary_time = std::chrono::system_clock::now();

#define DEFINE_TIMER(tname) \
    std::chrono::duration<double> tname = arbitrary_time - arbitrary_time; \
    std::chrono::system_clock::time_point tname ## _start_time;

#define START_TIMER(tname) \
    tname ## _start_time = std::chrono::system_clock::now();

#define STOP_TIMER(tname) \
    tname += std::chrono::system_clock::now() - tname ## _start_time; 

#define PRINT_TIMER(tname) \
    std::cout <<  #tname << ": " << tname.count() << std::endl;


void do_rank_00000 (MPI_Comm comm){

    int rv;
    int root = 0; // Use rank zero unless we need something else
    int key, color; // for MPI_Comm_split
    const int read_buf_size = 128 * 1024 * 1024;
    const int write_buf_size = 128 * 1024 * 1024;
    const int recv_buf_size = 128 * 1024 * 1024;
    const int send_buf_size = 128 * 1024 * 1024;
    char* write_buf = (char*)(malloc (write_buf_size) );
    char* read_buf = (char*)(malloc (read_buf_size) );
    char* sendbuf = (char*)(malloc (send_buf_size) );
    char* recvbuf = (char*)(malloc (recv_buf_size) );

    MPI_Comm COMM_0x555687e61b50;
    MPI_Comm COMM_0x55568865c2b0;
    MPI_Comm COMM_0x555687ea9820;
    MPI_Comm COMM_0x5556886591c0;
    MPI_Comm COMM_0x55568865c540;
    MPI_Comm COMM_555687ea9820;
    MPI_Comm COMM_0x5556881878e0;
    MPI_Comm COMM_0x555688226cb0;

    int size, rank;
    MPI_Comm_size (comm, &size);
    MPI_Comm_rank (comm, &rank);

    // Set up timers
    INIT_TIMERS();
    DEFINE_TIMER(total_timer);
    DEFINE_TIMER(posix_total_timer);
    DEFINE_TIMER(open_timer);
    DEFINE_TIMER(read_timer);
    DEFINE_TIMER(write_timer);
    DEFINE_TIMER(close_timer);

    START_TIMER(total_timer);





    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 52;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 26;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 20;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 20;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 20;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 19;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 19;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 10;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 18;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 18;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 22;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 18;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 37;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 17;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Cart_create
    {
    int ndims = 3;
    int dims[] = {2,2,1};
    int periods[] = {1,1,1};
    int reorder = 0;
    MPI_Comm comm_new = COMM_555687ea9820;
    MPI_Comm comm_old = MPI_COMM_WORLD;
    MPI_Cart_create(comm_old, ndims, dims, periods, reorder, &comm_new);
    }

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 67;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 29;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 12;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 40;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 24;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 40;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 22;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 28;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 17;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 39;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 15;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 63;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 63;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 22;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 42;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 41;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 30;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 58;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 69;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting adios2 function: adios2::ADIOS::ADIOS
    adios2::ADIOS adios_0(MPI_COMM_WORLD);

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 52;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting adios2 function: adios2::ADIOS::ADIOS
    adios2::ADIOS adios_1(MPI_COMM_WORLD);

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 114;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 124;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 53;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 58;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 20;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 1;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 9;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::ADIOS::DeclareIO
    adios2::IO io_2 = adios_0.DeclareIO("custom");

    // emitting adios2 function: adios2::IO::InConfigFile
    // Ignoring InConfigFile()

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    adios2::Variable<unsigned long> variable_3 = io_2.DefineVariable<unsigned long>("ntimestep");

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    adios2::Variable<unsigned long> variable_4 = io_2.DefineVariable<unsigned long>("natoms");

    // emitting adios2 function: adios2::IO::DefineVariable<int>
    adios2::Variable<int> variable_5 = io_2.DefineVariable<int>("nprocs");

    // emitting adios2 function: adios2::IO::DefineVariable<int>
    adios2::Variable<int> variable_6 = io_2.DefineVariable<int>("ncolumns");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_7 = io_2.DefineVariable<double>("boxxlo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_8 = io_2.DefineVariable<double>("boxxhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_9 = io_2.DefineVariable<double>("boxylo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_10 = io_2.DefineVariable<double>("boxyhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_11 = io_2.DefineVariable<double>("boxzlo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_12 = io_2.DefineVariable<double>("boxzhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_13 = io_2.DefineVariable<double>("boxxy");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_14 = io_2.DefineVariable<double>("boxxz");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_15 = io_2.DefineVariable<double>("boxyz");

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_16 = io_2.DefineAttribute<int>("triclinic", 0);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_17 = io_2.DefineAttribute<int>("boundary", 0x555687e6375c);
    }

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    adios2::Variable<unsigned long> variable_18 = io_2.DefineVariable<unsigned long>("nme", {adios2::LocalValueDim});

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    adios2::Variable<unsigned long> variable_19 = io_2.DefineVariable<unsigned long>("offset", {adios2::LocalValueDim});

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    adios2::Variable<double> variable_20 = io_2.DefineVariable<double>("atoms", {1*5},{1*0},{1*5}, 0);

    // emitting adios2 function: adios2::ADIOS::DeclareIO
    adios2::IO io_21 = adios_1.DeclareIO("atom");

    // emitting adios2 function: adios2::IO::InConfigFile
    // Ignoring InConfigFile()

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_3 = io_21.DefineVariable<unsigned long>("ntimestep");

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_4 = io_21.DefineVariable<unsigned long>("natoms");

    // emitting adios2 function: adios2::IO::DefineVariable<int>
    variable_5 = io_21.DefineVariable<int>("nprocs");

    // emitting adios2 function: adios2::IO::DefineVariable<int>
    variable_6 = io_21.DefineVariable<int>("ncolumns");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_7 = io_21.DefineVariable<double>("boxxlo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_8 = io_21.DefineVariable<double>("boxxhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_9 = io_21.DefineVariable<double>("boxylo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_10 = io_21.DefineVariable<double>("boxyhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_11 = io_21.DefineVariable<double>("boxzlo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_12 = io_21.DefineVariable<double>("boxzhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_13 = io_21.DefineVariable<double>("boxxy");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_14 = io_21.DefineVariable<double>("boxxz");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_15 = io_21.DefineVariable<double>("boxyz");

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_16 = io_21.DefineAttribute<int>("triclinic", 0);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_22 = io_21.DefineAttribute<int>("scaled", 1);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_23 = io_21.DefineAttribute<int>("image", 0);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_17 = io_21.DefineAttribute<int>("boundary", 0x555687e6375c);
    }

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_18 = io_21.DefineVariable<unsigned long>("nme", {adios2::LocalValueDim});

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_19 = io_21.DefineVariable<unsigned long>("offset", {adios2::LocalValueDim});

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_20 = io_21.DefineVariable<double>("atoms", {1*5},{1*0},{1*5}, 0);

    std::this_thread::sleep_for(std::chrono::milliseconds(2) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 48;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_dup
    MPI_Comm_dup(MPI_COMM_WORLD, &COMM_0x5556881878e0);

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x5556881878e0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556881878e0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = COMM_0x5556881878e0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556881878e0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = COMM_0x5556881878e0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x5556881878e0, color, key, &COMM_0x555688226cb0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x555688226cb0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x555688226cb0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = COMM_0x555688226cb0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x555688226cb0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = COMM_0x555688226cb0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x555688226cb0, color, key, &COMM_0x5556881878e0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allgather
    {
    MPI_Datatype sendtype = MPI_BYTE;
    int sendcount = 64;
    MPI_Datatype recvtype = MPI_BYTE;
    int recvcount = 64;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(10) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::IO::Open
    adios2::Engine engine_24 = io_2.Open("balance_custom.bp", adios2::Mode::Write);

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_24.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_24.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_24.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_24.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_24.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_24.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_24.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_24.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_24.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_24.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_24.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_24.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_24.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    uint64_t size = 100*100*100;
    std::vector<double> atoms_mem(size, 17);
    engine_24.Put<double>(variable_20, atoms_mem.data(), adios2::Mode::Sync);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(41) );

    // emitting adios2 function: adios2::Engine::EndStep
    engine_24.PerformPuts();
    engine_24.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::IO::Open
    adios2::Engine engine_25 = io_21.Open("balance_atom.bp", adios2::Mode::Write);

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_25.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_25.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_25.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_25.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_25.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_25.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_25.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_25.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_25.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_25.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_25.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_25.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_25.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double atoms_mem = 0;
    engine_25.Put<double>(variable_20 ,atoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_25.PerformPuts();
    engine_25.EndStep();

    // emitting mpi function: MPI_Reduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm);
    }

    // emitting mpi function: MPI_Reduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm);
    }

    // emitting mpi function: MPI_Reduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 16;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(6) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(6) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(4) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(29) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(31) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 48;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_dup
    MPI_Comm_dup(MPI_COMM_WORLD, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c2b0, color, key, &COMM_0x55568865c540);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c540, color, key, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allgather
    {
    MPI_Datatype sendtype = MPI_BYTE;
    int sendcount = 64;
    MPI_Datatype recvtype = MPI_BYTE;
    int recvcount = 64;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_24.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_24.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_24.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_24.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_24.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_24.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_24.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_24.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_24.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_24.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_24.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_24.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_24.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    uint64_t size = 100*100*100;
    std::vector<double> atoms_mem(size, 17);
    engine_24.Put<double>(variable_20, atoms_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_24.PerformPuts();
    engine_24.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_25.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_25.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_25.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_25.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_25.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_25.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_25.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_25.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_25.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_25.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_25.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_25.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_25.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double atoms_mem = 0;
    engine_25.Put<double>(variable_20 ,atoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_25.PerformPuts();
    engine_25.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(32) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(5) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(10) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 48;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_dup
    MPI_Comm_dup(MPI_COMM_WORLD, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c2b0, color, key, &COMM_0x55568865c540);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c540, color, key, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allgather
    {
    MPI_Datatype sendtype = MPI_BYTE;
    int sendcount = 64;
    MPI_Datatype recvtype = MPI_BYTE;
    int recvcount = 64;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_24.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_24.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_24.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_24.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_24.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_24.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_24.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_24.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_24.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_24.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_24.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_24.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_24.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    uint64_t size = 100*100*100;
    std::vector<double> atoms_mem(size, 17);
    engine_24.Put<double>(variable_20, atoms_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_24.PerformPuts();
    engine_24.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_25.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_25.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_25.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_25.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_25.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_25.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_25.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_25.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_25.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_25.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_25.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_25.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_25.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double atoms_mem = 0;
    engine_25.Put<double>(variable_20 ,atoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_25.PerformPuts();
    engine_25.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 16;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(4) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 48;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_dup
    MPI_Comm_dup(MPI_COMM_WORLD, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c2b0, color, key, &COMM_0x55568865c540);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c540;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c540, color, key, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allgather
    {
    MPI_Datatype sendtype = MPI_BYTE;
    int sendcount = 64;
    MPI_Datatype recvtype = MPI_BYTE;
    int recvcount = 64;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_24.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_24.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_24.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_24.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_24.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_24.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_24.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_24.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_24.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_24.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_24.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_24.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_24.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    uint64_t size = 100*100*100;
    std::vector<double> atoms_mem(size, 17);
    engine_24.Put<double>(variable_20, atoms_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_24.PerformPuts();
    engine_24.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_25.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_25.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_25.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_25.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_25.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_25.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_25.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_25.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_25.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_25.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_25.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_25.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_25.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double atoms_mem = 0;
    engine_25.Put<double>(variable_20 ,atoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_25.PerformPuts();
    engine_25.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(7) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(8) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(5) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1) );

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 48;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_dup
    MPI_Comm_dup(MPI_COMM_WORLD, &COMM_0x5556886591c0);

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x5556886591c0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x5556886591c0, color, key, &COMM_0x55568865c2b0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 64;
    MPI_Comm comm = COMM_0x55568865c2b0;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Comm_split
    color = 0;
    key = 0;
    MPI_Comm_split(COMM_0x55568865c2b0, color, key, &COMM_0x5556886591c0);

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Reduce_scatter
    {
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allgather
    {
    MPI_Datatype sendtype = MPI_BYTE;
    int sendcount = 64;
    MPI_Datatype recvtype = MPI_BYTE;
    int recvcount = 64;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_24.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_24.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_24.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_24.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_24.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_24.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_24.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_24.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_24.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_24.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_24.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_24.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_24.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    uint64_t size = 100*100*100;
    std::vector<double> atoms_mem(size, 17);
    engine_24.Put<double>(variable_20, atoms_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_24.PerformPuts();
    engine_24.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_25.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_25.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_25.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_25.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_25.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_25.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_25.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_25.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_25.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_25.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_25.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_25.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_25.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double atoms_mem = 0;
    engine_25.Put<double>(variable_20 ,atoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_25.PerformPuts();
    engine_25.EndStep();

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 16;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 40;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 40;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 4;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 40;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting mpi function: MPI_Bcast
    {
    int count = 53;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting adios2 function: adios2::ADIOS::ADIOS
    adios2::ADIOS adios_26(MPI_COMM_WORLD);

    // emitting adios2 function: adios2::ADIOS::DeclareIO
    io_21 = adios_26.DeclareIO("atom");

    // emitting adios2 function: adios2::IO::InConfigFile
    // Ignoring InConfigFile()

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_3 = io_21.DefineVariable<unsigned long>("ntimestep");

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_4 = io_21.DefineVariable<unsigned long>("natoms");

    // emitting adios2 function: adios2::IO::DefineVariable<int>
    variable_5 = io_21.DefineVariable<int>("nprocs");

    // emitting adios2 function: adios2::IO::DefineVariable<int>
    variable_6 = io_21.DefineVariable<int>("ncolumns");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_7 = io_21.DefineVariable<double>("boxxlo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_8 = io_21.DefineVariable<double>("boxxhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_9 = io_21.DefineVariable<double>("boxylo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_10 = io_21.DefineVariable<double>("boxyhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_11 = io_21.DefineVariable<double>("boxzlo");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_12 = io_21.DefineVariable<double>("boxzhi");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_13 = io_21.DefineVariable<double>("boxxy");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_14 = io_21.DefineVariable<double>("boxxz");

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_15 = io_21.DefineVariable<double>("boxyz");

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_16 = io_21.DefineAttribute<int>("triclinic", 0);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_22 = io_21.DefineAttribute<int>("scaled", 1);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_23 = io_21.DefineAttribute<int>("image", 0);
    }

    // emitting adios2 function: adios2::IO::DefineAttribute<int>
    {
    adios2::Attribute<int> attribute_17 = io_21.DefineAttribute<int>("boundary", 0x555687e6375c);
    }

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_18 = io_21.DefineVariable<unsigned long>("nme", {adios2::LocalValueDim});

    // emitting adios2 function: adios2::IO::DefineVariable<unsigned long>
    variable_19 = io_21.DefineVariable<unsigned long>("offset", {adios2::LocalValueDim});

    // emitting adios2 function: adios2::IO::DefineVariable<double>
    variable_20 = io_21.DefineVariable<double>("atoms", {1*5},{1*0},{1*5}, 0);

    // emitting mpi function: MPI_Allreduce
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting mpi function: MPI_Scan
    {
    int count = 8;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Op op = MPI_SUM;
    MPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
    }

    // emitting adios2 function: adios2::Variable<double>::SetShape
    // Ignoring SetShape
variable_20.SetShape({361,5});

    // emitting adios2 function: adios2::Variable<double>::SetSelection
    // Ignoring SetSelection
variable_20.SetSelection({{0,0},{0,0}});

    // emitting adios2 function: adios2::IO::Open
    adios2::Engine engine_27 = io_21.Open("balance_atom_final.bp", adios2::Mode::Write);

    // emitting adios2 function: adios2::Engine::BeginStep
    engine_27.BeginStep();

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long ntimestep_mem = 0;
    engine_27.Put<unsigned long>(variable_3 ,ntimestep_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int nprocs_mem = 0;
    engine_27.Put<int>(variable_5 ,nprocs_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxlo_mem = 0;
    engine_27.Put<double>(variable_7 ,boxxlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxxhi_mem = 0;
    engine_27.Put<double>(variable_8 ,boxxhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxylo_mem = 0;
    engine_27.Put<double>(variable_9 ,boxylo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxyhi_mem = 0;
    engine_27.Put<double>(variable_10 ,boxyhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzlo_mem = 0;
    engine_27.Put<double>(variable_11 ,boxzlo_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double boxzhi_mem = 0;
    engine_27.Put<double>(variable_12 ,boxzhi_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    unsigned long natoms_mem = 0;
    engine_27.Put<unsigned long>(variable_4 ,natoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<int>
    {
    int ncolumns_mem = 0;
    engine_27.Put<int>(variable_6 ,ncolumns_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> nme_mem(size, 17);
    engine_27.Put<unsigned long>(variable_18, nme_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<unsigned long>
    {
    uint64_t size = 100*100*100;
    std::vector<unsigned long> offset_mem(size, 17);
    engine_27.Put<unsigned long>(variable_19, offset_mem.data(), adios2::Mode::Sync);
    }

    // emitting adios2 function: adios2::Engine::Put<double>
    {
    double atoms_mem = 0;
    engine_27.Put<double>(variable_20 ,atoms_mem, adios2::Mode::Deferred);
    }

    // emitting adios2 function: adios2::Engine::EndStep
    engine_27.PerformPuts();
    engine_27.EndStep();

    // emitting adios2 function: adios2::Engine::Close
    engine_27.Close();

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting mpi function: MPI_Bcast
    {
    int count = 4;
    MPI_Datatype datatype = MPI_BYTE;
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Bcast(sendbuf, count, datatype, root, comm);
    }

    // emitting adios2 function: adios2::Engine::Close
    engine_24.Close();

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    // emitting adios2 function: adios2::Engine::Close
    engine_25.Close();

    // emitting mpi function: MPI_Comm_free
    // MPI_Comm_free

    std::this_thread::sleep_for(std::chrono::milliseconds(2) );

    // emitting mpi function: MPI_Barrier
    {
    MPI_Comm comm = MPI_COMM_WORLD;
    MPI_Barrier(comm);
    }

// TAU event ignored


    STOP_TIMER(total_timer);
    PRINT_TIMER(total_timer);

    // Timer report generated from cheetah timer list instead of clunky C++ macro

    // Gather timer info from all ranks to 0
    int sendcount = 1;
    int recvcount = 1;
    unsigned int logrank = 0;
    double * all_total_timer = (double*) malloc (size * sizeof(double));
    MPI_Gather(&total_timer, sendcount, MPI_DOUBLE, all_total_timer, recvcount, MPI_DOUBLE, logrank, comm);
    
    // Compute stats
    double total_sum = 0.0;
    double total_min = std::numeric_limits<double>::max();
    double total_max = 0.0;
    for (int i = 0; i < size; i++){
        total_sum += all_total_timer[i];
        total_min = std::min(total_min, all_total_timer[i]);
        total_max = std::max(total_max, all_total_timer[i]);
    }
    double total_mean = total_sum / size;
    double * all_posix_total_timer = (double*) malloc (size * sizeof(double));
    MPI_Gather(&posix_total_timer, sendcount, MPI_DOUBLE, all_posix_total_timer, recvcount, MPI_DOUBLE, logrank, comm);
    
    // Compute stats
    double posix_total_sum = 0.0;
    double posix_total_min = std::numeric_limits<double>::max();
    double posix_total_max = 0.0;
    for (int i = 0; i < size; i++){
        posix_total_sum += all_posix_total_timer[i];
        posix_total_min = std::min(posix_total_min, all_posix_total_timer[i]);
        posix_total_max = std::max(posix_total_max, all_posix_total_timer[i]);
    }
    double posix_total_mean = posix_total_sum / size;
    double * all_open_timer = (double*) malloc (size * sizeof(double));
    MPI_Gather(&open_timer, sendcount, MPI_DOUBLE, all_open_timer, recvcount, MPI_DOUBLE, logrank, comm);
    
    // Compute stats
    double open_sum = 0.0;
    double open_min = std::numeric_limits<double>::max();
    double open_max = 0.0;
    for (int i = 0; i < size; i++){
        open_sum += all_open_timer[i];
        open_min = std::min(open_min, all_open_timer[i]);
        open_max = std::max(open_max, all_open_timer[i]);
    }
    double open_mean = open_sum / size;
    double * all_read_timer = (double*) malloc (size * sizeof(double));
    MPI_Gather(&read_timer, sendcount, MPI_DOUBLE, all_read_timer, recvcount, MPI_DOUBLE, logrank, comm);
    
    // Compute stats
    double read_sum = 0.0;
    double read_min = std::numeric_limits<double>::max();
    double read_max = 0.0;
    for (int i = 0; i < size; i++){
        read_sum += all_read_timer[i];
        read_min = std::min(read_min, all_read_timer[i]);
        read_max = std::max(read_max, all_read_timer[i]);
    }
    double read_mean = read_sum / size;
    double * all_write_timer = (double*) malloc (size * sizeof(double));
    MPI_Gather(&write_timer, sendcount, MPI_DOUBLE, all_write_timer, recvcount, MPI_DOUBLE, logrank, comm);
    
    // Compute stats
    double write_sum = 0.0;
    double write_min = std::numeric_limits<double>::max();
    double write_max = 0.0;
    for (int i = 0; i < size; i++){
        write_sum += all_write_timer[i];
        write_min = std::min(write_min, all_write_timer[i]);
        write_max = std::max(write_max, all_write_timer[i]);
    }
    double write_mean = write_sum / size;
    double * all_close_timer = (double*) malloc (size * sizeof(double));
    MPI_Gather(&close_timer, sendcount, MPI_DOUBLE, all_close_timer, recvcount, MPI_DOUBLE, logrank, comm);
    
    // Compute stats
    double close_sum = 0.0;
    double close_min = std::numeric_limits<double>::max();
    double close_max = 0.0;
    for (int i = 0; i < size; i++){
        close_sum += all_close_timer[i];
        close_min = std::min(close_min, all_close_timer[i]);
        close_max = std::max(close_max, all_close_timer[i]);
    }
    double close_mean = close_sum / size;

    // One process will write the log file
    if (rank == logrank) {

        // Dump json file 
        std::ofstream logfile;
        logfile.open (logfilename);
        logfile << "{\"timer_set\": [\n";

        logfile << "  {\"name\": \"total\", ";
        logfile << "\"mean\": " << total_mean << ", ";
        logfile << "\"min\": " << total_min << ", ";
        logfile << "\"max\": " << total_max; 
        logfile << "}";
        logfile << "," << std::endl;

        logfile << "  {\"name\": \"posix_total\", ";
        logfile << "\"mean\": " << posix_total_mean << ", ";
        logfile << "\"min\": " << posix_total_min << ", ";
        logfile << "\"max\": " << posix_total_max; 
        logfile << "}";
        logfile << "," << std::endl;

        logfile << "  {\"name\": \"open\", ";
        logfile << "\"mean\": " << open_mean << ", ";
        logfile << "\"min\": " << open_min << ", ";
        logfile << "\"max\": " << open_max; 
        logfile << "}";
        logfile << "," << std::endl;

        logfile << "  {\"name\": \"read\", ";
        logfile << "\"mean\": " << read_mean << ", ";
        logfile << "\"min\": " << read_min << ", ";
        logfile << "\"max\": " << read_max; 
        logfile << "}";
        logfile << "," << std::endl;

        logfile << "  {\"name\": \"write\", ";
        logfile << "\"mean\": " << write_mean << ", ";
        logfile << "\"min\": " << write_min << ", ";
        logfile << "\"max\": " << write_max; 
        logfile << "}";
        logfile << "," << std::endl;

        logfile << "  {\"name\": \"close\", ";
        logfile << "\"mean\": " << close_mean << ", ";
        logfile << "\"min\": " << close_min << ", ";
        logfile << "\"max\": " << close_max; 
        logfile << "}";
        logfile << "]," << std::endl;
        logfile << "\"tag\": \"" << tag << "\"," << std::endl;
        logfile << "\"comm_size\": " << size << "}" << std::endl;
        logfile.close();

    }
}

