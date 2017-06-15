        .gba
        .thumb
        .open "roms/BPRE0.gba","build/test.gba", 0x08000000

       .org 0x0871A240
        .importobj "build/linked.o"
        .close
