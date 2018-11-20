#!/bin/bash
ifconfig -a | grep HWaddr | cut -d " " -f9
