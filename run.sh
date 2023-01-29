cp cool_module.c build
cd build
make
sudo dmesg -c
echo "Cleared dmesg. Waiting 4 seconds so the \"Goodbye!\" message shows up..."
sudo insmod cool_module.ko
sudo rmmod cool_module
sleep 4
sudo dmesg
make clean
rm cool_module.c
