/* GS.GS2 1dea:0046 - mission_init
 * Mission/campaign initialization entry point
 * Sets up mission state, difficulty, theater, loads resources
 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_2000_000c(void);
extern unsigned short _far FUN_1dea_1048(unsigned short);
extern void _far FUN_27d1_0e56(unsigned short);
extern int _far FUN_1bca_0066(void);
extern void _far FUN_10bf_092e(unsigned short);
extern void _far FUN_10bf_01d5(unsigned short);
extern void _far FUN_1d02_000a(void);
extern void _far FUN_2741_06ca(void);
extern void _far FUN_1f61_060e(void);
extern void _far FUN_2658_034c(unsigned short);
extern void _far FUN_2658_0497(unsigned short*);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
extern void _far FUN_1dea_0f3a(void);
extern void _far FUN_23ed_0016(void);
extern void _far FUN_23ed_0044(void);

void _far mission_init(void)
{
    FUN_10bf_02c0();
    FUN_2000_000c();
    
    unsigned short uVar5 = *(unsigned short*)0x4f6;
    if (*(char*)0x8611 == '\0') {
        uVar5 = FUN_1dea_1048(0x14);
        *(unsigned short*)0x9f18 = uVar5;
        *(unsigned short*)0x9f1a = *(unsigned short*)0x4f6;  // in_DX preserved
    } else {
        *(unsigned short*)0x9f18 = *(unsigned short*)0x4f4;
        *(unsigned short*)0x9f1a = uVar5;
    }
    
    // Set difficulty/time acceleration
    if (*(char*)0x860f == '\0' && *(char*)0x861e == '\0' && *(char*)0x861d == '\0') {
        FUN_27d1_0e56(0x2000);
    }
    
    int iVar4 = FUN_1bca_0066();
    if (iVar4 != 0) {
        FUN_10bf_092e(0x7e4);
        FUN_10bf_01d5(2);
    }
    
    // Initialize mission state from briefing data
    *(int*)0x9f00 = (int)*(char*)0xbbe2;
    unsigned char bVar1 = *(unsigned char*)0xbbe3;
    *(unsigned int*)0x9f02 = bVar1 & 0x7f;
    if ((bVar1 & 0x7f) == 0x44) {  // 'D' key?
        *(unsigned short*)0x9f02 = 0x52;
    }
    
    *(unsigned int*)0x8c8 = (unsigned int)(*(char*)0xbbe5 != '\0');
    
    // Check mouse/joystick
    char cVar3;
    unsigned char* pcVar2 = (unsigned char*)0x33;
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
        cVar3 = (*pcVar2)();
        *(unsigned char*)0x8c8 = *(unsigned char*)0x8c8 | 2;
    }
    
    // Set mission type
    if ((*(unsigned char*)0xbbe4 & 0x60) == 0x40) {
        uVar5 = 0x1d;
    } else {
        uVar5 = 0x43;
    }
    *(unsigned short*)0x9f04 = uVar5;
    
    // Load mission resources
    if (*(int*)0x8c8 != 0) {
        FUN_1ef4_0000(*(unsigned short*)0xbbe6, *(unsigned short*)0xbbe8,
                      *(unsigned short*)0xbbea, *(unsigned short*)0xbbec,
                      *(unsigned short*)0xbbee);
    }
    
    FUN_1d02_000a();
    FUN_2741_06ca();
    FUN_1f61_060e();
    
    *(char*)0x861a = 0;
    
    if (*(int*)0x9f02 != 0x4e) {  // Not 'N'?
        FUN_2658_034c(0x811);
        unsigned short* puVar6 = (unsigned short*)0xe02d;
        FUN_2658_0497(puVar6);
        *puVar6 = *(unsigned short*)0x9f02;
        FUN_2658_034c(puVar6);
        FUN_2658_0497(puVar6);
        
        if (*(int*)0x9f02 == 0x4e || *(int*)0x9f02 == 0x49) {
            thunk_EXT_FUN_0000_0000(0x2658, 0, 0);
        } else {
            thunk_EXT_FUN_0000_0000(0x2658, 0, 0, 0,
                                  *(unsigned short*)0xbc00, *(unsigned short*)0xbc02,
                                  *(unsigned short*)0xbc04);
        }
        *(char*)0x861a = 1;
        
        if (*(char*)0x8618 != '\0' && (*(unsigned char*)0xbbe4 & 0x60) == 0x40) {
            FUN_1dea_0f3a();
        }
    }
    
    // Handle campaign branch
    if (*(char*)0xe287 == 1) {
        FUN_23ed_0016();
    } else if (*(char*)0xe287 == 2) {
        FUN_23ed_0044();
    }
    
    *(unsigned short*)0xbc3c = 0;
    *(unsigned short*)0xb836 = 0;
    *(char*)0xe276 = 0;
    return;
}