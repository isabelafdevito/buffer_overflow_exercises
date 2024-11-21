int main(){

    int admin = 0;
    char buf[0x10];

    puts("PLease go ahead and leave a comment :");
    gets(buf);

    if (admin){
     puts("Hello admin!");
    }

    else{
        puts("Bye bye\n");
        exit(1);
    }
}

