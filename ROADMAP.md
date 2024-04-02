# ROADMAP

## 1. CPU emulation
### 1a. CPU instructions
    - LDA - Load accumulator
    - LDX - Load X register
    - LDY - Load Y register
    - STA - Store accumulator
    - STX - Store X register
    - STY - Store Y register
    - TAX - Transfer accumulator to X
    - TAY - Transfer accumulator to Y
    - TXA - Transfer X to accumulator
    - TYA - Transfer Y to accumulator
    - TSX - Transfer stack pointer to X
    - TXS - Transfer X to stack pointer
    - PHA - Push accumulator
    - PHP - Push processor status/flags
    - PLA - Pull accumulator
    - PLP - Pull processor status/flags
    - AND - Logical AND
    - ORA - Logical OR
    - EOR - Exclusive EOR
    - BIT - Bit test
    - ADC - Add with carry
    - SBC - Subtract with carry
    - CMP - Compare accumulator
    - CPX - Compare X register
    - CPY - Compare Y register
    - INC - Increment memory
    - DEC - Decrement memory
    - INX - Increment X register
    - DEX - Decrement X register
    - INY - Increment Y register
    - DEY - Decrement Y register
    - ASL - Arithmetic shift left
    - LSR - Logical shift right
    - ROL - Rotate left
    - ROR - Rotate right
    - JMP - Jump
    - JSR - Jump to subroutine
    - RTS - Return from subroutine
    - BRK - Force interrupt
    - RTI - Return from interrupt
    - BCC - Branch if carry clear
    - BCS - Branch if carry set
    - BEQ - Branch if equal
    - BMI - Branch if minus
    - BNE - Branch if inequal
    - BPL - Branch if positive
    - BVC - Branch if overflow clear
    - BVS - Branch if overflow set
    - CLC - Clear carry flag
    - CLD - Clear decimal mode
    - CLI - Clear interrupt disable
    - CLV - Clear overflow flag
    - SEC - Set carry flag
    - SED - Set decimal mode
    - SEI - Set interrupt disable
    - NOP - No operation
    
    ### Undocumented instructions
    - DOP - Double no operation
    - TOP - Triple no operation
    - SLO - Shift left logical OR
    - RLA - Rotate left accumulator
    - SRE - Shift right logical XOR
    - RRA - Rotate right accumulator
    - SAX - Store accumulator and X register
    - LAX - Load accumulator and X register
    - DCP - Decrement compare
    - ISC - Increment subtract compare
    - ANC - AND with carry
    - ALR - AND with shift right logical
    - ARR - AND with rotate right
    - XAA - Transfer X to A
    - AXS - AND X and with A and store
    - AHX - Store A and X and high byte of address
    - SHY - Store Y and high byte of address
    - SHX - Store X and high point of address
    - TAS - Transfer A to stack pointer
    - LAS - Load A and S
    - KIL - Halt CPU

## 2. Add support for ROMs

## 3. PPU implementation

## 4. Scrolling support

## 5. APU support

## 6. Additional mapper support

## 7. Miscellaneous features
- Debugger
- Save/load states
- Fast-forward
- Rewind
- Cheats
- Add more tests
- Add support for ROMs with unofficial/weird instructions
- Logging system
- Upscaling
- Filters
- Support for different peripherals
- Button remapping