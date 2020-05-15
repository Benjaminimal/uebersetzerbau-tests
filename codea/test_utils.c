int case_num = -1;

int _assert(long acutal, long expected) {
    case_num++;
    if (acutal != expected) {
        printf("[Failed] ");
    }
    printf("(%d) acutal: %ld\texpected: %ld\n", case_num, acutal, expected);
    return acutal == expected;
}
