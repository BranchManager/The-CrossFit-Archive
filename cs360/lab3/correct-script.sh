ge=/home/plank/cs360/labs/lab4/Gradescript-Examples
cp $ge/onefile.c .
rm -f onefile.o onefile
cp $ge/001.fm fmakefile
if /home/plank/cs360/labs/lab4/fakemake; then
  ./onefile
fi
