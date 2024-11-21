int main(){
  
    int admin = 0;
    int guess = 1;
    int check = 0;
    char buf[64];

    puts("Please Go ahead and leave a comment :");
    gets(buf);

    if (admin==0x59595959){
        puts("Hello admin!");
    }

    else{
        puts("Bye bye\n");
        exit(1);
    }
}
