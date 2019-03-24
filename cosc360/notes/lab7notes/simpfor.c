main()
{
  int i;

  printf("simpfork: pid = %d\n", getpid());
  i = fork();
  printf("Did a fork.  It returned %d.  getpid = %d.  getppid = %d\n",
    i, getpid(), getppid());
}
