

#include <string>
#include <cstring>
#include <iostream>
#include <cstdio>


void create_posix_file (std::string fn, size_t file_size) {
    std::cout << "Create " << fn << " size " << file_size << std::endl;

    // Open the file
    FILE* file = fopen64 (fn.c_str(), "wbS"); // write, binary, optimize sequential
    
    // Create a buffer to write
    size_t bufsize = 1 * 1024 * 1024;
    void* buf = malloc (bufsize);

    // Initialize buffer with zeroes
    std::memset (buf, 0, bufsize);

    // Write buffer until we have written the desired size
    size_t remaining = file_size;
    while (remaining >= 1) {
        if (remaining < 1) return;
        std::cerr << "Remaining: " << remaining << std::endl;
        // Write as much as bufsize
        size_t amount_to_write = std::min (bufsize, remaining);
        size_t this_write = fwrite (buf, 1, amount_to_write, file);
        if (this_write == 0) {
            std::cerr << "Problem writing file: " << fn << ", exiting." << std::endl;
            std::cerr << "Remaining: " << remaining << std::endl;
            exit (2);
        }
        remaining -= this_write;
    }
}


int main (int argc, char** argv) {


}

