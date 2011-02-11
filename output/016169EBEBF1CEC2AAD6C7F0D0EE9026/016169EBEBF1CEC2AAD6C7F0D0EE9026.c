char global0[0] = "";
char lstrcmpiA[0] = "|3";

// address: 0x10001161
int main(int argc, char **argv, char **envp) {
    int local0; 		// r28{130}
    int local1; 		// r27{129}
    short local10; 		// r30
    short local11; 		// r31
    int local2; 		// r30{16}
    short local5; 		// r24
    short local8; 		// r27
    short local9; 		// r28

    if (*(char[0]*)global0 == 0x5a4d) {
        *(int*)(local9 - 4) = local10;
        local2 = *(int*)(global0 + 60);
        if (*(int*)(local2 + global0) == 0x4550) {
            local5 = *(unsigned short*)(local2 + global0 + 20);
            *(int*)(local9 - 8) = local8;
            *(int*)(local9 - 12) = local11;
            local9 = local9 - 12;
            local11 = local5 + local2 + global0 + 24;
            local8 = 0;
            if (0 >= (unsigned)*(int*)(local2 + global0 + 6)) {
L2:
                local5 = 0;
            } else {
                do {
                    local1 = local8;
                    local0 = local9;
                    *(int*)(local0 - 4) = 0x100032b8;
                    *(int*)(local0 - 8) = local11;
                    lstrcmpiA();
                    if (local5 == 0) {
                        if ((unsigned)*(int*)(local11 + 8) < 556) {
                            goto L2;
                        } else {
                            if (*(int*)(*(int*)(local11 + 12) + global0) != 0xae39120d) {
                                goto L2;
                            } else {
                                local5 = *(int*)(local11 + 12) + global0 + 4;
                                *(int*)*(int*)(local0 + 8) = local5;
                                *(int*)*(int*)(local0 + 12) = *(int*)(local11 + 8) - 4;
                                local5 = 1;
                            }
                        }
                        goto L1;
                    }
                    local5 = *(unsigned short*)(local2 + global0 + 6);
                    local8 = local1 + 1;
                    local11 += 40;
                } while (local1 + 1 < local5);
                goto L2;
            }
L1:
            local11 = *(short*)local9;
            local8 = argc;
            local10 = argv;
        } else {
            local5 = 0;
        }
    } else {
        local5 = 0;
    }
    return local5;
}

