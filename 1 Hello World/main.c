#define PB_ODR *(volatile char*)0x5005
#define PB_DDR *(volatile char*)0x5007

void main(){

    PB_DDR = (1 << 5);

    while(1){
        PB_ODR ^= (1 << 5);
        for(int i = 0; i < 30000; i++){;}
    }

}
