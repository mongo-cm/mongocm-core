
Debian
====================
This directory contains files used to package mongocmd/mongocm-qt
for Debian-based Linux systems. If you compile mongocmd/mongocm-qt yourself, there are some useful files here.

## mongocm: URI support ##


mongocm-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mongocm-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mongocmqt binary to `/usr/bin`
and the `../../share/pixmaps/mongocm128.png` to `/usr/share/pixmaps`

mongocm-qt.protocol (KDE)

