#/bin/sh
mkdir build;
cd build;
cmake ..;
make -j8;
seq_no="$1"
./demo "$seq_no";
#./exec 3;
#make clean;
cd ..
