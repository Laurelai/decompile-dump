char lstrlenW[0] = "\xffffffe8W";

// address: 0x10001f80
int main(int argc, char **argv, char **envp) {
    int local10; 		// r30
    int local11; 		// r31
    int local3; 		// r24{54}
    int local4; 		// r24{59}
    int local5; 		// r1
    int local6; 		// r24
    int local7; 		// r25

    local11 = 0x100054c4;
    local6 = lstrlenW(local10);
    local6 = local10 + (local6 - 1) * 2;
    local4 = local6;
    if ((unsigned)local6 >= (unsigned)local10) {
        do {
            local3 = local6;
            local4 = local3;
            if (*(int*)local3 == 92) {
                goto L5;
            }
            local6 = local3 - 2;
            local4 = local6;
        } while ((unsigned)(local3 - 2) >= (unsigned)local10);
    }
L5:
    local6 = local4;
    local6 += 2;
    local7 = 83;
    local5 = 83;
    do {
        if (local5 != *(int*)local6) {
            local6 = 0;
            goto L0;
        }
        local7 = *(unsigned short*)(local11 + 2);
        local5 = (unsigned short) local7;
        local11 += 2;
        local6 += 2;
    } while ((unsigned short) local7 != 0);
    local6 = 1;
L0:
    return local6;
}

