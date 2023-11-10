# STAWP :zany_face: :hourglass_flowing_sand:

![GitHub CI](https://github.com/angeldollface/stawp/actions/workflows/main.yml/badge.svg)

***A supercharged time application with a silly name. :zany_face: :hourglass_flowing_sand:***

## ABOUT :books:

Since I have been attempting to tune my Polybar system panel and wanted the time and date in a certain format and I could not write a shell script to do this, I decided to write a CLI application in C that displays the time or the date in the desired format. This repository contains the source code for this application. Enjoy. :heart:

## INSTALLATION :inbox_tray:

Make sure you have the following tools installed and available as commands from a terminal session:

- Git
- The GNU C Compiler
- CMake

To install ***Stawp***, follow these steps:

- 1.) Download the utility's source code:

```bash
git clone https://github.com/angeldollface/stawp.git
```

- 2.) Change into the source code's root directory:

```bash
cd stawp
```

- 3.) Compile ***Stawp***:

```bash
make
```

- 4.) Change the generated executable's permissions (on Mac OS or Linux):

```bash
make perm
```

- 5.) Move the file `stawp` to a location on your system's `$PATH`.

## USAGE :hammer:

If you installed ***Stawp***, the `stawp` command should be available from a terminal session. You can use the `stawp` command like this:

- Display the current time:

```bash
stawp time
```

- Display the current date:

```bash
stawp date
```

## CHANGELOG :black_nib:

### Version 0.1.0

- Initial release.
- Upload to GitHub.

# NOTE :scroll:

- *Stawp :zany_face: :hourglass_flowing_sand:* by Alexander Abraham :black_heart: a.k.a. *"Angel Dollface" :dolls: :ribbon:*
- Licensed under the MIT license.