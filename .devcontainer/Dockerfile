FROM ubuntu:20.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update -y && \
    apt-get install -y --no-install-recommends \
    x11-apps \
    libpcl-dev \
    cmake \
    build-essential

WORKDIR /workspaces