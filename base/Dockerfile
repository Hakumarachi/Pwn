FROM ubuntu:noble

RUN apt update

RUN apt install -y gdb git

RUN git clone https://github.com/pwndbg/pwndbg && cd pwndbg && ./setup.sh

RUN apt install -y gcc vim gcc-multilib g++-multilib

RUN apt install python3-pip -y

RUN python3 -m pip install pwntools --break-system-packages

RUN apt install make

RUN cp /etc/skel/.bashrc ~/.bashrc

RUN sed -i "s/#force_color/force_color/g" ~/.bashrc
