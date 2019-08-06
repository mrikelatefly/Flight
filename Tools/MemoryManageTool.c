
char FlashMemory[256][16][4*1024]={0};//256个Block 每个block由16个sector构成 一个sector大小为4K
char TempBuff[4*1024]={0};//单片机大小所限4k个buff已经比较大了



//参数 写入的指针 写入sector的位置 写入的大小
char FlashRead(char *buff,char location,int size);
char FlashWrite(char *buff,char location,int size);