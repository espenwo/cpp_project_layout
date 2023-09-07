
echo "Deleting old build folder... "
rm -rf build/

echo "Creating build folder"
mkdir build
cd build


echo "building project.. "
cmake ../src

echo "run Make ... "
make -j

./project_executable
