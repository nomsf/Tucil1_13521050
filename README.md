# Tucil1_13521050
Repository ini adalah hasil dari Tugas Kecil mata kuliah Strategi Algoritma dalam Program Studi Teknik Informatika ITB tahun ajaran 2022/2023. Program dalam repository ini dibuat oleh:
 
 * Nama   : Naufal Syifa Firdaus
 * NIM    : 13521050

## 24 Card Game Solver
Permainan 24 adalah permainan kartu remi yang sering digunakan untuk mengasah kemampuan otak. Permainan dimulai dengan mengambil 4 kartu dan pemain berusaha menebak operasi matematika dengan kombinasi angka 4 kartu dan operasi (+,-,*,/) yang menghasilkan nilai 24.

Program ini bertujuan untuk menemukan semua ekspresi matematika dari keempat kartu yang menghasilkan nilai 24. Menggunakan algoritma Brute Force, program mengiterasi semua kemungkinan ekspresi matematika yang mungkin dan menentukan ekspresi mana yang menghasilkan 24. 

**Catatan**
- 2 atau lebih ekspresi dengan bentuk yang mirip akan dianggap sebagai solusi yang berbeda.
- Kartu A, J, Q, dan K secara berurut mempunyai nilai 1, 11, 12, dan 13.
- Pengukuran durasi algoritma menggunakan library <chrono>

## Requirement
Dalam pengembangannya, program dicompile oleh **GCC Version 6.3.0**.

## Compile and Run
Berikut cara compile dan menjalankan program:
1. Pastikan terminal berada pada directory `../Tucil1_13521050/src`
2. Jalankan perintah berikut
   ```sh
   gcc main.cpp -lstdc++ -o main 
   ```
3. Run program dengan
   ```sh
   ./main
   ```
   
   
Dalam folder bin disediakan executable yang seharusnya dapat langsung dijalankan dengan langkah berikut:
1. Pastikan terminal berada pada directory `../Tucil1_13521050/bin`
2. Run program dengan
   ```sh
   ./main
   ```

## How to Use
Pada dasarnya program akan meminta pengguna untuk memasukan input empat kartu. Input yang diterima adalah A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K. Jika pengguna memasukan lebih dari empat kartu, kartu setelah kartu keempat tidak akan masuk kedalam program. Program juga memiliki opsi untuk memasukan input acak yang dibuat oleh programnya sendiri. Lalu program akan menampilkan jumlah hasil, waktu komputasi, dan daftar hasil ekspresi matematika. Setelah itu, hasil dapat disimpan ke dalam file .txt yang akan disimpan pada folder `/test`

## Contact
Naufal Syifa Firdaus - naufalfirdaus21@gmail.com

Project Link : [https://github.com/nomsf/Tucil1_13521050](https://github.com/nomsf/Tucil1_13521050)
