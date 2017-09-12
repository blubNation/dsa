if [ -d "build" ]; then
  rm -fr build
fi
mkdir build

cd build
gcc -c ../src/*.cpp

gcc -o main -lm *.o -lm -lpthread

sudo chmod +700 main

mv main ../
