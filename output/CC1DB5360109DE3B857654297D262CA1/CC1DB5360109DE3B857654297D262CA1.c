short global30 = 79;
char MmGetSystemRoutineAddress[0] = "h!";
int global32[1];
PDEVICE_OBJECT global33 = 0;
char IoDeleteDevice[0] = "\xffffffee ";
int global23 = 0xbb40e64e;
char IoAttachDeviceToDeviceStack[0] = "\xfffffffc!";
char IoCreateDevice[0] = "\xffffffdc ";
char IoDriverObjectType[0] = ":!";
void RtlInitUnicodeString;
int global15 = 0;
int global14 = 0;
int global13 = 0;
int global12 = 0;
int global11 = 0;
int global10 = 0;
int global9 = 0;
int global8 = 0;
int global7 = 0;
int global6 = 0;
int global5 = 0;
int global4 = 0;
int global3 = 0;
int global2 = 0;
int global1 = 0;
int global0 = 0;
char IoDetachDevice[0] = "\xffffffea!";
int global22 = 0;
int global21 = 0;
int global20 = 0;
int global19 = 0;
int global18 = 0;
int global17 = 0;
int global16 = 0;
int global36 = 0x44bf19b1;
char KeTickCount[0] = "\xffffffca\"";
char IoRegisterFsRegistrationChange[0] = "";

void proc1(int param1, int param2);
void proc2();
proc3(int param4, int param1, int param2, int param3);
proc4(int param5, int param1, int param2, int param3, int param4);
proc5(int param1, int param2, int param3);
proc6(int param6, int param3, int param4, int param2, int param1, int param5);
proc7(int param4, int param3, int param5, int param6, int param1, int param7, int param2);
proc8(int param2, int param6, int param1, int param5, int param4, int param3);
void proc9(int param1);
proc10(int param1, int param2);
proc11(int param2, int param1);
void proc12(int param1);
proc13(int param1, int param2);

// address: 0x12005
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    int local0; 		// r28{146}
    int local1; 		// r28{85}
    int local12; 		// r28{26}
    int local13; 		// r31{1}
    int local14; 		// local8{125}
    int local15; 		// local2{135}
    int local16; 		// r31{138}
    int local17; 		// local0{146}
    int local18; 		// r28{153}
    int local19; 		// r8
    int local2; 		// r28{135}
    int local20; 		// r24
    int local23; 		// r27
    int local24; 		// r28
    int local25; 		// r29
    int local26; 		// r30
    int local27; 		// r31
    int local3; 		// r28{71}
    int local4; 		// r28{63}
    int local7; 		// r24{47}
    int local8; 		// r24{125}
    int local9; 		// r24{42}

    *(int*)(local24 - 4) = local25;
    local20 = global23;
    if (global23 == 0) {
L16:
        local20 = *(char[0]*)KeTickCount ^ 0x11f0c;
        global23 = *(char[0]*)KeTickCount ^ 0x11f0c;
        if ((*(char[0]*)KeTickCount ^ 0x11f0c) == 0) {
            local20 = 0xbb40e64e;
            global23 = 0xbb40e64e;
        }
    } else {
        if (global23 == 0xbb40e64e) {
            goto L16;
        }
    }
    global36 = local20;
    local13 = local27;
    *(int*)(local24 - 4) = local25;
    *(int*)(local24 - 8) = local26;
    *(int*)(local24 - 12) = 0x11f9c;
    *(int*)(local24 - 16) = 0;
    *(int*)(local24 - 20) = 256;
    *(int*)(local24 - 24) = 8;
    *(int*)(local24 - 28) = 0;
    *(int*)(local24 - 32) = 8;
    *(int*)(local24 - 36) = DriverObject;
    global0 = DriverObject;
    local20 = IoCreateDevice(DriverObject, 8, 0, 8, 256, 0, &global33);
    local15 = local12;
    local16 = local13;
    local26 = local20;
    if (local20 < 0) {
L3:
        local2 = local15;
        local27 = local16;
        local17 = local2;
        if (global33 != 0) {
            *(int*)(local2 - 4) = global33;
            IoDeleteDevice(global33);
            local17 = local1;
        }
        local0 = local17;
        *(int*)(DriverObject + 40) = 0;
        local20 = local26;
        local18 = local0;
    } else {
        *(int*)(local24 - 40) = 0;
        *(int*)(local24 - 44) = *(int*)(global33 + 40);
        *(int*)(local24 - 48) = IoCreateDevice;
        proc1(*(int*)(global33 + 40), 0);
        *(int*)(local24 - 40) = 56;
        local9 = 56;
        local14 = local9;
        do {
            local8 = local14;
            *(int*)(local8 + DriverObject) = 0x10486;
            local7 = local8 + 4;
            local14 = local7;
        } while (local8 + 4 <= 164);
        *(int*)(DriverObject + 108) = 0x10496;
        *(int*)(DriverObject + 104) = 0x104ec;
        *(int*)(local24 - 40) = IoCreateDevice + 826;
        proc2();
        *(int*)(local24 - 40) = IoCreateDevice + 237;
        local19 = proc3(local19, local23, local20, local27); /* Warning: also results in local23, local4, local27 */
        local16 = local27;
        *(int*)(local4 - 4) = 0x109ec;
        *(int*)(local4 - 8) = DriverObject;
        *(int*)(local4 - 12) = IoCreateDevice + 23;
        local20 = IoRegisterFsRegistrationChange(DriverObject, 0x109ec);
        local15 = local3;
        local18 = local3;
        local26 = local20;
        if (local20 >= 0) {
            local20 = 0;
        } else {
            goto L3;
        }
    }
    local24 = local18;
    return local20;
}

// address: 0x10a92
void proc1(int param1, int param2) {
    int local2; 		// r28

    *(int*)param1 = 0;
    *(int*)(param1 + 4) = 0;
    *(int*)param1 = 0;
    *(int*)(param1 + 4) = param2;
    return;
}

// address: 0x10542
void proc2() {
    global1 = 112;
    global2 = 0x10e98;
    global3 = 0x10eec;
    global4 = 0x10f40;
    global5 = 0x10f94;
    global6 = 0x10fde;
    global7 = 0x11028;
    global8 = 0x1107e;
    global9 = 0x110ce;
    global10 = 0x11116;
    global11 = 0x11160;
    global12 = 0x111b6;
    global13 = 0x111d6;
    global14 = 0x11220;
    global15 = 0x11270;
    global16 = 0x112b4;
    global17 = 0x11304;
    global18 = 0x1134c;
    global19 = 0x113a6;
    global20 = 0x11400;
    global21 = 0x11444;
    global22 = 0x1148c;
    *(int*)(global0 + 40) = 0x11f28;
    return;
}

// address: 0x106be
proc3(int param4, int param1, int param2, int param3) {
    int local0; 		// m[r29 - 28]{83}
    int local2; 		// m[r29 - 28]{46}
    int local3; 		// local0{83}
    int local4; 		// r24
    int local7; 		// r28

    local3 = *(int*)(ebp - 28);
    *(int*)(local7 - 4) = 20;
    *(int*)(local7 - 8) = 0x11e38;
    ebp = proc4(0x11e38, 20, param1, param2, param3);
    *(int*)(ebp - 4) = 0;
    *(int*)(local7 - 4) = 0x11b1a;
    *(int*)(local7 - 8) = ebp - 36;
    RtlInitUnicodeString(ebp - 36, &global30);
    *(int*)(local7 - 12) = ebp - 36;
    *(int*)(local7 - 16) = RtlInitUnicodeString;
    MmGetSystemRoutineAddress();
    param2 = local4;
    if (local4 != 0) {
        *(int*)(ebp - 28) = 0;
        local0 = local3;
        while (*(int*)(ebp - 28) < 3) {
            *(int*)(local7 - 4) = global32[(*(int*)(ebp - 28))];
            *(int*)(local7 - 8) = param2;
            param2 = proc5(param1, param2, param3); /* Warning: also results in param4, param1, ebp, param3 */
            local2 = *(int*)(ebp - 28) + 1;
            local3 = local2;
            local0 = local3;
        }
    }
    *(int*)(ebp - 4) = -2;
    param1 = proc6(*(int*)(local7 + 4), *(int*)(local7 + 8), *(int*)(local7 + 12), ebp, *(int*)(ebp - 16), *(int*)ebp); /* Warning: also results in param3 */
    return param4; /* WARNING: Also returning: param1, param3 */
}

// address: 0x117c4
proc4(int param5, int param1, int param2, int param3, int param4) {
    int local0; 		// r24
    int local1; 		// r28

    *(int*)(local1 - 4) = 0x11830;
    *(int*)(local1 - 8) = *(int*)0;
    *(int*)(local1 - param1 - 12) = param2;
    *(int*)(local1 - param1 - 16) = param3;
    *(int*)(local1 - param1 - 20) = param4;
    param5 = param5 ^ global23;
    local0 = global23 ^ local1 + 8;
    *(int*)(local1 - param1 - 24) = local0;
    *(int*)(local1 - 16) = local1 - param1 - 24;
    *(int*)(local1 - param1 - 28) = *(int*)local1;
    *(int*)local1 = param5;
    *(int*)0 = local1 - 8;
    return local1 + 8;
}

// address: 0x10630
proc5(int param1, int param2, int param3) {
    int local0; 		// m[r28 - 8]{56}
    int local1; 		// m[r28 - 4]{54}
    int local10; 		// r28
    void *local2; 		// %pc{43}
    void *local4; 		// %pc{89}
    void *local5; 		// %pc{101}
    int local6; 		// r8
    int local7; 		// r24
    int local8; 		// r25
    int local9; 		// r26

    *(int*)(local10 - 4) = 16;
    *(int*)(local10 - 8) = 0x11e18;
    ebp = proc4(0x11e18, 16, param1, param2, param3);
    *(int*)(ebp - 4) = 0;
    *(int*)(local10 - 4) = *(int*)(ebp + 12);
    *(int*)(local10 - 8) = ebp - 32;
    RtlInitUnicodeString(ebp - 32, *(int*)(ebp + 12));
    *(int*)(local10 - 12) = ebp + 12;
    *(int*)(local10 - 16) = 0;
    *(int*)(local10 - 20) = 0;
    *(int*)(local10 - 24) = *(char[0]*)IoDriverObjectType;
    *(int*)(local10 - 28) = 0;
    *(int*)(local10 - 32) = 0;
    *(int*)(local10 - 36) = 64;
    *(int*)(local10 - 40) = ebp - 32;
    *(int*)(local10 - 44) = RtlInitUnicodeString;
    (**(int*)(ebp + 8))(RtlInitUnicodeString, ebp - 32, 64, 0, 0, *(char[0]*)IoDriverObjectType, 0, 0, pc, ebp + 12, 0x11e18, ebp - 32, 16, *(int*)(ebp + 12), ebp - 32, local8, local9, ebp, 0, 0, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
    local4 = local2;
    local5 = local2;
    if (local7 >= param3) {
        param2 = *(int*)(*(int*)(ebp + 12) + 4);
        while (param2 != param3) {
            local1 = 1;
            local0 = param2;
            param2 = proc7(*(int*)(local10 - 8), *(int*)(local10 - 4), local8, local9, ebp, param2, param3); /* Warning: also results in local6, local8, local9, ebp, param3 */
            param2 = *(int*)(param2 + 12);
        }
        ObfDereferenceObject(*(int*)local10);
        *(int*)(ebp - 4) = -2;
    } else {
        *(int*)(ebp - 4) = -2;
    }
    param2 = proc6(*(int*)(local10 + 4), *(int*)(local10 + 8), *(int*)(local10 + 12), ebp, *(int*)(ebp - 16), *(int*)ebp); /* Warning: also results in param1, ebp, param3 */
    return param2; /* WARNING: Also returning: local6, param1, ebp, param3 */
}

// address: 0x11809
proc6(int param6, int param3, int param4, int param2, int param1, int param5) {
    int local1; 		// r28

    *(int*)0 = param1;
    return param3; /* WARNING: Also returning: param4, param5, param6 */
}

// address: 0x109ec
proc7(int param4, int param3, int param5, int param6, int param1, int param7, int param2) {
    int local2; 		// m[r28 - 16]{23}
    int local3; 		// %pc{27}
    int local4; 		// r28{60}
    int local5; 		// %pc{65}
    int local6; 		// r28{71}
    int local7; 		// r8
    int local9; 		// r28

    *(int*)(local9 - 4) = param1;
    *(int*)(local9 - 8) = param2;
    if (param3 == 0) {
        local7 = (unsigned char) param4;
        *(int*)(local9 - 12) = param7;
        param7 = *(int*)(param4 + 16);
        param2 = param4;
        local4 = local9 - 12;
        local6 = local4;
        while (param7 != 0) {
            local2 = param7;
            proc9(*(int*)(local9 - 16));
            local5 = local3;
            if ((unsigned char) param4 != 0) {
                *(int*)(local9 - 16) = param2;
                IoDetachDevice();
                *(int*)(local9 - 20) = param7;
                *(int*)(local9 - 24) = IoDetachDevice;
                IoDeleteDevice(param7);
                local6 = local9;
                goto L1;
            }
            param2 = param7;
            param7 = *(int*)(param7 + 16);
            local4 = local9 - 12;
            local6 = local4;
        }
L1:
        local9 = local6;
        param7 = *(int*)local9;
        local9 += 4;
    } else {
        param7 = proc8(param5, param6, local9 - 4, param7, param4, *(int*)(param4 + 44)); /* Warning: also results in local7, param5, param6 */
    }
    return param7; /* WARNING: Also returning: local7, param5, param6, param4, *(int*)local9 */
}

// address: 0x10980
proc8(int param2, int param6, int param1, int param5, int param4, int param3) {
    int local0; 		// m[r28 - 12]{65}
    int local3; 		// m[r28 - 12]{57}
    int local5; 		// m[r28 - 12]{46}
    int local7; 		// r8
    int local8; 		// r24
    int local9; 		// r28

    *(int*)(local9 - 4) = param1;
    *(int*)(local9 - 8) = param2;
    local7 = (unsigned char) param3;
    *(int*)(local9 - 8) = 0;
    if (param3 == 8) {
L9:
        *(int*)(local9 - 12) = param4;
        local7 = proc10(param4, param2); /* Warning: also results in param2 */
        if (local7 == 0) {
            local7 = (unsigned char) local9 - 8;
            *(int*)(local9 - 12) = local9 - 8;
            *(int*)(local9 - 16) = param4;
            local8 = proc11(local9 - 8, local9 - 4); /* Warning: also results in param2, param6, param1 */
            if (local8 >= 0) {
                *(int*)(local9 - 4) = param5;
                *(int*)(local9 - 8) = param4;
                local5 = *(int*)(param1 - 4);
                proc12(*(int*)(param1 - 4));
                local7 = (unsigned char) *(int*)(param1 - 4);
                param5 = *(int*)(*(int*)(param1 - 4) + 40);
                *(int*)(local9 - 8) = 0;
                local3 = param5;
                proc1(param5, 0);
                *(int*)(local9 - 8) = param5;
                local0 = param4;
                *(int*)(local9 - 16) = *(int*)(param1 - 4);
                local8 = proc13(param4, param5); /* Warning: also results in param2, param6, param1 */
                param5 = *(int*)(local9 - 12);
                if (local8 < 0) {
                    *(int*)(local9 - 12) = *(int*)(param1 - 4);
                    IoDeleteDevice(*(int*)(param1 - 4));
                }
            }
        }
    } else {
        if (param3 == 3) {
            goto L9;
        } else {
            if (param3 == 20) {
                goto L9;
            }
        }
    }
    return param5; /* WARNING: Also returning: local7, param2, param6 */
}

// address: 0x10aea
void proc9(int param1) {
    int local1; 		// r24
    int local2; 		// r28

    if (param1 == 0) {
L1:
    } else {
        local1 = *(int*)(param1 + 8);
        if (local1 != global0) {
            goto L1;
        } else {
        }
    }
    return;
}

// address: 0x10ab4
proc10(int param1, int param2) {
    int local1; 		// r24{25}
    int local2; 		// r24{47}
    int local3; 		// local2{47}
    char local4; 		// r8
    char local5; 		// r24
    char local6; 		// r28

    local5 = param1;
    local3 = local5;
    if (param1 != 0) {
        do {
            local2 = local3;
            local1 = *(int*)(local2 + 16);
            local3 = local1;
            local3 = local1;
            if (*(int*)(local2 + 16) == 0) {
L4:
                local4 = 0;
                goto L0;
            }
            param2 = *(int*)(*(int*)(local2 + 16) + 8);
            if (param2 != global0) {
                continue;
            }
        } while (*(int*)(*(int*)(local2 + 16) + 40) != 0);
        local4 = 1;
    } else {
        goto L4;
    }
L0:
    return local4; /* WARNING: Also returning: param2 */
}

// address: 0x10a3c
proc11(int param2, int param1) {
    int local1; 		// m[r28 - 32]{20}
    int local2; 		// r24
    int local3; 		// r25
    int local4; 		// r26
    int local5; 		// r28

    *(int*)(local5 - 4) = param1;
    *(int*)(local5 - 8) = param2;
    *(int*)(local5 - 12) = 0;
    *(int*)(local5 - 16) = 0;
    *(int*)(local5 - 20) = *(int*)(*(int*)(local5 + 4) + 44);
    *(int*)(local5 - 24) = 0;
    *(int*)(local5 - 28) = 8;
    local1 = global0;
    local2 = IoCreateDevice(global0, 8, 0, *(int*)(*(int*)(local5 + 4) + 44), 0, 0, param2);
    return local2; /* WARNING: Also returning: local3, local4, *(int*)(local5 - 32) */
}

// address: 0x10a66
void proc12(int param1) {
    int local1; 		// r25
    int local2; 		// r26
    int local3; 		// r28

    local2 = *(int*)(*(int*)(local3 + 8) + 28);
    *(int*)(param1 + 28) = *(int*)(param1 + 28) | local2 & 0x40014;
    local1 = *(int*)(*(int*)(local3 + 8) + 32);
    *(int*)(param1 + 32) = *(int*)(param1 + 32) | local1 & 0x100;
    return;
}

// address: 0x10b12
proc13(int param1, int param2) {
    int local6; 		// r24
    int local7; 		// r25
    int local8; 		// r26
    int local9; 		// r28

    *(int*)param2 = param1;
    IoAttachDeviceToDeviceStack();
    *(int*)param2 = local6;
    return 0; /* WARNING: Also returning: local7, local8, param1 */
}

