int win(){

    puts("hi");
}

void vuln(){
    char buf[32];
    puts("Return to where? : ");
    gets(buf);
    puts("ok, let's go!");
}

int main(){
    vuln();
}
