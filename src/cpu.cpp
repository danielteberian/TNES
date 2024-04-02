// src/cpu.cpp
//
// This code provides a basic implementation of the NES' CPU and its instructions


#include <iostream>
#include <cstdint>



// CPU class
class CPU
{
    // The basic components of the CPU (I know that this is a bad description, but it will do for now)
    private:
        // Accumulator
        uint8_t A;

        // X register
        uint8_t X;

        // Y register
        uint8_t Y;

        // Stack pointer
        uint8_t SP;

        // Program counter
        uint16_t PC;

        // Memory
        uint8_t memory[66536];


        // Read memory
        uint8_t read(uint16_t addr)
        {
            return memory[addr];
        }

        // Write memory
        void write(uint16_t addr, uint8_t value)
        {
            memory[addr] = value;
        }


    public:
        CPU()
        {
            // Initialize the CPU
            
            // Set accumulator to 0
            A = 0;
            
            // Set X register to 0
            X = 0;

            // Set Y register to 0
            Y = 0;

            // Set stack pointer to the top of the stack
            SP = 0xFF;

            // Set program counter to 0
            PC = 0;


            // Initialize memory to 0
            for (int i = 0; i < 65536; ++i)
            {
                    memory[i] = 0;
            }
        }
}


// Main function
int main()
{
    // Create cpu using the CPU class
    CPU cpu;

    return 0;
}